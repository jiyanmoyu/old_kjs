/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         kjsyyparse
#define yylex           kjsyylex
#define yyerror         kjsyyerror
#define yydebug         kjsyydebug
#define yynerrs         kjsyynerrs

#define yylval          kjsyylval
#define yychar          kjsyychar
#define yylloc          kjsyylloc

/* Copy the first part of user declarations.  */
#line 1 "grammar.y" /* yacc.c:339  */


/*
 *  This file is part of the KDE libraries
 *  Copyright (C) 1999-2000 Harri Porten (porten@kde.org)
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif
#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <memory>
#include <cstdlib>
#include "value.h"
#include "object.h"
#include "types.h"
#include "interpreter.h"
#include "nodes.h"
#include "lexer.h"
#include "internal.h"

// Not sure why, but yacc doesn't add this define along with the others.
#define yylloc kjsyylloc

/* default values for bison */
#define YYDEBUG 0
#define YYMAXDEPTH 0
#if !APPLE_CHANGES
#define YYERROR_VERBOSE
#endif
#define DBG(l, s, e) { l->setLoc(s.first_line, e.last_line, Parser::sid); } // location

extern int kjsyylex();
int kjsyyerror(const char *);
static bool automatic();

using namespace KJS;


#line 132 "grammar.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "grammar.h".  */
#ifndef YY_KJSYY_GRAMMAR_H_INCLUDED
# define YY_KJSYY_GRAMMAR_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int kjsyydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NULLTOKEN = 258,
    TRUETOKEN = 259,
    FALSETOKEN = 260,
    BREAK = 261,
    CASE = 262,
    DEFAULT = 263,
    FOR = 264,
    NEW = 265,
    VAR = 266,
    CONTINUE = 267,
    FUNCTION = 268,
    RETURN = 269,
    VOID = 270,
    DELETE = 271,
    IF = 272,
    THIS = 273,
    DO = 274,
    WHILE = 275,
    ELSE = 276,
    IN = 277,
    INSTANCEOF = 278,
    TYPEOF = 279,
    SWITCH = 280,
    WITH = 281,
    RESERVED = 282,
    THROW = 283,
    TRY = 284,
    CATCH = 285,
    FINALLY = 286,
    EQEQ = 287,
    NE = 288,
    STREQ = 289,
    STRNEQ = 290,
    LE = 291,
    GE = 292,
    OR = 293,
    AND = 294,
    PLUSPLUS = 295,
    MINUSMINUS = 296,
    LSHIFT = 297,
    RSHIFT = 298,
    URSHIFT = 299,
    PLUSEQUAL = 300,
    MINUSEQUAL = 301,
    MULTEQUAL = 302,
    DIVEQUAL = 303,
    LSHIFTEQUAL = 304,
    RSHIFTEQUAL = 305,
    URSHIFTEQUAL = 306,
    ANDEQUAL = 307,
    MODEQUAL = 308,
    XOREQUAL = 309,
    OREQUAL = 310,
    NUMBER = 311,
    STRING = 312,
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
#line 64 "grammar.y" /* yacc.c:355  */

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

#line 262 "grammar.cpp" /* yacc.c:355  */
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


extern YYSTYPE kjsyylval;
extern YYLTYPE kjsyylloc;
int kjsyyparse (void);

#endif /* !YY_KJSYY_GRAMMAR_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 291 "grammar.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  183
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1133

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  85
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  65
/* YYNRULES -- Number of rules.  */
#define YYNRULES  196
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  358

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    74,     2,     2,     2,    76,    79,     2,
      62,    63,    75,    71,    68,    72,    70,    61,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    69,    84,
      77,    83,    78,    82,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    66,     2,    67,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    64,    81,    65,    73,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   178,   178,   179,   180,   181,   182,   183,   186,   193,
     194,   195,   196,   197,   198,   199,   203,   204,   205,   209,
     210,   215,   216,   220,   221,   225,   226,   231,   232,   233,
     237,   238,   239,   240,   241,   245,   246,   250,   251,   252,
     253,   257,   258,   262,   263,   267,   268,   272,   273,   274,
     278,   279,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   293,   294,   295,   296,   300,   301,   302,   306,
     307,   308,   309,   313,   314,   316,   318,   320,   322,   324,
     329,   330,   331,   332,   333,   337,   338,   342,   343,   347,
     348,   352,   353,   358,   359,   364,   365,   370,   371,   376,
     377,   378,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   391,   392,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   413,   414,   418,
     419,   423,   425,   435,   436,   441,   442,   446,   450,   454,
     456,   464,   465,   470,   471,   472,   475,   478,   481,   484,
     490,   491,   495,   496,   500,   501,   508,   509,   513,   514,
     522,   523,   527,   528,   535,   540,   545,   546,   551,   552,
     556,   557,   561,   562,   566,   567,   571,   576,   580,   581,
     582,   586,   590,   594,   595,   599,   600,   606,   607,   611,
     613,   618,   620,   625,   626,   630,   631
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NULLTOKEN", "TRUETOKEN", "FALSETOKEN",
  "BREAK", "CASE", "DEFAULT", "FOR", "NEW", "VAR", "CONTINUE", "FUNCTION",
  "RETURN", "VOID", "DELETE", "IF", "THIS", "DO", "WHILE", "ELSE", "IN",
  "INSTANCEOF", "TYPEOF", "SWITCH", "WITH", "RESERVED", "THROW", "TRY",
  "CATCH", "FINALLY", "EQEQ", "NE", "STREQ", "STRNEQ", "LE", "GE", "OR",
  "AND", "PLUSPLUS", "MINUSMINUS", "LSHIFT", "RSHIFT", "URSHIFT",
  "PLUSEQUAL", "MINUSEQUAL", "MULTEQUAL", "DIVEQUAL", "LSHIFTEQUAL",
  "RSHIFTEQUAL", "URSHIFTEQUAL", "ANDEQUAL", "MODEQUAL", "XOREQUAL",
  "OREQUAL", "NUMBER", "STRING", "IDENT", "AUTOPLUSPLUS", "AUTOMINUSMINUS",
  "'/'", "'('", "')'", "'{'", "'}'", "'['", "']'", "','", "':'", "'.'",
  "'+'", "'-'", "'~'", "'!'", "'*'", "'%'", "'<'", "'>'", "'&'", "'^'",
  "'|'", "'?'", "'='", "';'", "$accept", "Literal", "PrimaryExpr",
  "ArrayLiteral", "ElementList", "ElisionOpt", "Elision",
  "PropertyNameAndValueList", "PropertyName", "MemberExpr", "NewExpr",
  "CallExpr", "Arguments", "ArgumentList", "LeftHandSideExpr",
  "PostfixExpr", "UnaryExpr", "MultiplicativeExpr", "AdditiveExpr",
  "ShiftExpr", "RelationalExpr", "EqualityExpr", "BitwiseANDExpr",
  "BitwiseXORExpr", "BitwiseORExpr", "LogicalANDExpr", "LogicalORExpr",
  "ConditionalExpr", "AssignmentExpr", "AssignmentOperator", "Expr",
  "Statement", "Block", "StatementList", "VariableStatement",
  "VariableDeclarationList", "VariableDeclaration", "Initializer",
  "EmptyStatement", "ExprStatement", "IfStatement", "IterationStatement",
  "ExprOpt", "ContinueStatement", "BreakStatement", "ReturnStatement",
  "WithStatement", "SwitchStatement", "CaseBlock", "CaseClausesOpt",
  "CaseClauses", "CaseClause", "DefaultClause", "LabelledStatement",
  "ThrowStatement", "TryStatement", "Catch", "Finally",
  "FunctionDeclaration", "FunctionExpr", "FormalParameterList",
  "FunctionBody", "Program", "SourceElements", "SourceElement", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,    47,    40,    41,   123,   125,    91,    93,    44,    58,
      46,    43,    45,   126,    33,    42,    37,    60,    62,    38,
      94,   124,    63,    61,    59
};
# endif

