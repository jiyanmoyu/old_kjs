
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1

/* Substitute the variable and function names.  */
#define yyparse         kjsyyparse
#define yylex           kjsyylex
#define yyerror         kjsyyerror
#define yylval          kjsyylval
#define yychar          kjsyychar
#define yydebug         kjsyydebug
#define yynerrs         kjsyynerrs
#define yylloc          kjsyylloc

/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "grammar.y"


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



/* Line 189 of yacc.c  */
#line 139 "grammar.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 64 "grammar.y"

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



/* Line 214 of yacc.c  */
#line 266 "grammar.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 291 "grammar.cpp"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

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
/* YYNRULES -- Number of states.  */
#define YYNSTATES  358

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   315

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    29,    32,    36,    40,    44,    50,
      53,    58,    59,    61,    63,    66,    70,    76,    78,    80,
      82,    84,    86,    91,    95,    99,   101,   104,   107,   110,
     115,   119,   122,   126,   128,   132,   134,   136,   138,   141,
     144,   146,   149,   152,   155,   158,   161,   164,   167,   170,
     173,   176,   179,   181,   185,   189,   193,   195,   199,   203,
     205,   209,   213,   217,   219,   223,   227,   231,   235,   239,
     243,   245,   249,   253,   257,   261,   263,   267,   269,   273,
     275,   279,   281,   285,   287,   291,   293,   299,   301,   305,
     307,   309,   311,   313,   315,   317,   319,   321,   323,   325,
     327,   329,   331,   335,   337,   339,   341,   343,   345,   347,
     349,   351,   353,   355,   357,   359,   361,   363,   366,   370,
     372,   375,   379,   383,   385,   389,   391,   394,   397,   399,
     402,   405,   411,   419,   426,   432,   442,   453,   461,   470,
     480,   481,   483,   486,   489,   493,   497,   500,   503,   507,
     511,   514,   517,   521,   525,   531,   537,   541,   547,   548,
     550,   552,   555,   559,   564,   567,   571,   575,   579,   583,
     587,   592,   598,   601,   607,   614,   619,   625,   627,   631,
     634,   638,   639,   641,   643,   646,   648
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     147,     0,    -1,     3,    -1,     4,    -1,     5,    -1,    56,
      -1,    57,    -1,    61,    -1,    48,    -1,    18,    -1,    58,
      -1,    86,    -1,    88,    -1,    62,   115,    63,    -1,    64,
      65,    -1,    64,    92,    65,    -1,    66,    90,    67,    -1,
      66,    89,    67,    -1,    66,    89,    68,    90,    67,    -1,
      90,   113,    -1,    89,    68,    90,   113,    -1,    -1,    91,
      -1,    68,    -1,    91,    68,    -1,    93,    69,   113,    -1,
      92,    68,    93,    69,   113,    -1,    58,    -1,    57,    -1,
      56,    -1,    87,    -1,   144,    -1,    94,    66,   115,    67,
      -1,    94,    70,    58,    -1,    10,    94,    97,    -1,    94,
      -1,    10,    95,    -1,    94,    97,    -1,    96,    97,    -1,
      96,    66,   115,    67,    -1,    96,    70,    58,    -1,    62,
      63,    -1,    62,    98,    63,    -1,   113,    -1,    98,    68,
     113,    -1,    95,    -1,    96,    -1,    99,    -1,    99,    40,
      -1,    99,    41,    -1,   100,    -1,    16,   101,    -1,    15,
     101,    -1,    24,   101,    -1,    40,   101,    -1,    59,   101,
      -1,    41,   101,    -1,    60,   101,    -1,    71,   101,    -1,
      72,   101,    -1,    73,   101,    -1,    74,   101,    -1,   101,
      -1,   102,    75,   101,    -1,   102,    61,   101,    -1,   102,
      76,   101,    -1,   102,    -1,   103,    71,   102,    -1,   103,
      72,   102,    -1,   103,    -1,   104,    42,   103,    -1,   104,
      43,   103,    -1,   104,    44,   103,    -1,   104,    -1,   105,
      77,   104,    -1,   105,    78,   104,    -1,   105,    36,   104,
      -1,   105,    37,   104,    -1,   105,    23,   104,    -1,   105,
      22,   104,    -1,   105,    -1,   106,    32,   105,    -1,   106,
      33,   105,    -1,   106,    34,   105,    -1,   106,    35,   105,
      -1,   106,    -1,   107,    79,   106,    -1,   107,    -1,   108,
      80,   107,    -1,   108,    -1,   109,    81,   108,    -1,   109,
      -1,   110,    39,   109,    -1,   110,    -1,   111,    38,   110,
      -1,   111,    -1,   111,    82,   113,    69,   113,    -1,   112,
      -1,    99,   114,   113,    -1,    83,    -1,    45,    -1,    46,
      -1,    47,    -1,    48,    -1,    49,    -1,    50,    -1,    51,
      -1,    52,    -1,    54,    -1,    55,    -1,    53,    -1,   113,
      -1,   115,    68,   113,    -1,   117,    -1,   119,    -1,   123,
      -1,   124,    -1,   125,    -1,   126,    -1,   128,    -1,   129,
      -1,   130,    -1,   131,    -1,   132,    -1,   138,    -1,   139,
      -1,   140,    -1,    64,    65,    -1,    64,   148,    65,    -1,
     116,    -1,   118,   116,    -1,    11,   120,    84,    -1,    11,
     120,     1,    -1,   121,    -1,   120,    68,   121,    -1,    58,
      -1,    58,   122,    -1,    83,   113,    -1,    84,    -1,   115,
      84,    -1,   115,     1,    -1,    17,    62,   115,    63,   116,
      -1,    17,    62,   115,    63,   116,    21,   116,    -1,    19,
     116,    20,    62,   115,    63,    -1,    20,    62,   115,    63,
     116,    -1,     9,    62,   127,    84,   127,    84,   127,    63,
     116,    -1,     9,    62,    11,   120,    84,   127,    84,   127,
      63,   116,    -1,     9,    62,    99,    22,   115,    63,   116,
      -1,     9,    62,    11,    58,    22,   115,    63,   116,    -1,
       9,    62,    11,    58,   122,    22,   115,    63,   116,    -1,
      -1,   115,    -1,    12,    84,    -1,    12,     1,    -1,    12,
      58,    84,    -1,    12,    58,     1,    -1,     6,    84,    -1,
       6,     1,    -1,     6,    58,    84,    -1,     6,    58,     1,
      -1,    14,    84,    -1,    14,     1,    -1,    14,   115,    84,
      -1,    14,   115,     1,    -1,    26,    62,   115,    63,   116,
      -1,    25,    62,   115,    63,   133,    -1,    64,   134,    65,
      -1,    64,   134,   137,   134,    65,    -1,    -1,   135,    -1,
     136,    -1,   135,   136,    -1,     7,   115,    69,    -1,     7,
     115,    69,   118,    -1,     8,    69,    -1,     8,    69,   118,
      -1,    58,    69,   116,    -1,    28,   115,    84,    -1,    29,
     117,   141,    -1,    29,   117,   142,    -1,    29,   117,   141,
     142,    -1,    30,    62,    58,    63,   117,    -1,    31,   117,
      -1,    13,    58,    62,    63,   146,    -1,    13,    58,    62,
     145,    63,   146,    -1,    13,    62,    63,   146,    -1,    13,
      62,   145,    63,   146,    -1,    58,    -1,   145,    68,    58,
      -1,    64,    65,    -1,    64,   148,    65,    -1,    -1,   148,
      -1,   149,    -1,   148,   149,    -1,   116,    -1,   143,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
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

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
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
  "FunctionBody", "Program", "SourceElements", "SourceElement", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
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

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
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

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
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

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -250
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

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -128
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

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;
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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 178 "grammar.y"
    { (yyval.node) = new NullNode(); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 179 "grammar.y"
    { (yyval.node) = new BooleanNode(true); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 180 "grammar.y"
    { (yyval.node) = new BooleanNode(false); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 181 "grammar.y"
    { (yyval.node) = new NumberNode((yyvsp[(1) - (1)].dval)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 182 "grammar.y"
    { (yyval.node) = new StringNode((yyvsp[(1) - (1)].ustr)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 183 "grammar.y"
    { Lexer *l = Lexer::curr();
                                     if (!l->scanRegExp()) YYABORT;
                                     (yyval.node) = new RegExpNode(l->pattern,l->flags);;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 187 "grammar.y"
    { Lexer *l = Lexer::curr();
                                     if (!l->scanRegExp()) YYABORT;
                                     (yyval.node) = new RegExpNode(UString('=')+l->pattern,l->flags);;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 193 "grammar.y"
    { (yyval.node) = new ThisNode(); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 194 "grammar.y"
    { (yyval.node) = new ResolveNode(*(yyvsp[(1) - (1)].ident)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 197 "grammar.y"
    { (yyval.node) = new GroupNode((yyvsp[(2) - (3)].node)); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 198 "grammar.y"
    { (yyval.node) = new ObjectLiteralNode(); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 199 "grammar.y"
    { (yyval.node) = new ObjectLiteralNode((yyvsp[(2) - (3)].plist)); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 203 "grammar.y"
    { (yyval.node) = new ArrayNode((yyvsp[(2) - (3)].ival)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 204 "grammar.y"
    { (yyval.node) = new ArrayNode((yyvsp[(2) - (3)].elm)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 205 "grammar.y"
    { (yyval.node) = new ArrayNode((yyvsp[(4) - (5)].ival), (yyvsp[(2) - (5)].elm)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 209 "grammar.y"
    { (yyval.elm) = new ElementNode((yyvsp[(1) - (2)].ival), (yyvsp[(2) - (2)].node)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 211 "grammar.y"
    { (yyval.elm) = new ElementNode((yyvsp[(1) - (4)].elm), (yyvsp[(3) - (4)].ival), (yyvsp[(4) - (4)].node)); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 215 "grammar.y"
    { (yyval.ival) = 0; ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 220 "grammar.y"
    { (yyval.ival) = 1; ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 221 "grammar.y"
    { (yyval.ival) = (yyvsp[(1) - (2)].ival) + 1; ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 225 "grammar.y"
    { (yyval.plist) = new PropertyValueNode((yyvsp[(1) - (3)].pnode), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 227 "grammar.y"
    { (yyval.plist) = new PropertyValueNode((yyvsp[(3) - (5)].pnode), (yyvsp[(5) - (5)].node), (yyvsp[(1) - (5)].plist)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 231 "grammar.y"
    { (yyval.pnode) = new PropertyNode(*(yyvsp[(1) - (1)].ident)); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 232 "grammar.y"
    { (yyval.pnode) = new PropertyNode(Identifier(*(yyvsp[(1) - (1)].ustr))); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 233 "grammar.y"
    { (yyval.pnode) = new PropertyNode((yyvsp[(1) - (1)].dval)); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 239 "grammar.y"
    { (yyval.node) = new AccessorNode1((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 240 "grammar.y"
    { (yyval.node) = new AccessorNode2((yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].ident)); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 241 "grammar.y"
    { (yyval.node) = new NewExprNode((yyvsp[(2) - (3)].node), (yyvsp[(3) - (3)].args)); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 246 "grammar.y"
    { (yyval.node) = new NewExprNode((yyvsp[(2) - (2)].node)); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 250 "grammar.y"
    { (yyval.node) = new FunctionCallNode((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].args)); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 251 "grammar.y"
    { (yyval.node) = new FunctionCallNode((yyvsp[(1) - (2)].node), (yyvsp[(2) - (2)].args)); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 252 "grammar.y"
    { (yyval.node) = new AccessorNode1((yyvsp[(1) - (4)].node), (yyvsp[(3) - (4)].node)); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 253 "grammar.y"
    { (yyval.node) = new AccessorNode2((yyvsp[(1) - (3)].node), *(yyvsp[(3) - (3)].ident)); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 257 "grammar.y"
    { (yyval.args) = new ArgumentsNode(); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 258 "grammar.y"
    { (yyval.args) = new ArgumentsNode((yyvsp[(2) - (3)].alist)); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 262 "grammar.y"
    { (yyval.alist) = new ArgumentListNode((yyvsp[(1) - (1)].node)); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 263 "grammar.y"
    { (yyval.alist) = new ArgumentListNode((yyvsp[(1) - (3)].alist), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 273 "grammar.y"
    { (yyval.node) = new PostfixNode((yyvsp[(1) - (2)].node), OpPlusPlus); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 274 "grammar.y"
    { (yyval.node) = new PostfixNode((yyvsp[(1) - (2)].node), OpMinusMinus); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 279 "grammar.y"
    { (yyval.node) = new DeleteNode((yyvsp[(2) - (2)].node)); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 280 "grammar.y"
    { (yyval.node) = new VoidNode((yyvsp[(2) - (2)].node)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 281 "grammar.y"
    { (yyval.node) = new TypeOfNode((yyvsp[(2) - (2)].node)); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 282 "grammar.y"
    { (yyval.node) = new PrefixNode(OpPlusPlus, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 283 "grammar.y"
    { (yyval.node) = new PrefixNode(OpPlusPlus, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 284 "grammar.y"
    { (yyval.node) = new PrefixNode(OpMinusMinus, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 285 "grammar.y"
    { (yyval.node) = new PrefixNode(OpMinusMinus, (yyvsp[(2) - (2)].node)); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 286 "grammar.y"
    { (yyval.node) = new UnaryPlusNode((yyvsp[(2) - (2)].node)); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 287 "grammar.y"
    { (yyval.node) = new NegateNode((yyvsp[(2) - (2)].node)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 288 "grammar.y"
    { (yyval.node) = new BitwiseNotNode((yyvsp[(2) - (2)].node)); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 289 "grammar.y"
    { (yyval.node) = new LogicalNotNode((yyvsp[(2) - (2)].node)); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 294 "grammar.y"
    { (yyval.node) = new MultNode((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), '*'); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 295 "grammar.y"
    { (yyval.node) = new MultNode((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), '/'); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 296 "grammar.y"
    { (yyval.node) = new MultNode((yyvsp[(1) - (3)].node),(yyvsp[(3) - (3)].node),'%'); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 301 "grammar.y"
    { (yyval.node) = new AddNode((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), '+'); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 302 "grammar.y"
    { (yyval.node) = new AddNode((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node), '-'); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 307 "grammar.y"
    { (yyval.node) = new ShiftNode((yyvsp[(1) - (3)].node), OpLShift, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 308 "grammar.y"
    { (yyval.node) = new ShiftNode((yyvsp[(1) - (3)].node), OpRShift, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 309 "grammar.y"
    { (yyval.node) = new ShiftNode((yyvsp[(1) - (3)].node), OpURShift, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 315 "grammar.y"
    { (yyval.node) = new RelationalNode((yyvsp[(1) - (3)].node), OpLess, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 317 "grammar.y"
    { (yyval.node) = new RelationalNode((yyvsp[(1) - (3)].node), OpGreater, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 319 "grammar.y"
    { (yyval.node) = new RelationalNode((yyvsp[(1) - (3)].node), OpLessEq, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 321 "grammar.y"
    { (yyval.node) = new RelationalNode((yyvsp[(1) - (3)].node), OpGreaterEq, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 323 "grammar.y"
    { (yyval.node) = new RelationalNode((yyvsp[(1) - (3)].node), OpInstanceOf, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 325 "grammar.y"
    { (yyval.node) = new RelationalNode((yyvsp[(1) - (3)].node), OpIn, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 330 "grammar.y"
    { (yyval.node) = new EqualNode((yyvsp[(1) - (3)].node), OpEqEq, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 331 "grammar.y"
    { (yyval.node) = new EqualNode((yyvsp[(1) - (3)].node), OpNotEq, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 332 "grammar.y"
    { (yyval.node) = new EqualNode((yyvsp[(1) - (3)].node), OpStrEq, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 333 "grammar.y"
    { (yyval.node) = new EqualNode((yyvsp[(1) - (3)].node), OpStrNEq, (yyvsp[(3) - (3)].node));;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 338 "grammar.y"
    { (yyval.node) = new BitOperNode((yyvsp[(1) - (3)].node), OpBitAnd, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 343 "grammar.y"
    { (yyval.node) = new BitOperNode((yyvsp[(1) - (3)].node), OpBitXOr, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 348 "grammar.y"
    { (yyval.node) = new BitOperNode((yyvsp[(1) - (3)].node), OpBitOr, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 354 "grammar.y"
    { (yyval.node) = new BinaryLogicalNode((yyvsp[(1) - (3)].node), OpAnd, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 360 "grammar.y"
    { (yyval.node) = new BinaryLogicalNode((yyvsp[(1) - (3)].node), OpOr, (yyvsp[(3) - (3)].node)); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 366 "grammar.y"
    { (yyval.node) = new ConditionalNode((yyvsp[(1) - (5)].node), (yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].node)); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 372 "grammar.y"
    { (yyval.node) = new AssignNode((yyvsp[(1) - (3)].node), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].node));;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 376 "grammar.y"
    { (yyval.op) = OpEqual; ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 377 "grammar.y"
    { (yyval.op) = OpPlusEq; ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 378 "grammar.y"
    { (yyval.op) = OpMinusEq; ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 379 "grammar.y"
    { (yyval.op) = OpMultEq; ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 380 "grammar.y"
    { (yyval.op) = OpDivEq; ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 381 "grammar.y"
    { (yyval.op) = OpLShift; ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 382 "grammar.y"
    { (yyval.op) = OpRShift; ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 383 "grammar.y"
    { (yyval.op) = OpURShift; ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 384 "grammar.y"
    { (yyval.op) = OpAndEq; ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 385 "grammar.y"
    { (yyval.op) = OpXOrEq; ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 386 "grammar.y"
    { (yyval.op) = OpOrEq; ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 387 "grammar.y"
    { (yyval.op) = OpModEq; ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 392 "grammar.y"
    { (yyval.node) = new CommaNode((yyvsp[(1) - (3)].node), (yyvsp[(3) - (3)].node)); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 413 "grammar.y"
    { (yyval.stat) = new BlockNode(0); DBG((yyval.stat), (yylsp[(2) - (2)]), (yylsp[(2) - (2)])); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 414 "grammar.y"
    { (yyval.stat) = new BlockNode((yyvsp[(2) - (3)].srcs)); DBG((yyval.stat), (yylsp[(3) - (3)]), (yylsp[(3) - (3)])); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 418 "grammar.y"
    { (yyval.slist) = new StatListNode((yyvsp[(1) - (1)].stat)); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 419 "grammar.y"
    { (yyval.slist) = new StatListNode((yyvsp[(1) - (2)].slist), (yyvsp[(2) - (2)].stat)); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 423 "grammar.y"
    { (yyval.stat) = new VarStatementNode((yyvsp[(2) - (3)].vlist));
                                      DBG((yyval.stat), (yylsp[(1) - (3)]), (yylsp[(3) - (3)])); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 425 "grammar.y"
    { if (automatic()) {
                                          (yyval.stat) = new VarStatementNode((yyvsp[(2) - (3)].vlist));
					  DBG((yyval.stat), (yylsp[(1) - (3)]), (yylsp[(2) - (3)]));
                                        } else {
					  YYABORT;
					}
                                      ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 435 "grammar.y"
    { (yyval.vlist) = new VarDeclListNode((yyvsp[(1) - (1)].decl)); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 437 "grammar.y"
    { (yyval.vlist) = new VarDeclListNode((yyvsp[(1) - (3)].vlist), (yyvsp[(3) - (3)].decl)); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 441 "grammar.y"
    { (yyval.decl) = new VarDeclNode(*(yyvsp[(1) - (1)].ident), 0); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 442 "grammar.y"
    { (yyval.decl) = new VarDeclNode(*(yyvsp[(1) - (2)].ident), (yyvsp[(2) - (2)].init)); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 446 "grammar.y"
    { (yyval.init) = new AssignExprNode((yyvsp[(2) - (2)].node)); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 450 "grammar.y"
    { (yyval.stat) = new EmptyStatementNode(); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 454 "grammar.y"
    { (yyval.stat) = new ExprStatementNode((yyvsp[(1) - (2)].node));
                                     DBG((yyval.stat), (yylsp[(1) - (2)]), (yylsp[(2) - (2)])); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 456 "grammar.y"
    { if (automatic()) {
                                       (yyval.stat) = new ExprStatementNode((yyvsp[(1) - (2)].node));
				       DBG((yyval.stat), (yylsp[(1) - (2)]), (yylsp[(1) - (2)]));
                                     } else
				       YYABORT; ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 464 "grammar.y"
    { (yyval.stat) = new IfNode((yyvsp[(3) - (5)].node),(yyvsp[(5) - (5)].stat),0);DBG((yyval.stat),(yylsp[(1) - (5)]),(yylsp[(4) - (5)])); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 466 "grammar.y"
    { (yyval.stat) = new IfNode((yyvsp[(3) - (7)].node),(yyvsp[(5) - (7)].stat),(yyvsp[(7) - (7)].stat));DBG((yyval.stat),(yylsp[(1) - (7)]),(yylsp[(4) - (7)])); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 470 "grammar.y"
    { (yyval.stat)=new DoWhileNode((yyvsp[(2) - (6)].stat),(yyvsp[(5) - (6)].node));DBG((yyval.stat),(yylsp[(1) - (6)]),(yylsp[(3) - (6)]));;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 471 "grammar.y"
    { (yyval.stat) = new WhileNode((yyvsp[(3) - (5)].node),(yyvsp[(5) - (5)].stat));DBG((yyval.stat),(yylsp[(1) - (5)]),(yylsp[(4) - (5)])); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 473 "grammar.y"
    { (yyval.stat) = new ForNode((yyvsp[(3) - (9)].node),(yyvsp[(5) - (9)].node),(yyvsp[(7) - (9)].node),(yyvsp[(9) - (9)].stat));
	                             DBG((yyval.stat),(yylsp[(1) - (9)]),(yylsp[(8) - (9)])); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 476 "grammar.y"
    { (yyval.stat) = new ForNode((yyvsp[(4) - (10)].vlist),(yyvsp[(6) - (10)].node),(yyvsp[(8) - (10)].node),(yyvsp[(10) - (10)].stat));
	                             DBG((yyval.stat),(yylsp[(1) - (10)]),(yylsp[(9) - (10)])); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 479 "grammar.y"
    { (yyval.stat) = new ForInNode((yyvsp[(3) - (7)].node), (yyvsp[(5) - (7)].node), (yyvsp[(7) - (7)].stat));
	                             DBG((yyval.stat),(yylsp[(1) - (7)]),(yylsp[(6) - (7)])); ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 482 "grammar.y"
    { (yyval.stat) = new ForInNode(*(yyvsp[(4) - (8)].ident),0,(yyvsp[(6) - (8)].node),(yyvsp[(8) - (8)].stat));
	                             DBG((yyval.stat),(yylsp[(1) - (8)]),(yylsp[(7) - (8)])); ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 485 "grammar.y"
    { (yyval.stat) = new ForInNode(*(yyvsp[(4) - (9)].ident),(yyvsp[(5) - (9)].init),(yyvsp[(7) - (9)].node),(yyvsp[(9) - (9)].stat));
	                             DBG((yyval.stat),(yylsp[(1) - (9)]),(yylsp[(8) - (9)])); ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 490 "grammar.y"
    { (yyval.node) = 0; ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 495 "grammar.y"
    { (yyval.stat) = new ContinueNode(); DBG((yyval.stat),(yylsp[(1) - (2)]),(yylsp[(2) - (2)])); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 496 "grammar.y"
    { if (automatic()) {
                                       (yyval.stat) = new ContinueNode(); DBG((yyval.stat),(yylsp[(1) - (2)]),(yylsp[(2) - (2)]));
                                     } else
				       YYABORT; ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 500 "grammar.y"
    { (yyval.stat) = new ContinueNode(*(yyvsp[(2) - (3)].ident)); DBG((yyval.stat),(yylsp[(1) - (3)]),(yylsp[(3) - (3)])); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 501 "grammar.y"
    { if (automatic()) {
                                       (yyval.stat) = new ContinueNode(*(yyvsp[(2) - (3)].ident));DBG((yyval.stat),(yylsp[(1) - (3)]),(yylsp[(2) - (3)]));
                                     } else
				       YYABORT; ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 508 "grammar.y"
    { (yyval.stat) = new BreakNode();DBG((yyval.stat),(yylsp[(1) - (2)]),(yylsp[(2) - (2)])); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 509 "grammar.y"
    { if (automatic()) {
                                       (yyval.stat) = new BreakNode(); DBG((yyval.stat),(yylsp[(1) - (2)]),(yylsp[(1) - (2)]));
                                     } else
				       YYABORT; ;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 513 "grammar.y"
    { (yyval.stat) = new BreakNode(*(yyvsp[(2) - (3)].ident)); DBG((yyval.stat),(yylsp[(1) - (3)]),(yylsp[(3) - (3)])); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 514 "grammar.y"
    { if (automatic()) {
                                       (yyval.stat) = new BreakNode(*(yyvsp[(2) - (3)].ident)); DBG((yyval.stat),(yylsp[(1) - (3)]),(yylsp[(2) - (3)]));
                                     } else
				       YYABORT;
                                   ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 522 "grammar.y"
    { (yyval.stat) = new ReturnNode(0); DBG((yyval.stat),(yylsp[(1) - (2)]),(yylsp[(2) - (2)])); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 523 "grammar.y"
    { if (automatic()) {
                                       (yyval.stat) = new ReturnNode(0); DBG((yyval.stat),(yylsp[(1) - (2)]),(yylsp[(1) - (2)]));
                                     } else
				       YYABORT; ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 527 "grammar.y"
    { (yyval.stat) = new ReturnNode((yyvsp[(2) - (3)].node)); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 528 "grammar.y"
    { if (automatic())
                                       (yyval.stat) = new ReturnNode((yyvsp[(2) - (3)].node));
                                     else
				       YYABORT; ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 535 "grammar.y"
    { (yyval.stat) = new WithNode((yyvsp[(3) - (5)].node),(yyvsp[(5) - (5)].stat));
                                     DBG((yyval.stat), (yylsp[(1) - (5)]), (yylsp[(4) - (5)])); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 540 "grammar.y"
    { (yyval.stat) = new SwitchNode((yyvsp[(3) - (5)].node), (yyvsp[(5) - (5)].cblk));
                                     DBG((yyval.stat), (yylsp[(1) - (5)]), (yylsp[(4) - (5)])); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 545 "grammar.y"
    { (yyval.cblk) = new CaseBlockNode((yyvsp[(2) - (3)].clist), 0, 0); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 547 "grammar.y"
    { (yyval.cblk) = new CaseBlockNode((yyvsp[(2) - (5)].clist), (yyvsp[(3) - (5)].ccl), (yyvsp[(4) - (5)].clist)); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 551 "grammar.y"
    { (yyval.clist) = 0; ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 556 "grammar.y"
    { (yyval.clist) = new ClauseListNode((yyvsp[(1) - (1)].ccl)); ;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 557 "grammar.y"
    { (yyval.clist) = new ClauseListNode((yyvsp[(1) - (2)].clist), (yyvsp[(2) - (2)].ccl)); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 561 "grammar.y"
    { (yyval.ccl) = new CaseClauseNode((yyvsp[(2) - (3)].node)); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 562 "grammar.y"
    { (yyval.ccl) = new CaseClauseNode((yyvsp[(2) - (4)].node), (yyvsp[(4) - (4)].slist)); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 566 "grammar.y"
    { (yyval.ccl) = new CaseClauseNode(0); ;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 567 "grammar.y"
    { (yyval.ccl) = new CaseClauseNode(0, (yyvsp[(3) - (3)].slist)); ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 571 "grammar.y"
    { (yyvsp[(3) - (3)].stat)->pushLabel(*(yyvsp[(1) - (3)].ident));
                                     (yyval.stat) = new LabelNode(*(yyvsp[(1) - (3)].ident), (yyvsp[(3) - (3)].stat)); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 576 "grammar.y"
    { (yyval.stat) = new ThrowNode((yyvsp[(2) - (3)].node)); ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 580 "grammar.y"
    { (yyval.stat) = new TryNode((yyvsp[(2) - (3)].stat), (yyvsp[(3) - (3)].cnode)); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 581 "grammar.y"
    { (yyval.stat) = new TryNode((yyvsp[(2) - (3)].stat), (yyvsp[(3) - (3)].fnode)); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 582 "grammar.y"
    { (yyval.stat) = new TryNode((yyvsp[(2) - (4)].stat), (yyvsp[(3) - (4)].cnode), (yyvsp[(4) - (4)].fnode)); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 586 "grammar.y"
    { (yyval.cnode) = new CatchNode(*(yyvsp[(3) - (5)].ident), (yyvsp[(5) - (5)].stat)); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 590 "grammar.y"
    { (yyval.fnode) = new FinallyNode((yyvsp[(2) - (2)].stat)); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 594 "grammar.y"
    { (yyval.func) = new FuncDeclNode(*(yyvsp[(2) - (5)].ident), (yyvsp[(5) - (5)].body)); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 596 "grammar.y"
    { (yyval.func) = new FuncDeclNode(*(yyvsp[(2) - (6)].ident), (yyvsp[(4) - (6)].param), (yyvsp[(6) - (6)].body)); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 599 "grammar.y"
    { (yyval.node) = new FuncExprNode((yyvsp[(4) - (4)].body)); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 601 "grammar.y"
    { (yyval.node) = new FuncExprNode((yyvsp[(3) - (5)].param), (yyvsp[(5) - (5)].body)); ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 606 "grammar.y"
    { (yyval.param) = new ParameterNode(*(yyvsp[(1) - (1)].ident)); ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 607 "grammar.y"
    { (yyval.param) = new ParameterNode((yyvsp[(1) - (3)].param), *(yyvsp[(3) - (3)].ident)); ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 611 "grammar.y"
    { (yyval.body) = new FunctionBodyNode(0);
	                             DBG((yyval.body), (yylsp[(1) - (2)]), (yylsp[(2) - (2)]));;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 613 "grammar.y"
    { (yyval.body) = new FunctionBodyNode((yyvsp[(2) - (3)].srcs));
	                             DBG((yyval.body), (yylsp[(1) - (3)]), (yylsp[(3) - (3)]));;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 618 "grammar.y"
    { printf("program ok!\n");(yyval.prog) = new ProgramNode(0);
                                     Parser::progNode = (yyval.prog); ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 620 "grammar.y"
    { (yyval.prog) = new ProgramNode((yyvsp[(1) - (1)].srcs));
                                     Parser::progNode = (yyval.prog); ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 625 "grammar.y"
    { (yyval.srcs) = new SourceElementsNode((yyvsp[(1) - (1)].stat)); ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 626 "grammar.y"
    { (yyval.srcs) = new SourceElementsNode((yyvsp[(1) - (2)].srcs), (yyvsp[(2) - (2)].stat)); ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 630 "grammar.y"
    { (yyval.stat) = (yyvsp[(1) - (1)].stat); ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 631 "grammar.y"
    { (yyval.stat) = (yyvsp[(1) - (1)].func); ;}
    break;



/* Line 1455 of yacc.c  */
#line 3167 "grammar.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

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

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 634 "grammar.y"


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
