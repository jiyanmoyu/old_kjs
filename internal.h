// -*- c-basic-offset: 2 -*-
/*
 *  This file is part of the KDE libraries
 *  Copyright (C) 1999-2001 Harri Porten (porten@kde.org)
 *  Copyright (C) 2001 Peter Kelly (pmk@post.com)
 *  Copyright (C) 2003 Apple Computer, Inc.
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Library General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Library General Public License for more details.
 *
 *  You should have received a copy of the GNU Library General Public License
 *  along with this library; see the file COPYING.LIB.  If not, write to
 *  the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 *  Boston, MA 02111-1307, USA.
 *
 */

#ifndef _INTERNAL_H_
#define _INTERNAL_H_

#include "ustring.h"
#include "value.h"
#include "object.h"
#include "types.h"
#include "interpreter.h"
#include "scope_chain.h"

#define I18N_NOOP(s) s

namespace KJS {

  static const double D16 = 65536.0;
  static const double D32 = 4294967296.0;

  class ProgramNode;
  class FunctionBodyNode;
  class FunctionPrototypeImp;
  class FunctionImp;
  class Debugger;

  // ---------------------------------------------------------------------------
  //                            Primitive impls
  // ---------------------------------------------------------------------------

  class UndefinedImp : public ValueImp {
  public:
    Type type() const { return UndefinedType; }

    Value toPrimitive(ExecState *exec, Type preferred = UnspecifiedType) const;
    bool toBoolean(ExecState *exec) const;
    double toNumber(ExecState *exec) const;
    UString toString(ExecState *exec) const;
    Object toObject(ExecState *exec) const;

    static UndefinedImp *staticUndefined;
  };

  inline Undefined::Undefined(UndefinedImp *imp) : Value(imp) { }

  class NullImp : public ValueImp {
  public:
    Type type() const { return NullType; }

    Value toPrimitive(ExecState *exec, Type preferred = UnspecifiedType) const;
    bool toBoolean(ExecState *exec) const;
    double toNumber(ExecState *exec) const;
    UString toString(ExecState *exec) const;
    Object toObject(ExecState *exec) const;

    static NullImp *staticNull;
  };

  inline Null::Null(NullImp *imp) : Value(imp) { }

  class BooleanImp : public ValueImp {
  public:
    BooleanImp(bool v = false) : val(v) { }
    bool value() const { return val; }

    Type type() const { return BooleanType; }

    Value toPrimitive(ExecState *exec, Type preferred = UnspecifiedType) const;
    bool toBoolean(ExecState *exec) const;
    double toNumber(ExecState *exec) const;
    UString toString(ExecState *exec) const;
    Object toObject(ExecState *exec) const;

    static BooleanImp *staticTrue;
    static BooleanImp *staticFalse;
  private:
    bool val;
  };
  
  inline Boolean::Boolean(BooleanImp *imp) : Value(imp) { }

  class StringImp : public ValueImp {
  public:
    StringImp(const UString& v) : val(v) { }
    UString value() const { return val; }

    Type type() const { return StringType; }

    Value toPrimitive(ExecState *exec, Type preferred = UnspecifiedType) const;
    bool toBoolean(ExecState *exec) const;
    double toNumber(ExecState *exec) const;
    UString toString(ExecState *exec) const;
    Object toObject(ExecState *exec) const;

  private:
    UString val;
  };

  inline String::String(StringImp *imp) : Value(imp) { }

  class NumberImp : public ValueImp {
    friend class Number;
    friend class InterpreterImp;
  public:
    static ValueImp *create(int);
    static ValueImp *create(double);
    static ValueImp *zero() { return SimpleNumber::make(0); }
    static ValueImp *one() { return SimpleNumber::make(1); }
    static ValueImp *two() { return SimpleNumber::make(2); }
    
    double value() const { return val; }

    Type type() const { return NumberType; }

    Value toPrimitive(ExecState *exec, Type preferred = UnspecifiedType) const;
    bool toBoolean(ExecState *exec) const;
    double toNumber(ExecState *exec) const;
    UString toString(ExecState *exec) const;
    Object toObject(ExecState *exec) const;

    static NumberImp *staticNaN;