#define YYPACT_NINF -250

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-250)))

#define YYTABLE_NINF -128

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     795,  -250,  -250,  -250,     6,   -23,   404,    17,     8,     7,
     339,  1059,  1059,    -8,  -250,   871,    10,  1059,    27,    34,
    1059,    21,  1059,  1059,  -250,  -250,  -250,    61,  1059,  1059,
    -250,  1059,   415,    77,  1059,  1059,  1059,  1059,  -250,  -250,
    -250,  -250,   -28,  -250,    94,   319,  -250,  -250,   -24,   196,
      80,   121,   243,    82,    75,    84,   134,   -19,  -250,  -250,
      19,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,   185,   795,
    -250,  -250,    11,  -250,   122,   127,  -250,   -10,   -28,  -250,
     108,    25,  -250,  -250,    14,  -250,   138,    -5,  -250,  -250,
      26,     3,  -250,  -250,  1059,   206,  1059,  -250,  1059,  1059,
     -43,   491,   242,  -250,  -250,   871,  -250,  -250,    23,   178,
     189,    61,   224,    40,   210,   567,  -250,   237,   900,   218,
    -250,  -250,  -250,  -250,   965,  1059,   238,  -250,  1059,   248,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  1059,  1059,  1059,  1059,  1059,
    1059,  1059,  1059,  1059,  1059,  1059,  1059,  1059,  1059,  1059,
    1059,  1059,  1059,  1059,  1059,  1059,  1059,  1059,  1059,  1059,
    -250,  1059,  -250,  -250,  -250,  -250,  -250,   258,    66,   254,
     239,  -250,  -250,  -250,  -250,  -250,  1059,  -250,  -250,    17,
    -250,  -250,  -250,    76,  -250,   260,    73,  -250,  -250,    79,
     264,    85,    91,   104,  -250,  -250,   265,    21,   298,  -250,
    -250,  -250,  -250,   119,  1059,  -250,  -250,    77,  -250,  -250,
    -250,  -250,   106,  -250,   246,  -250,   251,  -250,  -250,  -250,
    -250,  -250,   -24,   -24,   196,   196,   196,    80,    80,    80,
      80,    80,    80,   121,   121,   121,   121,   243,    82,    75,
      84,   134,   267,  -250,   -12,   -35,  1059,  1059,  -250,  -250,
     260,   124,   643,  -250,   260,   275,   871,  1059,   871,   270,
     871,   279,  -250,  -250,   272,  -250,   994,  -250,  1059,  -250,
    -250,  1059,  1059,   323,  1059,   183,   262,  -250,   260,  -250,
     719,  -250,  -250,   326,   194,  -250,   341,  -250,  -250,   287,
    1059,  -250,  -250,  -250,  -250,   201,  1059,   269,   871,  1059,
    -250,  -250,   871,  -250,  1059,    13,   341,  -250,    21,  -250,
     871,   203,  1059,  -250,   288,  -250,   252,   289,  -250,   341,
    -250,  -250,  -250,   871,   293,   871,   871,   871,   296,  -250,
     871,  -250,  -250,   871,   871,  -250,  -250,  -250
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     191,     2,     3,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     8,     5,     6,    10,     0,     0,
       7,     0,     0,    21,     0,     0,     0,     0,   138,    11,
      30,    12,    35,    45,    46,    47,    50,    62,    66,    69,
      73,    80,    85,    87,    89,    91,    93,    95,    97,   111,
       0,   195,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   196,    31,     0,   192,
     193,   157,     0,   156,   150,     0,    10,     0,    35,    36,
     135,     0,   133,   153,     0,   152,     0,     0,   161,   160,
       0,    47,    52,    51,     0,     0,     0,    53,     0,     0,
       0,     0,     0,    54,    56,     0,    55,    57,     0,     5,
       6,    10,    14,     0,     0,     0,    23,     0,     0,    22,
      58,    59,    60,    61,     0,     0,     0,    37,     0,     0,
      38,    48,    49,   100,   101,   102,   103,   104,   105,   106,
     107,   110,   108,   109,    99,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     140,     0,   139,     1,   194,   159,   158,     0,    47,   151,
       0,    29,    28,    27,    14,    34,     0,   136,   132,     0,
     131,   155,   154,     0,   187,     0,     0,   163,   162,     0,
       0,     0,     0,     0,   177,   127,     0,     0,   178,   179,
     176,    13,    15,     0,     0,   128,    17,    21,    16,    19,
      24,    41,     0,    43,     0,    33,     0,    40,    98,    64,
      63,    65,    67,    68,    70,    71,    72,    79,    78,    76,
      77,    74,    75,    81,    82,    83,    84,    86,    88,    90,
      92,    94,     0,   112,   135,     0,     0,   150,   137,   134,
       0,     0,     0,   185,     0,     0,     0,     0,     0,     0,
       0,     0,   182,   180,     0,    25,     0,    42,     0,    32,
      39,     0,     0,   136,   150,     0,     0,   183,     0,   189,
       0,   186,   188,   141,     0,   144,   168,   165,   164,     0,
       0,    18,    20,    44,    96,     0,     0,     0,     0,   150,
     184,   190,     0,   143,     0,     0,   169,   170,     0,    26,
       0,     0,   150,   147,     0,   142,     0,     0,   166,   168,
     171,   181,   148,     0,     0,     0,   172,   174,     0,   149,
       0,   145,   129,   173,   175,   167,   146,   130
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -250,  -250,  -250,  -250,  -250,   135,  -250,  -250,   152,   370,
     371,  -250,    -4,  -250,    45,  -250,    -6,   151,    93,   126,
     129,   204,   207,   205,   208,   211,  -250,  -250,  -120,  -250,
      -7,   -15,   -20,    36,  -250,   197,   187,   128,  -250,  -250,
    -250,  -250,  -249,  -250,  -250,  -250,  -250,  -250,  -250,    49,
    -250,    64,  -250,  -250,  -250,  -250,  -250,   173,  -250,  -250,
     190,  -238,  -250,     2,   -75
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    39,    40,    41,   127,   128,   129,   123,   124,    42,
      43,    44,   137,   232,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,   155,
      60,    61,    62,   353,    63,    91,    92,   197,    64,    65,
      66,    67,   190,    68,    69,    70,    71,    72,   307,   325,
     326,   327,   339,    73,    74,    75,   218,   219,    76,    77,
     206,   273,    78,   125,    80
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     105,   112,    79,   100,   184,   102,   103,    81,   229,    93,
     292,   107,   185,   110,   233,   201,   113,   114,   296,   178,
     180,   337,   116,   117,   118,   181,   198,   207,   130,   131,
     132,   133,   297,   199,   134,   238,   301,   156,   135,    84,
     140,   214,   136,   141,   142,   317,   191,   192,   193,   294,
     184,   157,   158,   204,   104,   194,   101,   101,   205,   262,
     320,   263,   101,   179,    82,    96,    94,   101,   101,    97,
     334,   196,   106,   101,   101,    90,   268,   189,   338,   101,
     101,   101,   101,   344,   195,   111,   221,   181,   266,   108,
      83,   181,    95,   199,   181,   186,   109,   209,   202,   211,
     220,   212,   213,   182,   285,   222,   141,   142,   223,   200,
     208,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   161,   162,   163,     1,     2,     3,   234,   188,
     115,   236,     6,   187,   204,    85,   274,    11,    12,   270,
      14,   275,   276,   164,   165,   126,    17,   181,   278,   154,
     239,   240,   241,   181,   279,   175,   134,   166,   167,   181,
     138,   174,    22,    23,   139,   176,   312,   280,   313,   287,
      24,   314,   181,   177,   288,   191,   192,   193,    25,    26,
      86,    28,    29,    30,    31,   183,    87,   298,    33,    97,
     329,   196,   275,    34,    35,    36,    37,   282,   168,   169,
     203,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,  -127,   184,   210,  -127,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,
    -127,  -127,  -127,  -127,  -127,  -127,   318,   -29,  -127,  -127,
    -127,   181,  -127,  -127,   244,   245,   246,   323,   -28,   295,
     189,   303,   181,   305,   330,   308,   343,   159,   160,   181,
     304,   181,   216,   217,   300,   170,   171,   172,   173,   224,
    -127,  -127,  -127,  -127,  -127,   315,   230,   189,  -127,  -127,
     247,   248,   249,   250,   251,   252,   235,  -127,  -127,   253,
     254,   255,   256,   333,   226,   227,   237,   335,   341,   331,
     242,   243,   189,   289,   181,   342,   264,   336,   290,   181,
     181,   346,   181,   267,   272,   189,   277,   281,   349,   217,
     351,   352,   352,   302,   306,   356,   291,   309,   357,   357,
      98,   310,     1,     2,     3,   316,   319,   322,   324,     6,
     328,   345,    85,   332,    11,    12,   350,    14,   347,   141,
     142,   355,   286,    17,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   284,    88,    89,   257,    22,
      23,   259,   258,   354,   265,   260,   269,    24,   348,   261,
     340,   283,   293,   271,     0,    25,    26,    86,    28,    29,
      30,    31,   154,    87,     0,    33,     0,     1,     2,     3,
      34,    35,    36,    37,     6,     0,     0,    85,     1,     2,
       3,     4,    14,    99,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,     0,     0,     0,    17,
      18,    19,     0,    20,    21,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,    22,    23,     0,     0,     0,
      25,    26,    86,    24,     0,    30,    31,     0,    87,     0,
      33,   119,   120,   121,    28,    29,    30,    31,     0,    32,
     122,    33,     0,     0,     0,     0,    34,    35,    36,    37,
       0,     0,     0,     0,     1,     2,     3,     4,     0,    38,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,     0,     0,     0,    17,    18,    19,     0,    20,
      21,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,    23,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,     0,     0,     0,     0,    25,    26,    27,
      28,    29,    30,    31,     0,    32,   215,    33,     0,     0,
       0,     0,    34,    35,    36,    37,     0,     0,     0,     0,
       1,     2,     3,     4,     0,    38,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,     0,     0,
       0,    17,    18,    19,     0,    20,    21,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    22,    23,     0,
       0,     0,     0,     0,     0,    24,     0,     0,     0,     0,
       0,     0,     0,    25,    26,    27,    28,    29,    30,    31,
       0,    32,   225,    33,     0,     0,     0,     0,    34,    35,
      36,    37,     0,     0,     0,     0,     1,     2,     3,     4,
       0,    38,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,     0,     0,     0,    17,    18,    19,
       0,    20,    21,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    22,    23,     0,     0,     0,     0,     0,
       0,    24,     0,     0,     0,     0,     0,     0,     0,    25,
      26,    27,    28,    29,    30,    31,     0,    32,   299,    33,
       0,     0,     0,     0,    34,    35,    36,    37,     0,     0,
       0,     0,     1,     2,     3,     4,     0,    38,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
       0,     0,     0,    17,    18,    19,     0,    20,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    25,    26,    27,    28,    29,
      30,    31,     0,    32,   321,    33,     0,     0,     0,     0,
      34,    35,    36,    37,     0,     0,     0,     0,     1,     2,
       3,     4,     0,    38,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,     0,     0,     0,    17,
      18,    19,     0,    20,    21,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,     0,     0,     0,
       0,     0,     0,    24,     0,     0,     0,     0,     0,     0,
       0,    25,    26,    27,    28,    29,    30,    31,     0,    32,
       0,    33,     0,     0,     0,     0,    34,    35,    36,    37,
       0,     0,     0,     0,     1,     2,     3,     4,     0,    38,
       5,     6,     7,     8,    85,    10,    11,    12,    13,    14,
      15,    16,     0,     0,     0,    17,    18,    19,     0,    20,
      21,     0,     0,     1,     2,     3,     0,     0,     0,     0,
       6,    22,    23,    85,     0,    11,    12,     0,    14,    24,
       0,     0,     0,     0,    17,     0,     0,    25,    26,    27,
      28,    29,    30,    31,     0,    32,     0,    33,     0,     0,
      22,    23,    34,    35,    36,    37,     0,     0,    24,     0,
       0,     0,     0,     0,     0,    38,    25,    26,    86,    28,
      29,    30,    31,     0,    87,     0,    33,   228,     1,     2,
       3,    34,    35,    36,    37,     6,     0,     0,    85,     0,
      11,    12,     0,    14,     0,     0,     0,     0,     0,    17,
       0,     0,     0,     0,     0,     0,     0,     1,     2,     3,
       0,     0,     0,     0,     6,    22,    23,    85,     0,    11,
      12,     0,    14,    24,     0,     0,     0,     0,    17,     0,
       0,    25,    26,    86,    28,    29,    30,    31,   231,    87,
       0,    33,     0,     0,    22,    23,    34,    35,    36,    37,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
      25,    26,    86,    28,    29,    30,    31,     0,    87,     0,
      33,   311,     1,     2,     3,    34,    35,    36,    37,     6,
       0,     0,    85,     0,    11,    12,     0,    14,     0,     0,
       0,     0,     0,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,     0,     0,     0,    25,    26,    86,    28,    29,
      30,    31,     0,    87,     0,    33,     0,     0,     0,     0,
      34,    35,    36,    37
};

