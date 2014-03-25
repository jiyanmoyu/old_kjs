/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_GRAMMAR_TAB_H_INCLUDED
# define YY_YY_GRAMMAR_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NULLTOKEN = 258,
    TRUETOKEN = 259,
    FALSETOKEN = 260,
    STRING = 261,
    NUMBER = 262,
    BREAK = 263,
    CASE = 264,
    DEFAULT = 265,
    FOR = 266,
    NEW = 267,
    VAR = 268,
    CONTINUE = 269,
    FUNCTION = 270,
    RETURN = 271,
    VOID = 272,
    DELETE = 273,
    IF = 274,
    THIS = 275,
    DO = 276,
    WHILE = 277,
    ELSE = 278,
    IN = 279,
    INSTANCEOF = 280,
    TYPEOF = 281,
    SWITCH = 282,
    WITH = 283,
    RESERVED = 284,
    THROW = 285,
    TRY = 286,
    CATCH = 287,
    FINALLY = 288,
    EQEQ = 289,
    NE = 290,
    STREQ = 291,
    STRNEQ = 292,
    LE = 293,
    GE = 294,
    OR = 295,
    AND = 296,
    PLUSPLUS = 297,
    MINUSMINUS = 298,
    LSHIFT = 299,
    RSHIFT = 300,
    URSHIFT = 301,
    PLUSEQUAL = 302,
    MINUSEQUAL = 303,
    MULTEQUAL = 304,
    DIVEQUAL = 305,
    LSHIFTEQUAL = 306,
    RSHIFTEQUAL = 307,
    URSHIFTEQUAL = 308,
    ANDEQUAL = 309,
    MODEQUAL = 310,
    XOREQUAL = 311,
    OREQUAL = 312,
    IDENT = 313,
    AUTOPLUSPLUS = 314,
    AUTOMINUSMINUS = 315
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 55 "grammar.y" /* yacc.c:1909  */

  int                 ival;
  double              dval;
  UString             *ustr;
  Identifier          *ident;
  Node                *node;
  StatementNode       *stat;
  ParameterNode       *param;
  FunctionBodyNode    *body;
  FuncDeclNode        *func;
  ProgramNode         *prog;
  AssignExprNode      *init;
  SourceElementsNode  *srcs;
  StatListNode        *slist;
  ArgumentsNode       *args;
  ArgumentListNode    *alist;
  VarDeclNode         *decl;
  VarDeclListNode     *vlist;
  CaseBlockNode       *cblk;
  ClauseListNode      *clist;
  CaseClauseNode      *ccl;
  ElementNode         *elm;
  Operator            op;
  PropertyValueNode   *plist;
  PropertyNode        *pnode;
  CatchNode           *cnode;
  FinallyNode         *fnode;

#line 144 "grammar.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_GRAMMAR_TAB_H_INCLUDED  */