  private:
    NumberImp(double v) : val(v) { }

    virtual bool toUInt32(unsigned&) const;

    double val;
  };

  inline Number::Number(NumberImp *imp) : Value(imp) { }

  /**
   * @short The "label set" in Ecma-262 spec
   */
  class LabelStack {
  public:
    LabelStack(): tos(0L) {}
    ~LabelStack();

    LabelStack(const LabelStack &other);
    LabelStack &operator=(const LabelStack &other);

    /**
     * If id is not empty and is not in the stack already, puts it on top of
     * the stack and returns true, otherwise returns false
     */
    bool push(const Identifier &id);
    /**
     * Is the id in the stack?
     */
    bool contains(const Identifier &id) const;
    /**
     * Removes from the stack the last pushed id (what else?)
     */
    void pop();
  private:
    struct StackElem {
      Identifier id;
      StackElem *prev;
    };

    StackElem *tos;
    void clear();
  };


  // ---------------------------------------------------------------------------
  //                            Parsing & evaluateion
  // ---------------------------------------------------------------------------

  enum CodeType { GlobalCode,
		  EvalCode,
		  FunctionCode,
		  AnonymousCode };

  /**
   * @internal
   *
   * Parses ECMAScript source code and converts into ProgramNode objects, which
   * represent the root of a parse tree. This class provides a conveniant workaround
   * for the problem of the bison parser working in a static context.
   */
  class Parser {
  public:
    static ProgramNode *parse(const UChar *code, unsigned int length, int *sourceId = 0,
			      int *errLine = 0, UString *errMsg = 0);

    static ProgramNode *progNode;
    static int sid;
  };

  class SavedBuiltinsInternal {
    friend class InterpreterImp;
  private:
    Object b_Object;
    Object b_Function;
    Object b_Array;
    Object b_Boolean;
    Object b_String;
    Object b_Number;
    Object b_Date;
    Object b_RegExp;
    Object b_Error;

    Object b_ObjectPrototype;
    Object b_FunctionPrototype;
    Object b_ArrayPrototype;
    Object b_BooleanPrototype;
    Object b_StringPrototype;
    Object b_NumberPrototype;
    Object b_DatePrototype;
    Object b_RegExpPrototype;
    Object b_ErrorPrototype;

    Object b_evalError;
    Object b_rangeError;
    Object b_referenceError;
    Object b_syntaxError;
    Object b_typeError;
    Object b_uriError;

    Object b_evalErrorPrototype;
    Object b_rangeErrorPrototype;
    Object b_referenceErrorPrototype;
    Object b_syntaxErrorPrototype;
    Object b_typeErrorPrototype;
    Object b_uriErrorPrototype;
  };

  class InterpreterImp {
    friend class Collector;
  public:
    static void globalInit();
    static void globalClear();

    InterpreterImp(Interpreter *interp, const Object &glob);
    ~InterpreterImp();

    Object &globalObject() const { return const_cast<Object &>(global); }
    Interpreter* interpreter() const { return m_interpreter; }

    void initGlobalObject();
    static void lock();
    static void unlock();
    static int lockCount();

    void mark();

    ExecState *globalExec() { return globExec; }
    bool checkSyntax(const UString &code);
    Completion evaluate(const UString &code, const Value &thisV);
    Debugger *debugger() const { return dbg; }
    void setDebugger(Debugger *d);

    Object builtinObject() const { return b_Object; }
    Object builtinFunction() const { return b_Function; }
    Object builtinArray() const { return b_Array; }
    Object builtinBoolean() const { return b_Boolean; }
    Object builtinString() const { return b_String; }
    Object builtinNumber() const { return b_Number; }
    Object builtinDate() const { return b_Date; }
    Object builtinRegExp() const { return b_RegExp; }
    Object builtinError() const { return b_Error; }

    Object builtinObjectPrototype() const { return b_ObjectPrototype; }
    Object builtinFunctionPrototype() const { return b_FunctionPrototype; }
    Object builtinArrayPrototype() const { return b_ArrayPrototype; }
    Object builtinBooleanPrototype() const { return b_BooleanPrototype; }
    Object builtinStringPrototype() const { return b_StringPrototype; }
    Object builtinNumberPrototype() const { return b_NumberPrototype; }
    Object builtinDatePrototype() const { return b_DatePrototype; }
    Object builtinRegExpPrototype() const { return b_RegExpPrototype; }
    Object builtinErrorPrototype() const { return b_ErrorPrototype; }