static const yytype_int16 yycheck[] =
{
      15,    21,     0,    10,    79,    11,    12,     1,   128,     1,
      22,    17,     1,    20,   134,     1,    22,    23,   267,    38,
       1,     8,    28,    29,    31,    68,     1,     1,    34,    35,
      36,    37,   270,    68,    62,   155,   274,    61,    66,    62,
      44,    84,    70,    40,    41,   294,    56,    57,    58,    84,
     125,    75,    76,    58,    62,    65,    11,    12,    63,   179,
     298,   181,    17,    82,    58,    58,    58,    22,    23,    62,
     319,    83,    62,    28,    29,    58,   196,    84,    65,    34,
      35,    36,    37,   332,    88,    64,    63,    68,    22,    62,
      84,    68,    84,    68,    68,    84,    62,   104,    84,   106,
     115,   108,   109,    84,   224,    65,    40,    41,    68,    84,
      84,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    42,    43,    44,     3,     4,     5,   135,    84,
      69,   138,    10,    11,    58,    13,    63,    15,    16,    63,
      18,    68,    63,    22,    23,    68,    24,    68,    63,    83,
     156,   157,   158,    68,    63,    80,    62,    36,    37,    68,
      66,    79,    40,    41,    70,    81,   286,    63,   288,    63,
      48,   291,    68,    39,    68,    56,    57,    58,    56,    57,
      58,    59,    60,    61,    62,     0,    64,    63,    66,    62,
     310,    83,    68,    71,    72,    73,    74,   217,    77,    78,
      62,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,     0,   300,    20,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    63,    69,    24,    25,
      26,    68,    28,    29,   161,   162,   163,    63,    69,   266,
     267,   276,    68,   278,    63,   280,    63,    71,    72,    68,
     277,    68,    30,    31,   272,    32,    33,    34,    35,    69,
      56,    57,    58,    59,    60,   292,    68,   294,    64,    65,
     164,   165,   166,   167,   168,   169,    58,    73,    74,   170,
     171,   172,   173,   318,    67,    68,    58,   322,   328,   316,
     159,   160,   319,    67,    68,   330,    58,   324,    67,    68,
      68,    69,    68,    84,    64,   332,    62,    62,   343,    31,
     345,   346,   347,    58,    64,   350,    69,    58,   353,   354,
       1,    69,     3,     4,     5,    22,    84,    21,     7,    10,
      63,    63,    13,    84,    15,    16,    63,    18,    69,    40,
      41,    65,   227,    24,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,   223,     6,     6,   174,    40,
      41,   176,   175,   347,   187,   177,   199,    48,   339,   178,
     326,   218,   264,   203,    -1,    56,    57,    58,    59,    60,
      61,    62,    83,    64,    -1,    66,    -1,     3,     4,     5,
      71,    72,    73,    74,    10,    -1,    -1,    13,     3,     4,
       5,     6,    18,    84,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    40,    41,    -1,    -1,    -1,
      56,    57,    58,    48,    -1,    61,    62,    -1,    64,    -1,
      66,    56,    57,    58,    59,    60,    61,    62,    -1,    64,
      65,    66,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    84,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,    -1,    84,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    24,    25,    26,    -1,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
      -1,    64,    65,    66,    -1,    -1,    -1,    -1,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,    84,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    -1,    -1,    -1,    24,    25,    26,
      -1,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,
      57,    58,    59,    60,    61,    62,    -1,    64,    65,    66,
      -1,    -1,    -1,    -1,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,    -1,    84,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      -1,    -1,    -1,    24,    25,    26,    -1,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,
      71,    72,    73,    74,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,    84,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    24,
      25,    26,    -1,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    -1,    64,
      -1,    66,    -1,    -1,    -1,    -1,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    -1,    84,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    24,    25,    26,    -1,    28,
      29,    -1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      10,    40,    41,    13,    -1,    15,    16,    -1,    18,    48,
      -1,    -1,    -1,    -1,    24,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    -1,    66,    -1,    -1,
      40,    41,    71,    72,    73,    74,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    -1,    66,    67,     3,     4,
       5,    71,    72,    73,    74,    10,    -1,    -1,    13,    -1,
      15,    16,    -1,    18,    -1,    -1,    -1,    -1,    -1,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    10,    40,    41,    13,    -1,    15,
      16,    -1,    18,    48,    -1,    -1,    -1,    -1,    24,    -1,
      -1,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      -1,    66,    -1,    -1,    40,    41,    71,    72,    73,    74,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    57,    58,    59,    60,    61,    62,    -1,    64,    -1,
      66,    67,     3,     4,     5,    71,    72,    73,    74,    10,
      -1,    -1,    13,    -1,    15,    16,    -1,    18,    -1,    -1,
      -1,    -1,    -1,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    57,    58,    59,    60,
      61,    62,    -1,    64,    -1,    66,    -1,    -1,    -1,    -1,
      71,    72,    73,    74
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    24,    25,    26,
      28,    29,    40,    41,    48,    56,    57,    58,    59,    60,
      61,    62,    64,    66,    71,    72,    73,    74,    84,    86,
      87,    88,    94,    95,    96,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     115,   116,   117,   119,   123,   124,   125,   126,   128,   129,
     130,   131,   132,   138,   139,   140,   143,   144,   147,   148,
     149,     1,    58,    84,    62,    13,    58,    64,    94,    95,
      58,   120,   121,     1,    58,    84,    58,    62,     1,    84,
     115,    99,   101,   101,    62,   116,    62,   101,    62,    62,
     115,    64,   117,   101,   101,    69,   101,   101,   115,    56,
      57,    58,    65,    92,    93,   148,    68,    89,    90,    91,
     101,   101,   101,   101,    62,    66,    70,    97,    66,    70,
      97,    40,    41,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    83,   114,    61,    75,    76,    71,
      72,    42,    43,    44,    22,    23,    36,    37,    77,    78,
      32,    33,    34,    35,    79,    80,    81,    39,    38,    82,
       1,    68,    84,     0,   149,     1,    84,    11,    99,   115,
     127,    56,    57,    58,    65,    97,    83,   122,     1,    68,
      84,     1,    84,    62,    58,    63,   145,     1,    84,   115,
      20,   115,   115,   115,    84,    65,    30,    31,   141,   142,
     116,    63,    65,    68,    69,    65,    67,    68,    67,   113,
      68,    63,    98,   113,   115,    58,   115,    58,   113,   101,
     101,   101,   102,   102,   103,   103,   103,   104,   104,   104,
     104,   104,   104,   105,   105,   105,   105,   106,   107,   108,
     109,   110,   113,   113,    58,   120,    22,    84,   113,   121,
      63,   145,    64,   146,    63,    68,    63,    62,    63,    63,
      63,    62,   117,   142,    93,   113,    90,    63,    68,    67,
      67,    69,    22,   122,    84,   115,   127,   146,    63,    65,
     148,   146,    58,   116,   115,   116,    64,   133,   116,    58,
      69,    67,   113,   113,   113,   115,    22,   127,    63,    84,
     146,    65,    21,    63,     7,   134,   135,   136,    63,   113,
      63,   115,    84,   116,   127,   116,   115,     8,    65,   137,
     136,   117,   116,    63,   127,    63,    69,    69,   134,   116,
      63,   116,   116,   118,   118,    65,   116,   116
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    85,    86,    86,    86,    86,    86,    86,    86,    87,
      87,    87,    87,    87,    87,    87,    88,    88,    88,    89,
      89,    90,    90,    91,    91,    92,    92,    93,    93,    93,
      94,    94,    94,    94,    94,    95,    95,    96,    96,    96,
      96,    97,    97,    98,    98,    99,    99,   100,   100,   100,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   102,   102,   102,   102,   103,   103,   103,   104,
     104,   104,   104,   105,   105,   105,   105,   105,   105,   105,
     106,   106,   106,   106,   106,   107,   107,   108,   108,   109,
     109,   110,   110,   111,   111,   112,   112,   113,   113,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   115,   115,   116,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   116,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   121,   122,   123,   124,
     124,   125,   125,   126,   126,   126,   126,   126,   126,   126,
     127,   127,   128,   128,   128,   128,   129,   129,   129,   129,
     130,   130,   130,   130,   131,   132,   133,   133,   134,   134,
     135,   135,   136,   136,   137,   137,   138,   139,   140,   140,
     140,   141,   142,   143,   143,   144,   144,   145,   145,   146,
     146,   147,   147,   148,   148,   149,   149
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     3,     3,     3,     5,     2,
       4,     0,     1,     1,     2,     3,     5,     1,     1,     1,
       1,     1,     4,     3,     3,     1,     2,     2,     2,     4,
       3,     2,     3,     1,     3,     1,     1,     1,     2,     2,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     3,     3,     3,     3,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     5,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     1,
       2,     3,     3,     1,     3,     1,     2,     2,     1,     2,
       2,     5,     7,     6,     5,     9,    10,     7,     8,     9,
       0,     1,     2,     2,     3,     3,     2,     2,     3,     3,
       2,     2,     3,     3,     5,     5,     3,     5,     0,     1,
       1,     2,     3,     4,     2,     3,     3,     3,     3,     3,
       4,     5,     2,     5,     6,     4,     5,     1,     3,     2,
       3,     0,     1,     1,     2,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 178 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new NullNode(); }
