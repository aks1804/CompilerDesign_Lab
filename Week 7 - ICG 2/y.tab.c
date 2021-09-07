/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     INT = 259,
     CHAR = 260,
     FLOAT = 261,
     DOUBLE = 262,
     LONG = 263,
     SHORT = 264,
     SIGNED = 265,
     UNSIGNED = 266,
     STRUCT = 267,
     RETURN = 268,
     MAIN = 269,
     VOID = 270,
     WHILE = 271,
     FOR = 272,
     DO = 273,
     BREAK = 274,
     CONTINUE = 275,
     GOTO = 276,
     ENDIF = 277,
     SWITCH = 278,
     CASE = 279,
     DEFAULT = 280,
     identifier = 281,
     array_identifier = 282,
     integer_constant = 283,
     string_constant = 284,
     float_constant = 285,
     character_constant = 286,
     ELSE = 287,
     MOD_EQUAL = 288,
     DIVIDE_EQUAL = 289,
     MULTIPLY_EQUAL = 290,
     SUBTRACT_EQUAL = 291,
     ADD_EQUAL = 292,
     OR_OR = 293,
     AND_AND = 294,
     NOT_EQUAL = 295,
     EQUAL = 296,
     GREAT = 297,
     GREAT_EQUAL = 298,
     LESS = 299,
     LESS_EQUAL = 300,
     SIZEOF = 301,
     NOT = 302,
     DECREMENT = 303,
     INCREMENT = 304
   };