    Object builtinEvalError() const { return b_evalError; }
    Object builtinRangeError() const { return b_rangeError; }
    Object builtinReferenceError() const { return b_referenceError; }
    Object builtinSyntaxError() const { return b_syntaxError; }
    Object builtinTypeError() const { return b_typeError; }
    Object builtinURIError() const { return b_uriError; }

    Object builtinEvalErrorPrototype() const { return b_evalErrorPrototype; }
    Object builtinRangeErrorPrototype() const { return b_rangeErrorPrototype; }
    Object builtinReferenceErrorPrototype() const { return b_referenceErrorPrototype; }
    Object builtinSyntaxErrorPrototype() const { return b_syntaxErrorPrototype; }
    Object builtinTypeErrorPrototype() const { return b_typeErrorPrototype; }
    Object builtinURIErrorPrototype() const { return b_uriErrorPrototype; }

    void setCompatMode(Interpreter::CompatMode mode) { m_compatMode = mode; }
    Interpreter::CompatMode compatMode() const { return m_compatMode; }

    // Chained list of interpreters (ring)
    static InterpreterImp* firstInterpreter() { return s_hook; }
    InterpreterImp *nextInterpreter() const { return next; }
    InterpreterImp *prevInterpreter() const { return prev; }
    
    void setContext(ContextImp *c) { _context = c; }

    void saveBuiltins (SavedBuiltins &builtins) const;
    void restoreBuiltins (const SavedBuiltins &builtins);

  private:
    void clear();
    Interpreter *m_interpreter;
    Object global;
    Debugger *dbg;

    // Built-in properties of the object prototype. These are accessible
    // from here even if they are replaced by js code (e.g. assigning to
    // Array.prototype)

    Object b_Object;
    Object b_Function;
    Object b_Array;
    Object b_Boolean;
    Object b_String;
    Object b_Number;
    Object b_Date;
    Object b_RegExp;
    Object b_Error;

    Object b_ObjectPrototype;
    Object b_FunctionPrototype;
    Object b_ArrayPrototype;
    Object b_BooleanPrototype;
    Object b_StringPrototype;
    Object b_NumberPrototype;
    Object b_DatePrototype;
    Object b_RegExpPrototype;
    Object b_ErrorPrototype;

    Object b_evalError;
    Object b_rangeError;
    Object b_referenceError;
    Object b_syntaxError;
    Object b_typeError;
    Object b_uriError;

    Object b_evalErrorPrototype;
    Object b_rangeErrorPrototype;
    Object b_referenceErrorPrototype;
    Object b_syntaxErrorPrototype;
    Object b_typeErrorPrototype;
    Object b_uriErrorPrototype;

    ExecState *globExec;
    Interpreter::CompatMode m_compatMode;

    // Chained list of interpreters (ring) - for collector
    static InterpreterImp* s_hook;
    InterpreterImp *next, *prev;
    
    ContextImp *_context;

    int recursion;
  };

  class AttachedInterpreter;
  class DebuggerImp {
  public:

    DebuggerImp() {
      interps = 0;
      isAborted = false;
    }

    void abort() { isAborted = true; }
    bool aborted() const { return isAborted; }

    AttachedInterpreter *interps;
    bool isAborted;
  };



  class InternalFunctionImp : public ObjectImp {
  public:
    InternalFunctionImp(FunctionPrototypeImp *funcProto);
    bool implementsHasInstance() const;
    Boolean hasInstance(ExecState *exec, const Value &value);

    virtual const ClassInfo *classInfo() const { return &info; }
    static const ClassInfo info;
  };

  // helper function for toInteger, toInt32, toUInt32 and toUInt16
  double roundValue(ExecState *exec, const Value &v);

#ifndef NDEBUG
  void printInfo(ExecState *exec, const char *s, const Value &o, int lineno = -1);
#endif

}; // namespace


#endif //  _INTERNAL_H_