#line 1891 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 179 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new BooleanNode(true); }
#line 1897 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 180 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new BooleanNode(false); }
#line 1903 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 181 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new NumberNode((yyvsp[0].dval)); }
#line 1909 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 182 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new StringNode((yyvsp[0].ustr)); }
#line 1915 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 183 "grammar.y" /* yacc.c:1646  */
    { Lexer *l = Lexer::curr();
                                     if (!l->scanRegExp()) YYABORT;
                                     (yyval.node) = new RegExpNode(l->pattern,l->flags);}
#line 1923 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 187 "grammar.y" /* yacc.c:1646  */
    { Lexer *l = Lexer::curr();
                                     if (!l->scanRegExp()) YYABORT;
                                     (yyval.node) = new RegExpNode(UString('=')+l->pattern,l->flags);}
#line 1931 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 193 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new ThisNode(); }
#line 1937 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 194 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new ResolveNode(*(yyvsp[0].ident)); }
#line 1943 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 197 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new GroupNode((yyvsp[-1].node)); }
#line 1949 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 198 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new ObjectLiteralNode(); }
#line 1955 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 199 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new ObjectLiteralNode((yyvsp[-1].plist)); }
#line 1961 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 203 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new ArrayNode((yyvsp[-1].ival)); }
#line 1967 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 204 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new ArrayNode((yyvsp[-1].elm)); }
#line 1973 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 205 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new ArrayNode((yyvsp[-1].ival), (yyvsp[-3].elm)); }
#line 1979 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 209 "grammar.y" /* yacc.c:1646  */
    { (yyval.elm) = new ElementNode((yyvsp[-1].ival), (yyvsp[0].node)); }