#endif
/* Tokens.  */
#define IF 258
#define INT 259
#define CHAR 260
#define FLOAT 261
#define DOUBLE 262
#define LONG 263
#define SHORT 264
#define SIGNED 265
#define UNSIGNED 266
#define STRUCT 267
#define RETURN 268
#define MAIN 269
#define VOID 270
#define WHILE 271
#define FOR 272
#define DO 273
#define BREAK 274
#define CONTINUE 275
#define GOTO 276
#define ENDIF 277
#define SWITCH 278
#define CASE 279
#define DEFAULT 280
#define identifier 281
#define array_identifier 282
#define integer_constant 283
#define string_constant 284
#define float_constant 285
#define character_constant 286
#define ELSE 287
#define MOD_EQUAL 288
#define DIVIDE_EQUAL 289
#define MULTIPLY_EQUAL 290
#define SUBTRACT_EQUAL 291
#define ADD_EQUAL 292
#define OR_OR 293
#define AND_AND 294
#define NOT_EQUAL 295
#define EQUAL 296
#define GREAT 297
#define GREAT_EQUAL 298
#define LESS 299
#define LESS_EQUAL 300
#define SIZEOF 301
#define NOT 302
#define DECREMENT 303
#define INCREMENT 304




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

	void yyerror(char* s);
	int yylex();
	#include "stdio.h"
	#include "stdlib.h"
	#include "ctype.h"
	#include "string.h"
	void insert_type();
	void insert_value();
	void insert_dimensions();
	void insert_parameters();
	void remove_scope (int );
	int check_scope(char*);
	int check_function(char *);
	void insert_SymbolTable_nest(char*, int);
	void insert_SymbolTable_paramscount(char*, int);
	int getSTparamscount(char*);
	int check_duplicate(char*);
	int check_declaration(char*, char *);
	int check_params(char*);
	int duplicate(char *s);
	int check_array(char*);
	void insert_SymbolTable_function(char*);
	char gettype(char*,int);
	void push(char *s);
	void codegen();
	void codeassign();
	char* itoa(int num, char* str, int base);
	void reverse(char str[], int length);
	void swap(char*,char*);
	void label1();
	void label2();
	void label3();
	void label4();
	void label5();
	void label6();
	void genunary();
	void codegencon();
	void start_function();
	void end_function();
	void arggen();
	void callgen();

	extern int flag=0;
	int insert_flag = 0;
	//int params_count=0;
	int call_params_count=0;
	int array_flag = 0;
	int array_tac_flag = 0;
	int top = 0,count=0,ltop=0,lno=0;
	char temp[3] = "t";

	extern char current_identifier[20];
	extern char current_type[20];
	extern char current_value[20];
    extern char current_function[20];
	extern char previous_operator[20];
	extern int current_nested_val;
	char currfunctype[100];
	char currfunccall[100];
	extern int params_count;
	int call_params_count;



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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 269 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  33
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   280

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  87
/* YYNRULES -- Number of rules.  */
#define YYNRULES  168
/* YYNRULES -- Number of states.  */
#define YYNSTATES  250

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    52,     2,     2,
      63,    64,    50,    48,    60,    49,     2,    51,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    59,
       2,    38,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,    62,    41,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,    58,     2,     2,     2,     2,
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
      35,    36,    37,    39,    40,    42,    43,    44,    45,    46,
      47,    53,    54,    55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,     9,    11,    13,    15,    16,
      24,    27,    28,    32,    34,    38,    41,    44,    45,    46,
      50,    51,    55,    57,    58,    62,    65,    66,    67,    72,
      75,    77,    79,    80,    81,    85,    86,    92,    95,    98,
      99,   101,   103,   105,   107,   110,   113,   116,   119,   121,
     123,   126,   129,   130,   132,   135,   138,   139,   141,   142,
     144,   145,   148,   152,   153,   154,   160,   161,   165,   166,
     169,   172,   173,   174,   178,   181,   182,   184,   186,   188,
     190,   192,   194,   196,   197,   202,   205,   206,   209,   211,
     212,   213,   222,   225,   226,   227,   228,   236,   237,   247,
     248,   249,   259,   261,   264,   266,   269,   273,   276,   277,
     282,   283,   288,   289,   294,   295,   300,   301,   306,   307,
     312,   315,   318,   320,   324,   326,   330,   332,   335,   337,
     341,   343,   345,   347,   349,   351,   353,   355,   359,   361,
     363,   365,   369,   371,   373,   375,   377,   379,   381,   383,
     384,   390,   394,   396,   398,   399,   405,   407,   408,   412,
     414,   416,   418,   420,   422,   424,   426,   428,   430
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      66,     0,    -1,    67,    -1,    68,    67,    -1,    -1,    72,
      -1,    96,    -1,    69,    -1,    -1,    12,    26,    70,    57,
      71,    58,    59,    -1,    72,    71,    -1,    -1,    91,    74,
      59,    -1,    73,    -1,    12,    26,    74,    -1,    76,    75,
      -1,    60,    74,    -1,    -1,    -1,    26,    77,    79,    -1,
      -1,    27,    78,    79,    -1,    81,    -1,    -1,    38,    80,
     133,    -1,    61,    82,    -1,    -1,    -1,    28,    83,    62,
      84,    -1,    62,    85,    -1,    85,    -1,    87,    -1,    -1,
      -1,    38,    86,    29,    -1,    -1,    38,    88,    57,    89,
      58,    -1,    28,    90,    -1,    60,    89,    -1,    -1,     4,
      -1,     5,    -1,     6,    -1,     7,    -1,     8,    94,    -1,
       9,    95,    -1,    11,    92,    -1,    10,    93,    -1,    15,
      -1,     4,    -1,     8,    94,    -1,     9,    95,    -1,    -1,
       4,    -1,     8,    94,    -1,     9,    95,    -1,    -1,     4,
      -1,    -1,     4,    -1,    -1,    97,    98,    -1,    91,    26,
      63,    -1,    -1,    -1,    99,   101,    64,   100,   108,    -1,
      -1,    91,   102,   103,    -1,    -1,   105,   104,    -1,    60,
     101,    -1,    -1,    -1,    26,   106,   107,    -1,    61,    62,
      -1,    -1,   112,    -1,   109,    -1,   113,    -1,   117,    -1,
     124,    -1,   125,    -1,    72,    -1,    -1,   110,    57,   111,
      58,    -1,   108,   111,    -1,    -1,   126,    59,    -1,    59,
      -1,    -1,    -1,     3,    63,   133,    64,   114,   108,   115,
     116,    -1,    32,   108,    -1,    -1,    -1,    -1,    16,    63,
     118,   133,    64,   119,   108,    -1,    -1,    17,    63,   123,
     133,    59,   120,   126,    64,   108,    -1,    -1,    -1,   121,
      18,   108,    16,    63,   133,    64,   122,    59,    -1,    72,
      -1,   126,    59,    -1,    59,    -1,    13,    59,    -1,    13,
     126,    59,    -1,    19,    59,    -1,    -1,   143,    38,   127,
     126,    -1,    -1,   143,    37,   128,   126,    -1,    -1,   143,
      36,   129,   126,    -1,    -1,   143,    35,   130,   126,    -1,
      -1,   143,    34,   131,   126,    -1,    -1,   143,    33,   132,
     126,    -1,   143,    56,    -1,   143,    55,    -1,   133,    -1,
     133,    39,   134,    -1,   134,    -1,   134,    40,   135,    -1,
     135,    -1,    54,   135,    -1,   136,    -1,   136,   137,   138,
      -1,   138,    -1,    45,    -1,    47,    -1,    44,    -1,    46,
      -1,    43,    -1,    42,    -1,   138,   139,   140,    -1,   140,
      -1,    48,    -1,    49,    -1,   140,   141,   142,    -1,   142,
      -1,    50,    -1,    51,    -1,    52,    -1,   145,    -1,   143,
      -1,    26,    -1,    -1,    27,   144,    61,   126,    62,    -1,
      63,   126,    64,    -1,   146,    -1,   151,    -1,    -1,    26,
      63,   147,   148,    64,    -1,   149,    -1,    -1,   149,    60,
     150,    -1,   150,    -1,    26,    -1,    28,    -1,    29,    -1,
      30,    -1,    31,    -1,    28,    -1,    29,    -1,    30,    -1,
      31,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   103,   103,   106,   107,   111,   112,   113,   116,   116,
     118,   118,   121,   122,   125,   128,   131,   132,   135,   135,
     139,   139,   141,   141,   141,   144,   145,   148,   148,   149,
     152,   153,   154,   157,   157,   160,   160,   163,   166,   167,
     171,   171,   171,   171,   172,   173,   174,   175,   176,   179,
     179,   179,   179,   182,   182,   182,   182,   185,   185,   188,
     188,   191,   194,   197,   197,   197,   200,   200,   200,   203,
     206,   207,   210,   210,   213,   214,   217,   217,   218,   218,
     219,   219,   220,   223,   223,   226,   227,   230,   231,   234,
     234,   234,   237,   238,   241,   241,   241,   242,   242,   243,
     243,   243,   246,   247,   248,   251,   252,   265,   269,   269,
     278,   278,   285,   285,   293,   293,   300,   300,   307,   307,
     315,   316,   317,   321,   322,   325,   326,   329,   330,   333,
     334,   337,   338,   339,   340,   341,   342,   345,   346,   349,
     350,   353,   354,   357,   358,   359,   362,   363,   366,   377,
     377,   387,   388,   389,   392,   392,   418,   418,   421,   422,
     424,   424,   424,   424,   424,   427,   428,   429,   430
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "INT", "CHAR", "FLOAT", "DOUBLE",
  "LONG", "SHORT", "SIGNED", "UNSIGNED", "STRUCT", "RETURN", "MAIN",
  "VOID", "WHILE", "FOR", "DO", "BREAK", "CONTINUE", "GOTO", "ENDIF",
  "SWITCH", "CASE", "DEFAULT", "identifier", "array_identifier",
  "integer_constant", "string_constant", "float_constant",
  "character_constant", "ELSE", "MOD_EQUAL", "DIVIDE_EQUAL",
  "MULTIPLY_EQUAL", "SUBTRACT_EQUAL", "ADD_EQUAL", "'='", "OR_OR",
  "AND_AND", "'^'", "NOT_EQUAL", "EQUAL", "GREAT", "GREAT_EQUAL", "LESS",
  "LESS_EQUAL", "'+'", "'-'", "'*'", "'/'", "'%'", "SIZEOF", "NOT",
  "DECREMENT", "INCREMENT", "'{'", "'}'", "';'", "','", "'['", "']'",
  "'('", "')'", "$accept", "begin_parse", "declarations", "declaration",
  "structure_dec", "@1", "structure_content", "variable_dec",
  "structure_initialize", "variables", "multiple_variables",
  "identifier_name", "@2", "@3", "extended_identifier", "@4", "array_iden",
  "array_dims", "@5", "initilization", "string_initilization", "@6",
  "array_initialization", "@7", "array_values", "multiple_array_values",
  "datatype", "unsigned_grammar", "signed_grammar", "long_grammar",
  "short_grammar", "function_dec", "function_datatype",
  "function_parameters", "@8", "@9", "parameters", "@10",
  "all_parameter_identifiers", "multiple_parameters",
  "parameter_identifier", "@11", "extended_parameter", "statement",
  "multiple_statement", "@12", "statments", "expression_statment",
  "conditional_statements", "@13", "@14",
  "extended_conditional_statements", "iterative_statements", "@15", "@16",
  "@17", "@18", "@19", "for_initialization", "return_statement",
  "break_statement", "expression", "@20", "@21", "@22", "@23", "@24",
  "@25", "simple_expression", "and_expression",
  "unary_relation_expression", "regular_expression",
  "relational_operators", "sum_expression", "sum_operators", "term",
  "MULOP", "factor", "mutable", "@26", "immutable", "call", "@27",
  "arguments", "arguments_list", "exp", "constant", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,    61,   293,
     294,    94,   295,   296,   297,   298,   299,   300,    43,    45,
      42,    47,    37,   301,   302,   303,   304,   123,   125,    59,
      44,    91,    93,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    67,    67,    68,    68,    68,    70,    69,
      71,    71,    72,    72,    73,    74,    75,    75,    77,    76,
      78,    76,    79,    80,    79,    81,    81,    83,    82,    82,
      84,    84,    84,    86,    85,    88,    87,    89,    90,    90,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    92,
      92,    92,    92,    93,    93,    93,    93,    94,    94,    95,
      95,    96,    97,    99,   100,    98,   102,   101,   101,   103,
     104,   104,   106,   105,   107,   107,   108,   108,   108,   108,
     108,   108,   108,   110,   109,   111,   111,   112,   112,   114,
     115,   113,   116,   116,   118,   119,   117,   120,   117,   121,
     122,   117,   123,   123,   123,   124,   124,   125,   127,   126,
     128,   126,   129,   126,   130,   126,   131,   126,   132,   126,
     126,   126,   126,   133,   133,   134,   134,   135,   135,   136,
     136,   137,   137,   137,   137,   137,   137,   138,   138,   139,
     139,   140,   140,   141,   141,   141,   142,   142,   143,   144,
     143,   145,   145,   145,   147,   146,   148,   148,   149,   149,
     150,   150,   150,   150,   150,   151,   151,   151,   151
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     0,     7,
       2,     0,     3,     1,     3,     2,     2,     0,     0,     3,
       0,     3,     1,     0,     3,     2,     0,     0,     4,     2,
       1,     1,     0,     0,     3,     0,     5,     2,     2,     0,
       1,     1,     1,     1,     2,     2,     2,     2,     1,     1,
       2,     2,     0,     1,     2,     2,     0,     1,     0,     1,
       0,     2,     3,     0,     0,     5,     0,     3,     0,     2,
       2,     0,     0,     3,     2,     0,     1,     1,     1,     1,
       1,     1,     1,     0,     4,     2,     0,     2,     1,     0,
       0,     8,     2,     0,     0,     0,     7,     0,     9,     0,
       0,     9,     1,     2,     1,     2,     3,     2,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     4,
       2,     2,     1,     3,     1,     3,     1,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     0,
       5,     3,     1,     1,     0,     5,     1,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       4,    40,    41,    42,    43,    58,    60,    56,    52,     0,
      48,     0,     2,     4,     7,     5,    13,     0,     6,    63,
      57,    44,    59,    45,    53,    58,    60,    47,    49,    58,
      60,    46,     8,     1,     3,    18,    20,     0,    17,    61,
      68,    54,    55,    50,    51,    18,     0,    14,    62,    26,
      26,    12,     0,    15,    66,     0,    11,    23,     0,    19,
      22,    21,    16,     0,    64,     0,     0,    11,     0,     0,
      27,     0,    25,    72,    67,    71,    83,     0,     0,    10,
     148,   149,   165,   166,   167,   168,     0,     0,    24,   124,
     126,   128,   130,   138,   142,   147,   146,   152,   153,     0,
      33,    29,    75,    68,    69,     0,     0,     0,     0,     0,
      88,    82,    65,    77,     0,    76,    78,    79,     0,    80,
      81,     0,   122,   147,     9,   154,     0,   127,     0,     0,
       0,   136,   135,   133,   131,   134,   132,     0,   139,   140,
       0,   143,   144,   145,     0,    32,     0,     0,    73,    70,
       0,   105,     0,    94,     0,   107,    83,    83,    87,   118,
     116,   114,   112,   110,   108,   121,   120,   157,     0,   151,
     123,   125,   129,   137,   141,    33,    28,    30,    31,    34,
      74,     0,   106,     0,   104,   102,     0,     0,    83,     0,
       0,     0,     0,     0,     0,     0,     0,   160,   161,   162,
     163,   164,     0,   156,   159,     0,     0,    89,     0,     0,
     103,    85,    84,     0,   119,   117,   115,   113,   111,   109,
     155,     0,   150,     0,    83,    95,    97,     0,   158,    39,
       0,    90,    83,     0,     0,     0,    37,    36,    93,    96,
       0,   100,    38,    83,    91,    83,     0,    92,    98,   101
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    46,    66,   111,    16,    37,
      53,    38,    49,    50,    59,    69,    60,    72,    99,   176,
     101,   146,   178,   206,   230,   236,    68,    31,    27,    21,
      23,    18,    19,    39,    40,    76,    55,    63,    74,   104,
      75,   102,   148,   188,   113,   114,   189,   115,   116,   224,
     238,   244,   117,   183,   232,   233,   118,   246,   186,   119,
     120,   121,   196,   195,   194,   193,   192,   191,   122,    89,
      90,    91,   137,    92,   140,    93,   144,    94,   123,   126,
      96,    97,   167,   202,   203,   204,    98
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -84
static const yytype_int16 yypact[] =
{
     233,   -84,   -84,   -84,   -84,     6,    22,    21,    69,     2,
     -84,    15,   -84,   233,   -84,   -84,   -84,    63,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,     6,    22,   -84,   -84,     6,
      22,   -84,    66,   -84,   -84,   -28,   -84,     1,    14,   -84,
     265,   -84,   -84,   -84,   -84,   -84,    40,   -84,   -84,   -25,
     -25,   -84,    66,   -84,   -84,    30,   245,   -84,   -23,   -84,
     -84,   -84,   -84,    72,   -84,    73,    49,   245,    66,    95,
     -84,    79,   -84,   -84,   -84,    60,   167,    66,    68,   -84,
      65,   -84,   -84,   -84,   -84,   -84,    95,    95,    91,    92,
     -84,   157,   -11,    36,   -84,   -84,   -84,   -84,   -84,    71,
     -84,   -84,    70,   265,   -84,    74,    75,    82,    83,    76,
     -84,   -84,   -84,   -84,    90,   -84,   -84,   -84,   118,   -84,
     -84,    93,    91,   106,   -84,   -84,    94,   -84,    87,    95,
      95,   -84,   -84,   -84,   -84,   -84,   -84,   161,   -84,   -84,
     161,   -84,   -84,   -84,   161,   115,   125,   101,   -84,   -84,
      95,   -84,   105,   -84,   205,   -84,    37,   167,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,    -9,    95,   -84,
      92,   -84,   -11,    36,   -84,   108,   -84,   -84,   -84,   -84,
     -84,   -33,   -84,    95,   -84,   -84,    95,   107,    37,   110,
     165,    95,    95,    95,    95,    95,    95,   -84,   -84,   -84,
     -84,   -84,   141,   146,   -84,   145,   151,   -84,   -31,   -32,
     -84,   -84,   -84,   155,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,    -9,   -84,   191,   167,   -84,   -84,    95,   -84,   162,
     169,   -84,   167,    95,   -30,   191,   -84,   -84,   193,   -84,
     159,   -84,   -84,   167,   -84,   167,   170,   -84,   -84,   -84
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -84,   -84,   215,   -84,   -84,   -84,   179,     3,   -84,   -20,
     -84,   -84,   -84,   -84,   197,   -84,   -84,   -84,   -84,   -84,
     113,   -84,   -84,   -84,    26,   -84,    11,   -84,   -84,    50,
      54,   -84,   -84,   -84,   -84,   -84,   160,   -84,   -84,   -84,
     -84,   -84,   -84,   -76,   -84,   -84,    77,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -83,   -84,   -84,   -84,   -84,   -84,   -84,   -67,   133,
     -72,   -84,   -84,   129,   -84,   127,   -84,   134,   -68,   -84,
     -84,   -84,   -84,   -84,   -84,    56,   -84
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -100
static const yytype_int16 yytable[] =
{
     112,    95,    88,    15,   128,    70,   129,   129,   129,   129,
      20,    17,    47,    57,   127,    33,    15,   197,    95,   198,
     199,   200,   201,   152,    17,    24,    22,   226,    32,    25,
      26,   207,    62,   225,   241,    48,    58,   138,   139,    71,
     105,     1,     2,     3,     4,     5,     6,     7,     8,    65,
     106,    54,    10,   107,   108,   -99,   109,    47,   171,    67,
      51,    95,    95,    80,    81,    82,    83,    84,    85,    95,
      67,   187,    95,    28,    52,    41,    95,    29,    30,    43,
      42,   190,    95,   181,    44,   205,   141,   142,   143,    35,
      36,    86,    45,    36,    64,   -86,   110,    56,    73,    77,
      87,    80,    81,    82,    83,    84,    85,    78,   214,   215,
     216,   217,   218,   219,    54,    95,   208,   100,    95,   209,
     103,    80,    81,    82,    83,    84,    85,   124,   125,    86,
     129,   147,   130,   145,   151,   155,   157,   150,    87,   159,
     160,   161,   162,   163,   164,   153,   154,   156,   231,    86,
     240,   169,   158,   175,   179,   168,   239,   185,    87,    95,
     234,   165,   166,   180,   182,   -35,   210,   247,   212,   248,
     105,     1,     2,     3,     4,     5,     6,     7,     8,    65,
     106,   213,    10,   107,   108,   -99,   109,    80,    81,    82,
      83,    84,    85,    80,    81,    82,    83,    84,    85,   131,
     132,   133,   134,   135,   136,   220,   221,   222,   223,     1,
       2,     3,     4,     5,     6,     7,     8,    65,   227,   229,
      10,    86,   235,   245,    87,   243,   110,   237,    34,   249,
      87,    80,    81,    82,    83,    84,    85,     1,     2,     3,
       4,     5,     6,     7,     8,     9,    79,    61,    10,     1,
       2,     3,     4,     5,     6,     7,     8,    65,   177,    86,
      10,   242,   170,   149,   184,   211,   172,   173,    87,     1,
       2,     3,     4,     5,     6,     7,     8,   228,   174,     0,
      10
};

static const yytype_int16 yycheck[] =
{
      76,    69,    69,     0,    87,    28,    39,    39,    39,    39,
       4,     0,    32,    38,    86,     0,    13,    26,    86,    28,
      29,    30,    31,   106,    13,     4,     4,    59,    26,     8,
       9,    64,    52,    64,    64,    63,    61,    48,    49,    62,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    40,    15,    16,    17,    18,    19,    77,   130,    56,
      59,   129,   130,    26,    27,    28,    29,    30,    31,   137,
      67,   154,   140,     4,    60,    25,   144,     8,     9,    29,
      26,   157,   150,   150,    30,   168,    50,    51,    52,    26,
      27,    54,    26,    27,    64,    58,    59,    57,    26,    26,
      63,    26,    27,    28,    29,    30,    31,    58,   191,   192,
     193,   194,   195,   196,   103,   183,   183,    38,   186,   186,
      60,    26,    27,    28,    29,    30,    31,    59,    63,    54,
      39,    61,    40,    62,    59,    59,    18,    63,    63,    33,
      34,    35,    36,    37,    38,    63,    63,    57,   224,    54,
     233,    64,    59,    38,    29,    61,   232,   154,    63,   227,
     227,    55,    56,    62,    59,    57,    59,   243,    58,   245,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    16,    15,    16,    17,    18,    19,    26,    27,    28,
      29,    30,    31,    26,    27,    28,    29,    30,    31,    42,
      43,    44,    45,    46,    47,    64,    60,    62,    57,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    63,    28,
      15,    54,    60,    64,    63,    32,    59,    58,    13,    59,
      63,    26,    27,    28,    29,    30,    31,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    67,    50,    15,     4,
       5,     6,     7,     8,     9,    10,    11,    12,   145,    54,
      15,   235,   129,   103,    59,   188,   137,   140,    63,     4,
       5,     6,     7,     8,     9,    10,    11,   221,   144,    -1,
      15
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      15,    66,    67,    68,    69,    72,    73,    91,    96,    97,
       4,    94,     4,    95,     4,     8,     9,    93,     4,     8,
       9,    92,    26,     0,    67,    26,    27,    74,    76,    98,
      99,    94,    95,    94,    95,    26,    70,    74,    63,    77,
      78,    59,    60,    75,    91,   101,    57,    38,    61,    79,
      81,    79,    74,   102,    64,    12,    71,    72,    91,    80,
      28,    62,    82,    26,   103,   105,   100,    26,    58,    71,
      26,    27,    28,    29,    30,    31,    54,    63,   133,   134,
     135,   136,   138,   140,   142,   143,   145,   146,   151,    83,
      38,    85,   106,    60,   104,     3,    13,    16,    17,    19,
      59,    72,   108,   109,   110,   112,   113,   117,   121,   124,
     125,   126,   133,   143,    59,    63,   144,   135,   126,    39,
      40,    42,    43,    44,    45,    46,    47,   137,    48,    49,
     139,    50,    51,    52,   141,    62,    86,    61,   107,   101,
      63,    59,   126,    63,    63,    59,    57,    18,    59,    33,
      34,    35,    36,    37,    38,    55,    56,   147,    61,    64,
     134,   135,   138,   140,   142,    38,    84,    85,    87,    29,
      62,   133,    59,   118,    59,    72,   123,   126,   108,   111,
     108,   132,   131,   130,   129,   128,   127,    26,    28,    29,
      30,    31,   148,   149,   150,   126,    88,    64,   133,   133,
      59,   111,    58,    16,   126,   126,   126,   126,   126,   126,
      64,    60,    62,    57,   114,    64,    59,    63,   150,    28,
      89,   108,   119,   120,   133,    60,    90,    58,   115,   108,
     126,    64,    89,    32,   116,    64,   122,   108,   108,    59
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
		  Type, Value); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 8:
#line 116 "parser.y"
    { insert_type(); }
    break;

  case 18:
#line 135 "parser.y"
    { push(current_identifier);
						  if(check_function(current_identifier))
						  {yyerror("ERROR: Identifier cannot be same as function name!\n"); exit(8);}
						  if(duplicate(current_identifier)){yyerror("Duplicate value!\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type(); }
    break;

  case 20:
#line 139 "parser.y"
    {if(duplicate(current_identifier)){yyerror("Duplicate value!\n");exit(0);}insert_SymbolTable_nest(current_identifier,current_nested_val); insert_type();  }
    break;

  case 23:
#line 141 "parser.y"
    {strcpy(previous_operator,"="); push("=");}
    break;

  case 24:
#line 141 "parser.y"
    {codeassign();}
    break;

  case 27:
#line 148 "parser.y"
    {insert_dimensions();}
    break;

  case 28:
#line 148 "parser.y"
    {if((yyval) < 1) {yyerror("Array must have size greater than 1!\n"); exit(0);} }
    break;

  case 33:
#line 157 "parser.y"
    {strcpy(previous_operator,"=");}
    break;

  case 34:
#line 157 "parser.y"
    { insert_value(); }
    break;

  case 35:
#line 160 "parser.y"
    {strcpy(previous_operator,"=");}
    break;

  case 62:
#line 194 "parser.y"
    {strcpy(currfunctype, current_type); check_duplicate(current_identifier); insert_SymbolTable_function(current_identifier);  strcpy(current_function,current_identifier); insert_type();}
    break;

  case 63:
#line 197 "parser.y"
    {params_count = 0;}
    break;

  case 64:
#line 197 "parser.y"
    {start_function();}
    break;

  case 65:
#line 197 "parser.y"
    {end_function();}
    break;

  case 66:
#line 200 "parser.y"
    { check_params(current_type); }
    break;

  case 67:
#line 200 "parser.y"
    {insert_SymbolTable_paramscount(current_function, params_count);}
    break;

  case 68:
#line 200 "parser.y"
    {insert_SymbolTable_paramscount(current_function, params_count);}
    break;

  case 72:
#line 210 "parser.y"
    {insert_parameters(); insert_type(); insert_SymbolTable_nest(current_identifier,1); params_count++;}
    break;

  case 83:
#line 223 "parser.y"
    {current_nested_val++;}
    break;

  case 84:
#line 223 "parser.y"
    {remove_scope(current_nested_val);current_nested_val--;}
    break;

  case 89:
#line 234 "parser.y"
    {label1(); if((yyvsp[(3) - (4)])!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
    break;

  case 90:
#line 234 "parser.y"
    {label2();}
    break;

  case 92:
#line 237 "parser.y"
    {label3();}
    break;

  case 93:
#line 238 "parser.y"
    {label3();}
    break;

  case 94:
#line 241 "parser.y"
    {label4();}
    break;

  case 95:
#line 241 "parser.y"
    {label1();if((yyvsp[(4) - (5)])!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
    break;

  case 96:
#line 241 "parser.y"
    {label5();}
    break;

  case 97:
#line 242 "parser.y"
    {label1();if((yyvsp[(4) - (5)])!=1){yyerror("Here, condition must have integer value!\n");exit(0);}}
    break;

  case 98:
#line 242 "parser.y"
    {label5();}
    break;

  case 99:
#line 243 "parser.y"
    {label4();}
    break;

  case 100:
#line 243 "parser.y"
    {label1(); label5(); if((yyvsp[(6) - (7)])!=1){yyerror("ERROR: Here, condition must have integer value!\n");exit(0);}}
    break;

  case 103:
#line 247 "parser.y"
    {label4();}
    break;

  case 105:
#line 251 "parser.y"
    {if(strcmp(currfunctype,"void")) {yyerror("ERROR: Cannot have void return for non-void function!\n"); exit(0);}}
    break;

  case 106:
#line 252 "parser.y"
    { 	if(!strcmp(currfunctype, "void"))
										{
											yyerror("Non-void return for void function!"); exit(0);
										}

										if((currfunctype[0]=='i' || currfunctype[0]=='c') && (yyvsp[(2) - (3)])!=1)
										{
											yyerror("Expression doesn't match return type of function\n"); exit(0);
										}

			                     	}
    break;

  case 108:
#line 269 "parser.y"
    {push("=");}
    break;

  case 109:
#line 269 "parser.y"
    {		strcpy(previous_operator,"=");
																	  if((yyvsp[(1) - (4)])==1 && (yyvsp[(4) - (4)])==1)
																	  {
			                                                          (yyval)=1;
			                                                          }
			                                                          else
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
																	  codeassign();
			                                                       }
    break;

  case 110:
#line 278 "parser.y"
    {push("+=");}
    break;

  case 111:
#line 278 "parser.y"
    {		strcpy(previous_operator,"+=");
																	  if((yyvsp[(1) - (4)])==1 && (yyvsp[(4) - (4)])==1)
			                                                          (yyval)=1;
			                                                          else
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
																	  codeassign();
			                                                       }
    break;

  case 112:
#line 285 "parser.y"
    {push("-=");}
    break;

  case 113:
#line 285 "parser.y"
    {		strcpy(previous_operator,"-=");
																	  if((yyvsp[(1) - (4)])==1 && (yyvsp[(4) - (4)])==1)
			                                                          (yyval)=1;
			                                                          else
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
																	  codeassign();
			                                                       }
    break;

  case 114:
#line 293 "parser.y"
    {push("*=");}
    break;

  case 115:
#line 293 "parser.y"
    {	strcpy(previous_operator,"*=");
																	  if((yyvsp[(1) - (4)])==1 && (yyvsp[(4) - (4)])==1)
			                                                          (yyval)=1;
			                                                          else
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
																	  codeassign();
			                                                       }
    break;

  case 116:
#line 300 "parser.y"
    {push("/=");}
    break;

  case 117:
#line 300 "parser.y"
    {	strcpy(previous_operator,"/=");
																	  if((yyvsp[(1) - (4)])==1 && (yyvsp[(4) - (4)])==1)
			                                                          (yyval)=1;
			                                                          else
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
																	  codeassign();
			                                                       }
    break;

  case 118:
#line 307 "parser.y"
    {push("%=");}
    break;

  case 119:
#line 307 "parser.y"
    {	strcpy(previous_operator,"%=");
																	  if((yyvsp[(1) - (4)])==1 && (yyvsp[(4) - (4)])==1)
			                                                          (yyval)=1;
			                                                          else
			                                                          {(yyval)=-1; yyerror("Type Mismatch\n"); exit(0);}
																	  codeassign();
			                                                       }
    break;

  case 120:
#line 315 "parser.y"
    {push("++"); if((yyvsp[(1) - (2)]) == 1) (yyval)=1; else (yyval)=-1; genunary();}
    break;

  case 121:
#line 316 "parser.y"
    {push("--"); if((yyvsp[(1) - (2)]) == 1) (yyval)=1; else (yyval)=-1; genunary();}
    break;

  case 122:
#line 317 "parser.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 123:
#line 321 "parser.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1; codegen();}
    break;

  case 124:
#line 322 "parser.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 125:
#line 325 "parser.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1; codegen();}
    break;

  case 126:
#line 326 "parser.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 127:
#line 329 "parser.y"
    {if((yyvsp[(2) - (2)])==1) (yyval)=1; else (yyval)=-1; codegen();}
    break;

  case 128:
#line 330 "parser.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 129:
#line 333 "parser.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1; codegen();}
    break;

  case 130:
#line 334 "parser.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 131:
#line 337 "parser.y"
    {strcpy(previous_operator,">="); push(">=");}
    break;

  case 132:
#line 338 "parser.y"
    {strcpy(previous_operator,"<="); push("<=");}
    break;

  case 133:
#line 339 "parser.y"
    {strcpy(previous_operator,">"); push(">");}
    break;

  case 134:
#line 340 "parser.y"
    {strcpy(previous_operator,"<"); push("<");}
    break;

  case 135:
#line 341 "parser.y"
    {strcpy(previous_operator,"=="); push("==");}
    break;

  case 136:
#line 342 "parser.y"
    {strcpy(previous_operator,"!="); push("!=");}
    break;

  case 137:
#line 345 "parser.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1; codegen();}
    break;

  case 138:
#line 346 "parser.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 139:
#line 349 "parser.y"
    {push("+");}
    break;

  case 140:
#line 350 "parser.y"
    {push("-");}
    break;

  case 141:
#line 353 "parser.y"
    {if((yyvsp[(1) - (3)]) == 1 && (yyvsp[(3) - (3)])==1) (yyval)=1; else (yyval)=-1; codegen();}
    break;

  case 142:
#line 354 "parser.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 143:
#line 357 "parser.y"
    {push("*");}
    break;

  case 144:
#line 358 "parser.y"
    {push("/");}
    break;

  case 145:
#line 359 "parser.y"
    {push("%");}
    break;

  case 146:
#line 362 "parser.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 147:
#line 363 "parser.y"
    {if((yyvsp[(1) - (1)]) == 1) (yyval)=1; else (yyval)=-1;}
    break;

  case 148:
#line 366 "parser.y"
    {
						  push(current_identifier);
			              if(!check_scope(current_identifier))
			              {printf("%s\n",current_identifier);yyerror("Identifier undeclared\n");exit(0);}
			              if(!check_array(current_identifier))
			              {printf("%s\n",current_identifier);yyerror("Array Identifier has No Subscript\n");exit(0);}
			              if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
			              (yyval) = 1;
			              else
			              (yyval) = -1;
			              }
    break;

  case 149:
#line 377 "parser.y"
    {push(current_identifier);
								array_flag = 1;
								if(!check_scope(current_identifier)){printf("%s\n",current_identifier);yyerror("Identifier undeclared\n");exit(0);}}
    break;

  case 150:
#line 380 "parser.y"
    {if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
			              		(yyval) = 1;
			              		else
			              		(yyval) = -1;
			              		}
    break;

  case 151:
#line 387 "parser.y"
    {if((yyvsp[(2) - (3)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 153:
#line 389 "parser.y"
    {if((yyvsp[(1) - (1)])==1) (yyval)=1; else (yyval)=-1;}
    break;

  case 154:
#line 392 "parser.y"
    { strcpy(previous_operator,"(");
			             if(!check_declaration(current_identifier, "Function"))
			             { yyerror("Function not declared"); exit(0);}
			             insert_SymbolTable_function(current_identifier);
						 strcpy(currfunccall,current_identifier);
						 if(gettype(current_identifier,0)=='i' || gettype(current_identifier,1)== 'c')
						 {
			             (yyval) = 1;
			             }
			             else
			             (yyval) = -1;
                         call_params_count=0;
			             }
    break;

  case 155:
#line 405 "parser.y"
    { if(strcmp(currfunccall,"printf") && strcmp(currfunccall,"scanf"))
							{
								if(getSTparamscount(currfunccall)!=call_params_count)
								{
									yyerror("Number of parameters not same as number of arguments during function call!");
									//printf("Number of arguments in function call %s doesn't match number of parameters\n", currfunccall);
									exit(8);
								}
							}
							callgen();
						 }
    break;

  case 158:
#line 421 "parser.y"
    { call_params_count++; }
    break;

  case 159:
#line 422 "parser.y"
    { call_params_count++; }
    break;

  case 160:
#line 424 "parser.y"
    {arggen(1);}
    break;

  case 161:
#line 424 "parser.y"
    {arggen(2);}
    break;

  case 162:
#line 424 "parser.y"
    {arggen(3);}
    break;

  case 163:
#line 424 "parser.y"
    {arggen(4);}
    break;

  case 164:
#line 424 "parser.y"
    {arggen(5);}
    break;

  case 165:
#line 427 "parser.y"
    {  insert_type(); codegencon(); (yyval)=1; }
    break;

  case 166:
#line 428 "parser.y"
    {  insert_type(); codegencon(); (yyval)=-1;}
    break;

  case 167:
#line 429 "parser.y"
    {  insert_type(); codegencon(); }
    break;

  case 168:
#line 430 "parser.y"
    {  insert_type(); codegencon(); (yyval)=1; }
    break;


/* Line 1267 of yacc.c.  */
#line 2288 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


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



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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


#line 433 "parser.y"


extern FILE *yyin;
extern int yylineno;
extern char *yytext;
void insert_SymbolTable_type(char *,char *);
void insert_SymbolTable_value(char *, char *);
void insert_ConstantTable(char *, char *);
void insert_SymbolTable_arraydim(char *, char *);
void insert_SymbolTable_funcparam(char *, char *);
struct stack
{
	char value[100];
	int labelvalue;
}s[100],label[100];


void push(char *x)
{
	strcpy(s[++top].value,x);
}


void codegen()
{
	printf("t%d = %s %s %s\n",count,s[top-2].value,s[top-1].value,s[top].value);
	top = top - 2;
    sprintf(temp, "t%d", count);
	strcpy(s[top].value,temp);
	count++;
}

void codegencon()
{
	if(array_flag == 1){
		printf("t%d = 4 * %s\n",count ,current_value);
		count++;
		printf("t%d = &arr[t%d]\n",count ,count-1);
		array_tac_flag = 1;
	}
	else
		printf("t%d = %s\n",count ,current_value);
	sprintf(temp, "t%d", count);
	push(temp);
	count++;
	array_flag = 0;
}

void codeassign()
{
	if(array_tac_flag == 1)
		printf("*%s = %s\n",s[top-2].value,s[top].value);
	else
		printf("%s = %s\n",s[top-2].value,s[top].value);
	array_tac_flag = 0;
	top = top - 2;
}

int isunary(char *s)
{
	if(strcmp(s, "--")==0 || strcmp(s, "++")==0)
	{
		return 1;
	}
	return 0;
}

void genunary()
{
	char temp1[100], temp2[100], temp3[100];
	strcpy(temp1, s[top].value);
	strcpy(temp2, s[top-1].value);

	if(isunary(temp1))
	{
		strcpy(temp3, temp1);
		strcpy(temp1, temp2);
		strcpy(temp2, temp3);
	}

	if(strcmp(temp2,"--")==0)
	{
		printf("t%d = %s - 1\n", count, temp1);
		printf("%s = t%d\n", temp1, count);
	}

	if(strcmp(temp2,"++")==0)
	{
		printf("t%d = %s + 1\n", count, temp1);
		printf("%s = t%d\n", temp1, count);
	}
	count++;
	top = top -2;
}


void label1()
{
	printf("IF not %s goto L%d\n",s[top].value,lno);
	label[++ltop].labelvalue = lno++;
}

void label2()
{
	printf("goto L%d\n",lno);
	printf("L%d:\n",label[ltop].labelvalue);
	ltop--;
	label[++ltop].labelvalue=lno++;
}

void label3()
{
	printf("L%d:\n",label[ltop].labelvalue);
	ltop--;
}

void label4()
{
	printf("L%d:\n",lno);
	label[++ltop].labelvalue = lno++;
}


void label5()
{
	printf("goto L%d:\n",label[ltop-1].labelvalue);
	printf("L%d:\n",label[ltop].labelvalue);
	ltop = ltop - 2;
}

void start_function()
{
	printf("func begin %s\n",current_function);
}

void end_function()
{
	printf("func end\n\n");
}

void arggen(int i)
{
    if(i==1)
    {
	printf("param %s\n", current_identifier);
	}
	else
	{
	printf("param %s\n", current_value);
	}
}

void callgen()
{
	printf("refparam result\n");
	push("result");
	printf("call %s, %d\n",currfunccall,call_params_count);
}


int main()
{
	yyin = fopen("code.c", "r");
	yyparse();

	if(flag == 0)
	{
		printf("VALID PARSE\n");
	}
}

void yyerror(char *s)
{
	printf("Line No. : %d %s %s\n",yylineno, s, yytext);
	flag=1;
	printf("\nUNSUCCESSFUL: INVALID PARSE\n");
}

void insert_type()
{
	insert_SymbolTable_type(current_identifier,current_type);
}

void insert_value()
{
	if(strcmp(previous_operator, "=") == 0)
	{	insert_SymbolTable_value(current_identifier,current_value);
	}
}

void insert_dimensions()
{
    insert_SymbolTable_arraydim(current_identifier, current_value);
}

void insert_parameters()
{
    insert_SymbolTable_funcparam(current_function, current_identifier);
}

int yywrap()
{
	return 1;
}