#line 1985 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 211 "grammar.y" /* yacc.c:1646  */
    { (yyval.elm) = new ElementNode((yyvsp[-3].elm), (yyvsp[-1].ival), (yyvsp[0].node)); }
#line 1991 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 215 "grammar.y" /* yacc.c:1646  */
    { (yyval.ival) = 0; }
#line 1997 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 220 "grammar.y" /* yacc.c:1646  */
    { (yyval.ival) = 1; }
#line 2003 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 221 "grammar.y" /* yacc.c:1646  */
    { (yyval.ival) = (yyvsp[-1].ival) + 1; }
#line 2009 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 225 "grammar.y" /* yacc.c:1646  */
    { (yyval.plist) = new PropertyValueNode((yyvsp[-2].pnode), (yyvsp[0].node)); }
#line 2015 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 227 "grammar.y" /* yacc.c:1646  */
    { (yyval.plist) = new PropertyValueNode((yyvsp[-2].pnode), (yyvsp[0].node), (yyvsp[-4].plist)); }
#line 2021 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 231 "grammar.y" /* yacc.c:1646  */
    { (yyval.pnode) = new PropertyNode(*(yyvsp[0].ident)); }
#line 2027 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 232 "grammar.y" /* yacc.c:1646  */
    { (yyval.pnode) = new PropertyNode(Identifier(*(yyvsp[0].ustr))); }
#line 2033 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 233 "grammar.y" /* yacc.c:1646  */
    { (yyval.pnode) = new PropertyNode((yyvsp[0].dval)); }
#line 2039 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 239 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new AccessorNode1((yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2045 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 240 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new AccessorNode2((yyvsp[-2].node), *(yyvsp[0].ident)); }
#line 2051 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 241 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new NewExprNode((yyvsp[-1].node), (yyvsp[0].args)); }
#line 2057 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 246 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new NewExprNode((yyvsp[0].node)); }
#line 2063 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 250 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new FunctionCallNode((yyvsp[-1].node), (yyvsp[0].args)); }
#line 2069 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 251 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new FunctionCallNode((yyvsp[-1].node), (yyvsp[0].args)); }
#line 2075 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 252 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new AccessorNode1((yyvsp[-3].node), (yyvsp[-1].node)); }
#line 2081 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 253 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new AccessorNode2((yyvsp[-2].node), *(yyvsp[0].ident)); }
#line 2087 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 257 "grammar.y" /* yacc.c:1646  */
    { (yyval.args) = new ArgumentsNode(); }
#line 2093 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 258 "grammar.y" /* yacc.c:1646  */
    { (yyval.args) = new ArgumentsNode((yyvsp[-1].alist)); }
#line 2099 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 262 "grammar.y" /* yacc.c:1646  */
    { (yyval.alist) = new ArgumentListNode((yyvsp[0].node)); }
#line 2105 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 263 "grammar.y" /* yacc.c:1646  */
    { (yyval.alist) = new ArgumentListNode((yyvsp[-2].alist), (yyvsp[0].node)); }
#line 2111 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 273 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new PostfixNode((yyvsp[-1].node), OpPlusPlus); }
#line 2117 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 274 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new PostfixNode((yyvsp[-1].node), OpMinusMinus); }
#line 2123 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 279 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new DeleteNode((yyvsp[0].node)); }
#line 2129 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 280 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new VoidNode((yyvsp[0].node)); }
#line 2135 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 281 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new TypeOfNode((yyvsp[0].node)); }
#line 2141 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 282 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new PrefixNode(OpPlusPlus, (yyvsp[0].node)); }
#line 2147 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 283 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new PrefixNode(OpPlusPlus, (yyvsp[0].node)); }
#line 2153 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 284 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new PrefixNode(OpMinusMinus, (yyvsp[0].node)); }
#line 2159 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 285 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new PrefixNode(OpMinusMinus, (yyvsp[0].node)); }
#line 2165 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 286 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new UnaryPlusNode((yyvsp[0].node)); }
#line 2171 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 287 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new NegateNode((yyvsp[0].node)); }
#line 2177 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 288 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new BitwiseNotNode((yyvsp[0].node)); }
#line 2183 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 289 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new LogicalNotNode((yyvsp[0].node)); }
#line 2189 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 294 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new MultNode((yyvsp[-2].node), (yyvsp[0].node), '*'); }
#line 2195 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 295 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new MultNode((yyvsp[-2].node), (yyvsp[0].node), '/'); }
#line 2201 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 296 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new MultNode((yyvsp[-2].node),(yyvsp[0].node),'%'); }
#line 2207 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 301 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new AddNode((yyvsp[-2].node), (yyvsp[0].node), '+'); }
#line 2213 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 302 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new AddNode((yyvsp[-2].node), (yyvsp[0].node), '-'); }
#line 2219 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 307 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new ShiftNode((yyvsp[-2].node), OpLShift, (yyvsp[0].node)); }
#line 2225 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 308 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new ShiftNode((yyvsp[-2].node), OpRShift, (yyvsp[0].node)); }
#line 2231 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 309 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new ShiftNode((yyvsp[-2].node), OpURShift, (yyvsp[0].node)); }
#line 2237 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 315 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new RelationalNode((yyvsp[-2].node), OpLess, (yyvsp[0].node)); }
#line 2243 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 317 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new RelationalNode((yyvsp[-2].node), OpGreater, (yyvsp[0].node)); }
#line 2249 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 319 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new RelationalNode((yyvsp[-2].node), OpLessEq, (yyvsp[0].node)); }
#line 2255 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 321 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new RelationalNode((yyvsp[-2].node), OpGreaterEq, (yyvsp[0].node)); }
#line 2261 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 323 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new RelationalNode((yyvsp[-2].node), OpInstanceOf, (yyvsp[0].node)); }
#line 2267 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 325 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new RelationalNode((yyvsp[-2].node), OpIn, (yyvsp[0].node)); }
#line 2273 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 330 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new EqualNode((yyvsp[-2].node), OpEqEq, (yyvsp[0].node)); }
#line 2279 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 331 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new EqualNode((yyvsp[-2].node), OpNotEq, (yyvsp[0].node)); }
#line 2285 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 332 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new EqualNode((yyvsp[-2].node), OpStrEq, (yyvsp[0].node)); }
#line 2291 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 333 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new EqualNode((yyvsp[-2].node), OpStrNEq, (yyvsp[0].node));}
#line 2297 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 338 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new BitOperNode((yyvsp[-2].node), OpBitAnd, (yyvsp[0].node)); }
#line 2303 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 343 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new BitOperNode((yyvsp[-2].node), OpBitXOr, (yyvsp[0].node)); }
#line 2309 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 348 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new BitOperNode((yyvsp[-2].node), OpBitOr, (yyvsp[0].node)); }
#line 2315 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 354 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryLogicalNode((yyvsp[-2].node), OpAnd, (yyvsp[0].node)); }
#line 2321 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 360 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new BinaryLogicalNode((yyvsp[-2].node), OpOr, (yyvsp[0].node)); }
#line 2327 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 366 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new ConditionalNode((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].node)); }
#line 2333 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 372 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new AssignNode((yyvsp[-2].node), (yyvsp[-1].op), (yyvsp[0].node));}
#line 2339 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 376 "grammar.y" /* yacc.c:1646  */
    { (yyval.op) = OpEqual; }
#line 2345 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 377 "grammar.y" /* yacc.c:1646  */
    { (yyval.op) = OpPlusEq; }
#line 2351 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 378 "grammar.y" /* yacc.c:1646  */
    { (yyval.op) = OpMinusEq; }
#line 2357 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 379 "grammar.y" /* yacc.c:1646  */
    { (yyval.op) = OpMultEq; }
#line 2363 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 380 "grammar.y" /* yacc.c:1646  */
    { (yyval.op) = OpDivEq; }
#line 2369 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 381 "grammar.y" /* yacc.c:1646  */
    { (yyval.op) = OpLShift; }
#line 2375 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 382 "grammar.y" /* yacc.c:1646  */
    { (yyval.op) = OpRShift; }
#line 2381 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 383 "grammar.y" /* yacc.c:1646  */
    { (yyval.op) = OpURShift; }
#line 2387 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 384 "grammar.y" /* yacc.c:1646  */
    { (yyval.op) = OpAndEq; }
#line 2393 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 385 "grammar.y" /* yacc.c:1646  */
    { (yyval.op) = OpXOrEq; }
#line 2399 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 386 "grammar.y" /* yacc.c:1646  */
    { (yyval.op) = OpOrEq; }
#line 2405 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 387 "grammar.y" /* yacc.c:1646  */
    { (yyval.op) = OpModEq; }
#line 2411 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 392 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new CommaNode((yyvsp[-2].node), (yyvsp[0].node)); }
#line 2417 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 413 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new BlockNode(0); DBG((yyval.stat), (yylsp[0]), (yylsp[0])); }
#line 2423 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 414 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new BlockNode((yyvsp[-1].srcs)); DBG((yyval.stat), (yylsp[0]), (yylsp[0])); }
#line 2429 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 418 "grammar.y" /* yacc.c:1646  */
    { (yyval.slist) = new StatListNode((yyvsp[0].stat)); }
#line 2435 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 419 "grammar.y" /* yacc.c:1646  */
    { (yyval.slist) = new StatListNode((yyvsp[-1].slist), (yyvsp[0].stat)); }
#line 2441 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 423 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new VarStatementNode((yyvsp[-1].vlist));
                                      DBG((yyval.stat), (yylsp[-2]), (yylsp[0])); }
#line 2448 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 425 "grammar.y" /* yacc.c:1646  */
    { if (automatic()) {
                                          (yyval.stat) = new VarStatementNode((yyvsp[-1].vlist));
					  DBG((yyval.stat), (yylsp[-2]), (yylsp[-1]));
                                        } else {
					  YYABORT;
					}
                                      }
#line 2460 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 435 "grammar.y" /* yacc.c:1646  */
    { (yyval.vlist) = new VarDeclListNode((yyvsp[0].decl)); }
#line 2466 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 437 "grammar.y" /* yacc.c:1646  */
    { (yyval.vlist) = new VarDeclListNode((yyvsp[-2].vlist), (yyvsp[0].decl)); }
#line 2472 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 441 "grammar.y" /* yacc.c:1646  */
    { (yyval.decl) = new VarDeclNode(*(yyvsp[0].ident), 0); }
#line 2478 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 442 "grammar.y" /* yacc.c:1646  */
    { (yyval.decl) = new VarDeclNode(*(yyvsp[-1].ident), (yyvsp[0].init)); }
#line 2484 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 446 "grammar.y" /* yacc.c:1646  */
    { (yyval.init) = new AssignExprNode((yyvsp[0].node)); }
#line 2490 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 450 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new EmptyStatementNode(); }
#line 2496 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 454 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new ExprStatementNode((yyvsp[-1].node));
                                     DBG((yyval.stat), (yylsp[-1]), (yylsp[0])); }
#line 2503 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 456 "grammar.y" /* yacc.c:1646  */
    { if (automatic()) {
                                       (yyval.stat) = new ExprStatementNode((yyvsp[-1].node));
				       DBG((yyval.stat), (yylsp[-1]), (yylsp[-1]));
                                     } else
				       YYABORT; }
#line 2513 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 464 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new IfNode((yyvsp[-2].node),(yyvsp[0].stat),0);DBG((yyval.stat),(yylsp[-4]),(yylsp[-1])); }
#line 2519 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 466 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new IfNode((yyvsp[-4].node),(yyvsp[-2].stat),(yyvsp[0].stat));DBG((yyval.stat),(yylsp[-6]),(yylsp[-3])); }
#line 2525 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 470 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat)=new DoWhileNode((yyvsp[-4].stat),(yyvsp[-1].node));DBG((yyval.stat),(yylsp[-5]),(yylsp[-3]));}
#line 2531 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 471 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new WhileNode((yyvsp[-2].node),(yyvsp[0].stat));DBG((yyval.stat),(yylsp[-4]),(yylsp[-1])); }
#line 2537 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 473 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new ForNode((yyvsp[-6].node),(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].stat));
	                             DBG((yyval.stat),(yylsp[-8]),(yylsp[-1])); }
#line 2544 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 476 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new ForNode((yyvsp[-6].vlist),(yyvsp[-4].node),(yyvsp[-2].node),(yyvsp[0].stat));
	                             DBG((yyval.stat),(yylsp[-9]),(yylsp[-1])); }
#line 2551 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 479 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new ForInNode((yyvsp[-4].node), (yyvsp[-2].node), (yyvsp[0].stat));
	                             DBG((yyval.stat),(yylsp[-6]),(yylsp[-1])); }
#line 2558 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 482 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new ForInNode(*(yyvsp[-4].ident),0,(yyvsp[-2].node),(yyvsp[0].stat));
	                             DBG((yyval.stat),(yylsp[-7]),(yylsp[-1])); }
#line 2565 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 485 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new ForInNode(*(yyvsp[-5].ident),(yyvsp[-4].init),(yyvsp[-2].node),(yyvsp[0].stat));
	                             DBG((yyval.stat),(yylsp[-8]),(yylsp[-1])); }
#line 2572 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 490 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = 0; }
#line 2578 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 495 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new ContinueNode(); DBG((yyval.stat),(yylsp[-1]),(yylsp[0])); }
#line 2584 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 496 "grammar.y" /* yacc.c:1646  */
    { if (automatic()) {
                                       (yyval.stat) = new ContinueNode(); DBG((yyval.stat),(yylsp[-1]),(yylsp[0]));
                                     } else
				       YYABORT; }
#line 2593 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 500 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new ContinueNode(*(yyvsp[-1].ident)); DBG((yyval.stat),(yylsp[-2]),(yylsp[0])); }
#line 2599 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 501 "grammar.y" /* yacc.c:1646  */
    { if (automatic()) {
                                       (yyval.stat) = new ContinueNode(*(yyvsp[-1].ident));DBG((yyval.stat),(yylsp[-2]),(yylsp[-1]));
                                     } else
				       YYABORT; }
#line 2608 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 508 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new BreakNode();DBG((yyval.stat),(yylsp[-1]),(yylsp[0])); }
#line 2614 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 509 "grammar.y" /* yacc.c:1646  */
    { if (automatic()) {
                                       (yyval.stat) = new BreakNode(); DBG((yyval.stat),(yylsp[-1]),(yylsp[-1]));
                                     } else
				       YYABORT; }
#line 2623 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 513 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new BreakNode(*(yyvsp[-1].ident)); DBG((yyval.stat),(yylsp[-2]),(yylsp[0])); }
#line 2629 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 514 "grammar.y" /* yacc.c:1646  */
    { if (automatic()) {
                                       (yyval.stat) = new BreakNode(*(yyvsp[-1].ident)); DBG((yyval.stat),(yylsp[-2]),(yylsp[-1]));
                                     } else
				       YYABORT;
                                   }
#line 2639 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 522 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new ReturnNode(0); DBG((yyval.stat),(yylsp[-1]),(yylsp[0])); }
#line 2645 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 523 "grammar.y" /* yacc.c:1646  */
    { if (automatic()) {
                                       (yyval.stat) = new ReturnNode(0); DBG((yyval.stat),(yylsp[-1]),(yylsp[-1]));
                                     } else
				       YYABORT; }
#line 2654 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 527 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new ReturnNode((yyvsp[-1].node)); }
#line 2660 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 528 "grammar.y" /* yacc.c:1646  */
    { if (automatic())
                                       (yyval.stat) = new ReturnNode((yyvsp[-1].node));
                                     else
				       YYABORT; }
#line 2669 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 535 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new WithNode((yyvsp[-2].node),(yyvsp[0].stat));
                                     DBG((yyval.stat), (yylsp[-4]), (yylsp[-1])); }
#line 2676 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 540 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new SwitchNode((yyvsp[-2].node), (yyvsp[0].cblk));
                                     DBG((yyval.stat), (yylsp[-4]), (yylsp[-1])); }
#line 2683 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 545 "grammar.y" /* yacc.c:1646  */
    { (yyval.cblk) = new CaseBlockNode((yyvsp[-1].clist), 0, 0); }
#line 2689 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 547 "grammar.y" /* yacc.c:1646  */
    { (yyval.cblk) = new CaseBlockNode((yyvsp[-3].clist), (yyvsp[-2].ccl), (yyvsp[-1].clist)); }
#line 2695 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 551 "grammar.y" /* yacc.c:1646  */
    { (yyval.clist) = 0; }
#line 2701 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 556 "grammar.y" /* yacc.c:1646  */
    { (yyval.clist) = new ClauseListNode((yyvsp[0].ccl)); }
#line 2707 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 557 "grammar.y" /* yacc.c:1646  */
    { (yyval.clist) = new ClauseListNode((yyvsp[-1].clist), (yyvsp[0].ccl)); }
#line 2713 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 561 "grammar.y" /* yacc.c:1646  */
    { (yyval.ccl) = new CaseClauseNode((yyvsp[-1].node)); }
#line 2719 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 562 "grammar.y" /* yacc.c:1646  */
    { (yyval.ccl) = new CaseClauseNode((yyvsp[-2].node), (yyvsp[0].slist)); }
#line 2725 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 566 "grammar.y" /* yacc.c:1646  */
    { (yyval.ccl) = new CaseClauseNode(0); }
#line 2731 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 567 "grammar.y" /* yacc.c:1646  */
    { (yyval.ccl) = new CaseClauseNode(0, (yyvsp[0].slist)); }
#line 2737 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 571 "grammar.y" /* yacc.c:1646  */
    { (yyvsp[0].stat)->pushLabel(*(yyvsp[-2].ident));
                                     (yyval.stat) = new LabelNode(*(yyvsp[-2].ident), (yyvsp[0].stat)); }
#line 2744 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 576 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new ThrowNode((yyvsp[-1].node)); }
#line 2750 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 580 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new TryNode((yyvsp[-1].stat), (yyvsp[0].cnode)); }
#line 2756 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 581 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new TryNode((yyvsp[-1].stat), (yyvsp[0].fnode)); }
#line 2762 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 180:
#line 582 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = new TryNode((yyvsp[-2].stat), (yyvsp[-1].cnode), (yyvsp[0].fnode)); }
#line 2768 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 181:
#line 586 "grammar.y" /* yacc.c:1646  */
    { (yyval.cnode) = new CatchNode(*(yyvsp[-2].ident), (yyvsp[0].stat)); }
#line 2774 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 182:
#line 590 "grammar.y" /* yacc.c:1646  */
    { (yyval.fnode) = new FinallyNode((yyvsp[0].stat)); }
#line 2780 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 183:
#line 594 "grammar.y" /* yacc.c:1646  */
    { (yyval.func) = new FuncDeclNode(*(yyvsp[-3].ident), (yyvsp[0].body)); }
#line 2786 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 184:
#line 596 "grammar.y" /* yacc.c:1646  */
    { (yyval.func) = new FuncDeclNode(*(yyvsp[-4].ident), (yyvsp[-2].param), (yyvsp[0].body)); }
#line 2792 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 599 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new FuncExprNode((yyvsp[0].body)); }
#line 2798 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 186:
#line 601 "grammar.y" /* yacc.c:1646  */
    { (yyval.node) = new FuncExprNode((yyvsp[-2].param), (yyvsp[0].body)); }
#line 2804 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 187:
#line 606 "grammar.y" /* yacc.c:1646  */
    { (yyval.param) = new ParameterNode(*(yyvsp[0].ident)); }
#line 2810 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 188:
#line 607 "grammar.y" /* yacc.c:1646  */
    { (yyval.param) = new ParameterNode((yyvsp[-2].param), *(yyvsp[0].ident)); }
#line 2816 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 189:
#line 611 "grammar.y" /* yacc.c:1646  */
    { (yyval.body) = new FunctionBodyNode(0);
	                             DBG((yyval.body), (yylsp[-1]), (yylsp[0]));}
#line 2823 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 190:
#line 613 "grammar.y" /* yacc.c:1646  */
    { (yyval.body) = new FunctionBodyNode((yyvsp[-1].srcs));
	                             DBG((yyval.body), (yylsp[-2]), (yylsp[0]));}
#line 2830 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 191:
#line 618 "grammar.y" /* yacc.c:1646  */
    { printf("program ok!\n");(yyval.prog) = new ProgramNode(0);
                                     Parser::progNode = (yyval.prog); }
#line 2837 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 620 "grammar.y" /* yacc.c:1646  */
    { (yyval.prog) = new ProgramNode((yyvsp[0].srcs));
                                     Parser::progNode = (yyval.prog); }
#line 2844 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 625 "grammar.y" /* yacc.c:1646  */
    { (yyval.srcs) = new SourceElementsNode((yyvsp[0].stat)); }
#line 2850 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 626 "grammar.y" /* yacc.c:1646  */
    { (yyval.srcs) = new SourceElementsNode((yyvsp[-1].srcs), (yyvsp[0].stat)); }
#line 2856 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 195:
#line 630 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = (yyvsp[0].stat); }
#line 2862 "grammar.cpp" /* yacc.c:1646  */
    break;

  case 196:
#line 631 "grammar.y" /* yacc.c:1646  */
    { (yyval.stat) = (yyvsp[0].func); }
#line 2868 "grammar.cpp" /* yacc.c:1646  */
    break;


#line 2872 "grammar.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 634 "grammar.y" /* yacc.c:1906  */


int yyerror (const char * /* s */)  /* Called by yyparse on error */
{
  // fprintf(stderr, "ERROR: %s at line %d\n",
  //	  s, KJS::Lexer::curr()->lineNo());
  return 1;
}

/* may we automatically insert a semicolon ? */
bool automatic()
{
  if (yychar == '}' || yychar == 0)
    return true;
  else if (Lexer::curr()->prevTerminator())
    return true;

  return false;
}
/*
int main()
{
	freopen("ldcjs.js","r",stdin);
	fprintf(stdout,"start\n");
	yyparse();
	fprintf(stdout,"end\n");
	return 0;
}
*/
