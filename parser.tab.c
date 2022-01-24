/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include "global.h"
#include <string.h>
#include <stdbool.h>


extern TableIds * table = NULL;
extern TableStructures * tableStruct = NULL;
extern BufferLLC* champBuffer = NULL;




bool erreurSyntax = false;
extern unsigned int linenbr;
extern bool erreurLexical;
char quad[100][4][25];
int ind;
extern FILE * yyin ;
int yylex(void);
void yyerror (char const *s);


#line 94 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    TOKEN_ADD = 258,
    TOKEN_SOUSTR = 259,
    TOKEN_OR = 260,
    TOKEN_MULT = 261,
    TOKEN_DIVIS = 262,
    TOKEN_AND = 263,
    TOKEN_NOT = 264,
    TOKEN_MOD = 265,
    PARENTHESE_G = 266,
    PARENTHESE_D = 267,
    TOKEN_MULTICOM = 268,
    TOKEN_COMMENT = 269,
    TOKEN_CHAR = 270,
    TOKEN_TEXT = 271,
    TOKEN_NUMBER = 272,
    TOKEN_FALSE = 273,
    TOKEN_TRUE = 274,
    TOKEN_DECLARE = 275,
    TOKEN_CONST = 276,
    TOKEN_START = 277,
    TOKEN_STOP = 278,
    TOKEN_STRUCT = 279,
    TOKEN_READ = 280,
    TOKEN_WRITE = 281,
    TOKEN_IF = 282,
    TOKEN_ELSE = 283,
    TOKEN_FOR = 284,
    TOKEN_IN = 285,
    TOKEN_FROM = 286,
    TOKEN_WHILE = 287,
    TOKEN_ASSIGN = 288,
    NUM = 289,
    BOOL = 290,
    CHAR = 291,
    FININSTR = 292,
    ACCOLAD_G = 293,
    ACCOLAD_D = 294,
    TOKEN_BEGIN = 295,
    END = 296,
    TOKEN_INF = 297,
    TOKEN_SUP = 298,
    TOKEN_INFEGAL = 299,
    TOKEN_SUPEGAL = 300,
    TOKEN_EGAL = 301,
    TOKEN_DIFF = 302,
    TOKEN_COMMA = 303,
    TOKEN_ACSTRUCT = 304,
    TOKEN_ID = 305,
    TOKEN_FININPUT = 306,
    CROCHET_G = 307,
    CROCHET_D = 308
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 29 "parser.y"

    long num;
    char* text;
    char CHARACTER;
    int BOOLEAN;
    Identifiant *varId;

#line 208 "parser.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   266

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  189

#define YYUNDEFTOK  2
#define YYMAXUTOK   308


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   134,   134,   136,   136,   136,   139,   139,   141,   146,
     151,   156,   160,   165,   169,   198,   225,   252,   259,   265,
     270,   276,   283,   290,   295,   300,   305,   311,   316,   321,
     326,   331,   335,   352,   361,   363,   367,   375,   382,   389,
     396,   403,   410,   417,   432,   439,   441,   443,   445,   447,
     449,   455,   474,   491,   505,   519,   535,   549,   553,   556,
     557,   560,   564,   567,   570,   575,   591,   593,   595,   597,
     599,   601,   603,   607,   609,   611,   613,   615,   617,   621,
     623
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TOKEN_ADD", "TOKEN_SOUSTR", "TOKEN_OR",
  "TOKEN_MULT", "TOKEN_DIVIS", "TOKEN_AND", "TOKEN_NOT", "TOKEN_MOD",
  "PARENTHESE_G", "PARENTHESE_D", "TOKEN_MULTICOM", "TOKEN_COMMENT",
  "TOKEN_CHAR", "TOKEN_TEXT", "TOKEN_NUMBER", "TOKEN_FALSE", "TOKEN_TRUE",
  "TOKEN_DECLARE", "TOKEN_CONST", "TOKEN_START", "TOKEN_STOP",
  "TOKEN_STRUCT", "TOKEN_READ", "TOKEN_WRITE", "TOKEN_IF", "TOKEN_ELSE",
  "TOKEN_FOR", "TOKEN_IN", "TOKEN_FROM", "TOKEN_WHILE", "TOKEN_ASSIGN",
  "NUM", "BOOL", "CHAR", "FININSTR", "ACCOLAD_G", "ACCOLAD_D",
  "TOKEN_BEGIN", "END", "TOKEN_INF", "TOKEN_SUP", "TOKEN_INFEGAL",
  "TOKEN_SUPEGAL", "TOKEN_EGAL", "TOKEN_DIFF", "TOKEN_COMMA",
  "TOKEN_ACSTRUCT", "TOKEN_ID", "TOKEN_FININPUT", "CROCHET_G", "CROCHET_D",
  "$accept", "program", "bloc_code", "bloc_declaration", "instruction",
  "affectation", "variable_name", "DECLARE", "LISTE", "CHAMP",
  "expression_arithmetique", "addition", "soustraction", "multiplication",
  "division", "modulo", "ecriture", "lecture", "while", "for",
  "conditionnel", "ExpBool", "Comparaison", "comparable", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308
};
# endif

#define YYPACT_NINF (-61)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-81)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -16,    37,     6,   -25,    -4,    64,    40,    37,   -61,   208,
     -19,     7,    26,    58,    59,   108,   -61,    27,    49,    88,
      93,    95,   -61,   -61,   125,   -61,   127,   -61,   136,   -61,
     157,    65,    86,    -9,   151,   132,   151,    -7,   163,    65,
     -61,   162,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,    68,   131,   146,   177,   178,   -61,   195,   196,
     197,   151,   151,   -61,   -61,   -61,    12,    -3,   -61,   161,
     198,    13,   165,    -2,   -61,   -61,   148,   199,   111,   -61,
     200,   201,   202,   203,   -61,   -61,   -61,   -61,   180,   151,
     151,    76,     5,     5,     5,     5,     5,     5,   185,   224,
     123,   -61,    -2,   -61,   -61,    23,   -61,   -61,   -61,   -61,
     -61,   172,   205,   167,   133,    28,    42,   -61,    91,   102,
     119,   135,   -61,   -61,   -61,   -61,   -61,   235,   -61,    -5,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   204,   206,   207,
     190,    -2,    -2,    -2,    -2,    -2,   -61,   -61,   -61,   -61,
     -61,   228,   -61,   229,   -61,   230,   -61,   232,   123,   -61,
     123,   233,   -61,   -61,   106,   106,   241,   241,   241,   209,
     210,   211,   212,   214,   215,   213,   220,   221,   222,   223,
     -61,   -61,   123,   -61,   -61,   -61,   -61,   225,   -61
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     7,     0,     0,     0,     0,     0,     7,     1,     0,
       0,     0,     0,     0,     0,     0,     6,     0,     0,     0,
       0,     0,    34,    20,     0,    21,     0,    22,     0,    32,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
       8,     0,    10,     9,    12,    13,    11,    26,    27,    23,
      25,    24,     0,     0,     0,     0,     0,     5,     0,     0,
       0,     0,     0,    79,    67,    68,    80,     0,    66,     0,
       0,     0,     0,     0,     2,     3,     0,     0,     0,    35,
       0,     0,     0,     0,    59,    58,    57,    70,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    19,     0,    44,    51,     0,    45,    46,    47,    48,
      49,     0,     0,    44,    51,     0,     0,    33,     0,     0,
       0,     0,    28,    29,    30,    31,    69,    72,    71,     0,
      80,    77,    75,    78,    76,    73,    74,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    18,    16,    14,    15,
      36,     0,    37,     0,    38,     0,    43,     0,     0,    63,
       0,     0,    60,    50,    52,    53,    54,    55,    56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      64,    62,     0,    39,    40,    41,    42,     0,    61
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -61,   -61,   -31,   245,   -61,   -61,   -22,   -61,   -61,   -61,
     -60,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -33,   -61,   124
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    38,     6,    39,    40,    41,     7,    52,    79,
     140,   106,   107,   108,   109,   110,    42,    43,    44,    45,
      46,    88,    68,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    67,    89,    71,     1,    90,     8,    59,    75,   102,
      58,    60,    66,   105,    66,   103,   115,   -65,    89,    22,
     -65,    90,    63,   158,   -65,     9,   141,   142,    87,   143,
     144,   141,   142,   145,   143,   144,   159,    91,   145,    66,
      66,    37,    72,   116,    23,    73,    10,    89,    37,   -65,
      90,   104,   -65,   100,   114,    37,   127,   128,     3,    24,
     129,     4,    15,    25,    47,   148,    31,    66,    66,   139,
     130,   130,   130,   130,   130,   130,   146,    31,    26,   149,
     104,   164,   165,   166,   167,   168,    48,     5,    -4,   114,
      32,    33,    34,    -4,    35,    27,    29,    36,    11,    12,
      13,    32,    33,    34,    -4,    35,    -4,    77,    36,    31,
      28,    30,   143,   144,    14,    37,   145,    -4,    78,   104,
     104,   104,   104,   104,    31,    49,    37,   173,   150,   174,
      50,    -4,    51,    32,    33,    34,    37,    35,   -65,   152,
      36,   -65,    53,   151,    54,   118,   119,   120,    32,    33,
      34,   187,    35,    55,   153,    36,   154,    61,    37,   111,
      61,   121,    62,   112,    -4,   113,    64,    65,    63,    64,
      65,   155,   156,    37,    56,   -80,   -80,   -80,   -80,   -80,
     -80,    61,    70,   111,    80,    89,    74,   157,    90,   113,
      64,    65,   126,   141,   142,    76,   143,   144,    37,    81,
     145,    37,   163,    92,    93,    94,    95,    96,    97,   -79,
     -79,   -79,   -79,   -79,   -79,   101,   131,   132,   133,   134,
     135,   136,    37,    17,    18,    19,    20,    21,    98,    99,
      82,    83,    84,    85,    86,   137,   117,   122,   123,   124,
     125,   138,   147,    90,   160,   169,   170,   171,   162,   172,
     175,   145,    16,   182,   161,   180,   181,   183,   184,   185,
     186,     0,   176,   177,   178,   179,   188
};

static const yytype_int16 yycheck[] =
{
      31,    34,     5,    36,    20,     8,     0,    16,    39,    11,
      32,    33,    34,    73,    36,    17,    76,     5,     5,    38,
       8,     8,    17,    28,    12,    50,     3,     4,    61,     6,
       7,     3,     4,    10,     6,     7,    41,    40,    10,    61,
      62,    50,    49,    76,    37,    52,    50,     5,    50,    37,
       8,    73,    40,    40,    76,    50,    89,    90,    21,    52,
      91,    24,    22,    37,    37,    37,     1,    89,    90,   100,
      92,    93,    94,    95,    96,    97,    53,     1,    52,    37,
     102,   141,   142,   143,   144,   145,    37,    50,    23,   111,
      25,    26,    27,    28,    29,    37,    37,    32,    34,    35,
      36,    25,    26,    27,    28,    29,    41,    39,    32,     1,
      52,    52,     6,     7,    50,    50,    10,    41,    50,   141,
     142,   143,   144,   145,     1,    37,    50,   158,    37,   160,
      37,    23,    37,    25,    26,    27,    50,    29,     5,    37,
      32,     8,    17,    52,    17,    34,    35,    36,    25,    26,
      27,   182,    29,    17,    52,    32,    37,     9,    50,    11,
       9,    50,    11,    15,    41,    17,    18,    19,    17,    18,
      19,    52,    37,    50,    17,    42,    43,    44,    45,    46,
      47,     9,    50,    11,    53,     5,    23,    52,     8,    17,
      18,    19,    12,     3,     4,    33,     6,     7,    50,    53,
      10,    50,    12,    42,    43,    44,    45,    46,    47,    42,
      43,    44,    45,    46,    47,    50,    92,    93,    94,    95,
      96,    97,    50,    15,    16,    17,    18,    19,    30,    31,
      53,    53,    37,    37,    37,    50,    37,    37,    37,    37,
      37,    17,    37,     8,    40,    17,    17,    17,    41,    17,
      17,    10,     7,    40,    48,    41,    41,    37,    37,    37,
      37,    -1,    53,    53,    53,    53,    41
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    20,    55,    21,    24,    50,    57,    61,     0,    50,
      50,    34,    35,    36,    50,    22,    57,    15,    16,    17,
      18,    19,    38,    37,    52,    37,    52,    37,    52,    37,
      52,     1,    25,    26,    27,    29,    32,    50,    56,    58,
      59,    60,    70,    71,    72,    73,    74,    37,    37,    37,
      37,    37,    62,    17,    17,    17,    17,    56,    60,    16,
      60,     9,    11,    17,    18,    19,    60,    75,    76,    77,
      50,    75,    49,    52,    23,    56,    33,    39,    50,    63,
      53,    53,    53,    53,    37,    37,    37,    75,    75,     5,
       8,    40,    42,    43,    44,    45,    46,    47,    30,    31,
      40,    50,    11,    17,    60,    64,    65,    66,    67,    68,
      69,    11,    15,    17,    60,    64,    75,    37,    34,    35,
      36,    50,    37,    37,    37,    37,    12,    75,    75,    56,
      60,    77,    77,    77,    77,    77,    77,    50,    17,    56,
      64,     3,     4,     6,     7,    10,    53,    37,    37,    37,
      37,    52,    37,    52,    37,    52,    37,    52,    28,    41,
      40,    48,    41,    12,    64,    64,    64,    64,    64,    17,
      17,    17,    17,    56,    56,    17,    53,    53,    53,    53,
      41,    41,    40,    37,    37,    37,    37,    56,    41
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    56,    56,    57,    57,    58,    58,
      58,    58,    58,    58,    59,    59,    59,    60,    60,    60,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    62,    63,    63,    63,    63,
      63,    63,    63,    63,    64,    64,    64,    64,    64,    64,
      64,    64,    65,    66,    67,    68,    69,    70,    70,    71,
      72,    73,    73,    74,    74,    75,    75,    75,    75,    75,
      75,    75,    75,    76,    76,    76,    76,    76,    76,    77,
      77
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     2,     0,     2,     2,     0,     1,     1,
       1,     1,     1,     1,     4,     4,     4,     1,     4,     3,
       3,     3,     3,     4,     4,     4,     4,     4,     6,     6,
       6,     6,     3,     6,     0,     2,     3,     3,     3,     6,
       6,     6,     6,     3,     1,     1,     1,     1,     1,     1,
       3,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     9,     7,     5,     7,     1,     1,     1,     1,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 5:
#line 136 "parser.y"
                                                                  {printf("erreur syntaxique a la ligne %d",linenbr);erreurSyntax=true;}
#line 1528 "parser.tab.c"
    break;

  case 8:
#line 141 "parser.y"
                           {
			printf("\tInstruction Affectation\n");

                }
#line 1537 "parser.tab.c"
    break;

  case 9:
#line 146 "parser.y"
                       {
			printf("\tInstruction Lecture\n");

                }
#line 1546 "parser.tab.c"
    break;

  case 10:
#line 151 "parser.y"
                        {
			printf("\tInstruction ecriture\n");

                }
#line 1555 "parser.tab.c"
    break;

  case 11:
#line 156 "parser.y"
                            {
                    printf(" instruction conditionnel\n");
                }
#line 1563 "parser.tab.c"
    break;

  case 12:
#line 160 "parser.y"
                     {
                    printf("Boucle Tant que\n");
                    
                }
#line 1572 "parser.tab.c"
    break;

  case 13:
#line 165 "parser.y"
                   {
                    printf("Boucle Pour\n");
                    
                }
#line 1581 "parser.tab.c"
    break;

  case 14:
#line 169 "parser.y"
                                                                         {                    
                        if((yyvsp[-3].varId) != NULL) {
                            if((yyvsp[-3].varId)->type == ENTIER){
                                printf("Type correct: %s\n", (yyvsp[-3].varId)->nom);

                                char nm[20];
                                strcpy(nm, (yyvsp[-3].varId)->nom);
                                char exp[20]; 
                                strcpy(exp, (yyvsp[-1].text));

                                strcpy(quad[ind][0],"=");
                                strcpy(quad[ind][1],exp);
                                strcpy(quad[ind][2]," ");
                                strcpy(quad[ind][3],nm);
                                ind++;
                                
                            }
                            else {
                                fprintf(stderr, "Erreur, type attendu: %s, trouvé: ENTIER\n", typeOf((yyvsp[-3].varId)->type));
                                exit(1);
                            }
                        }
                        else {
                            fprintf(stderr, "ERREUR: Identifiant non declare\n");
                            yyerror("Compilation interrompue\n");
                            exit(1);
                        }
                }
#line 1614 "parser.tab.c"
    break;

  case 15:
#line 198 "parser.y"
                                                           {
                        if((yyvsp[-3].varId) != NULL) {
                            if((yyvsp[-3].varId)->type == BOOLEEN){
                            printf("Type correct: %s\n", (yyvsp[-3].varId)->nom);

                                char nm[20];
                                strcpy(nm, (yyvsp[-3].varId)->nom);
                                strcpy(quad[ind][0],"=");
                               char exp[20]; 
                                strcpy(exp, (yyvsp[-1].text));
                                strcpy(quad[ind][1],exp);
                                strcpy(quad[ind][2]," ");
                                strcpy(quad[ind][3],nm);
                                ind++;
                             }
                            else {
                                fprintf(stderr, "Erreur dans, type attendu: %s, trouvé: BOOLEEN\n", typeOf((yyvsp[-3].varId)->type));
                                exit(1);
                            }
                        }
                        else {
                            fprintf(stderr, "ERREUR: Identifiant non declare.");
                            yyerror("Compilation interrompue");
                            exit(1);
                        }
                }
#line 1645 "parser.tab.c"
    break;

  case 16:
#line 225 "parser.y"
                                                              {
                    if((yyvsp[-3].varId) != NULL) {
                            if((yyvsp[-3].varId)->type == CARACTERE){
                            printf("Type correct: %s\n", (yyvsp[-3].varId)->nom);
                            char nom[20];
                                strcpy(nom, (yyvsp[-3].varId)->nom);
                                char f[20] ;
                                strcpy(f, (yyvsp[-1].CHARACTER));
                                strcpy(quad[ind][0],"=");
                                strcpy(quad[ind][1],f);
                                strcpy(quad[ind][2]," ");
                                strcpy(quad[ind][3],nom);
                                ind++;
                             }
                            else {
                                fprintf(stderr, "Erreur dans, type attendu: %s, trouvé: CARACTERE\n", typeOf((yyvsp[-3].varId)->type));
                                exit(1);
                            }
                        }
                        else {
                            fprintf(stderr, "ERREUR: Identifiant non declare.");
                            yyerror("Compilation interrompue");
                            exit(1);
                        }
                }
#line 1675 "parser.tab.c"
    break;

  case 17:
#line 252 "parser.y"
                {
                        Identifiant *m = rechercherVar(table, (yyvsp[0].text));
                        
                        (yyval.varId) = m;
                            
                }
#line 1686 "parser.tab.c"
    break;

  case 18:
#line 259 "parser.y"
                                                                    {
			printf("Acces a un element  du tableau \n");
            Identifiant *q = rechercheElemTab(table, (yyvsp[-3].text));
			(yyval.varId)= q;	
		}
#line 1696 "parser.tab.c"
    break;

  case 19:
#line 265 "parser.y"
                                                {
            char * nstr = strcat( strcat((yyvsp[-2].text), ":"), (yyvsp[0].text));
            (yyval.varId) = rechercherVar(table, nstr);
		}
#line 1705 "parser.tab.c"
    break;

  case 20:
#line 270 "parser.y"
                                     {
   
            table->Entete_llc = declarerVar (table, (yyvsp[-2].text), ENTIER, PRIMITIF);
			printf("Declaration dun entier\n");
		}
#line 1715 "parser.tab.c"
    break;

  case 21:
#line 276 "parser.y"
                                      {
        
        table->Entete_llc  = declarerVar (table, (yyvsp[-2].text),BOOLEEN, PRIMITIF);
  
			printf("Declaration dun booleen\n");
		}
#line 1726 "parser.tab.c"
    break;

  case 22:
#line 283 "parser.y"
                                      {
          
            table->Entete_llc= declarerVar (table, (yyvsp[-2].text),CARACTERE, PRIMITIF);
            
			printf("Declaration dun caractere\n");
		}
#line 1737 "parser.tab.c"
    break;

  case 23:
#line 290 "parser.y"
                                                          {
            table->Entete_llc = declarerConstint (table, (yyvsp[-2].text), ENTIER, (yyvsp[-1].num)); 
			printf("Declaration dune constante de type entier\n");
		}
#line 1746 "parser.tab.c"
    break;

  case 24:
#line 295 "parser.y"
                                                        {
            table->Entete_llc = declarerConstint (table, (yyvsp[-2].text), BOOLEEN, 1);  
			printf("Declaration dune constante de type booleen\n");
		}
#line 1755 "parser.tab.c"
    break;

  case 25:
#line 300 "parser.y"
                                                         {
             table->Entete_llc = declarerConstint (table, (yyvsp[-2].text), BOOLEEN, 0);
			printf("Declaration dune constante de type booleen\n");
		}
#line 1764 "parser.tab.c"
    break;

  case 26:
#line 305 "parser.y"
                                                        {
            char medium[2] = {(yyvsp[-1].CHARACTER), '\0'};
             table->Entete_llc = declarerConst (table, (yyvsp[-2].text), CARACTERE,  medium); 
			printf("Declaration dune constante de type caractere\n");
		}
#line 1774 "parser.tab.c"
    break;

  case 27:
#line 311 "parser.y"
                                                {
            table->Entete_llc = declarerConst (table, (yyvsp[-2].text), TEXT, (yyvsp[-1].text));
			printf("Declaration dune constante de type texte \n");
		}
#line 1783 "parser.tab.c"
    break;

  case 28:
#line 316 "parser.y"
                                                                      {
            table->Entete_llc = declarerTab(table, (yyvsp[-5].text), ENTIER, (yyvsp[-2].num));
			printf("Declaration dun tableau de type entier et de taille %ld\n",(yyvsp[-2].num));
		}
#line 1792 "parser.tab.c"
    break;

  case 29:
#line 321 "parser.y"
                                                                       {
		    table->Entete_llc = declarerTab(table, (yyvsp[-5].text), BOOLEEN, (yyvsp[-2].num));
            printf("Declaration dun tableau de type booleen et de taille %ld\n",(yyvsp[-2].num));
		}
#line 1801 "parser.tab.c"
    break;

  case 30:
#line 326 "parser.y"
                                                                       {
            table->Entete_llc = declarerTab(table, (yyvsp[-5].text), CARACTERE, (yyvsp[-2].num));
			printf("Declaration dun tableau de type caractere et de taille %ld\n",(yyvsp[-2].num));
		}
#line 1810 "parser.tab.c"
    break;

  case 31:
#line 331 "parser.y"
                                                                           {
			printf("Declaration dun tableau de type structure %s et de taille %ld\n",(yyvsp[-4].text),(yyvsp[-2].num));
		}
#line 1818 "parser.tab.c"
    break;

  case 32:
#line 335 "parser.y"
                                          {
            Structure * p = rechercherStructure(tableStruct, (yyvsp[-1].text));
            if (p != NULL) {
                //Insertion du symbol de la structure
                table->Entete_llc= declarerVar(table, (yyvsp[-2].text), STRUCTURE, COMPLEXE);

                //Insertion des symboles
                declarerChampsDeVariableDeTypeStructure(table, p, (yyvsp[-2].text));
            } else {
                fprintf(stderr, "Structure %s non definit.\n", (yyvsp[-1].text));
                exit(1); 
            }
            

			printf("Declaration dune variable de type structure\n");
		}
#line 1839 "parser.tab.c"
    break;

  case 33:
#line 352 "parser.y"
                                                                        {
            tableStruct->tete = declarerStructure(tableStruct, (yyvsp[-4].text));

            //On lie les champs déclaré avec leur structure, qui vien detre déclaré
            linkChampsDeStructure(tableStruct->tete, champBuffer);

            champBuffer = NULL;
			printf("Creation dune structure\n");
		}
#line 1853 "parser.tab.c"
    break;

  case 34:
#line 361 "parser.y"
                      {}
#line 1859 "parser.tab.c"
    break;

  case 35:
#line 363 "parser.y"
                           {
		}
#line 1866 "parser.tab.c"
    break;

  case 36:
#line 367 "parser.y"
                         {
        if(champBuffer == NULL){
            champBuffer = initialisationBuffer();
        }
        
        champBuffer->tete = sauvegarderVariable(champBuffer, (yyvsp[-2].text), ENTIER, 0);
    }
#line 1878 "parser.tab.c"
    break;

  case 37:
#line 375 "parser.y"
                          {
        if(champBuffer == NULL)
            champBuffer = initialisationBuffer();
        
        champBuffer->tete = sauvegarderVariable(champBuffer, (yyvsp[-2].text), BOOLEEN, 0);
    }
#line 1889 "parser.tab.c"
    break;

  case 38:
#line 382 "parser.y"
                          {
        if(champBuffer == NULL)
            champBuffer = initialisationBuffer();
        
        champBuffer->tete = sauvegarderVariable(champBuffer, (yyvsp[-2].text), CARACTERE, 0);
    }
#line 1900 "parser.tab.c"
    break;

  case 39:
#line 389 "parser.y"
                                                          {
        if(champBuffer == NULL)
            champBuffer = initialisationBuffer();
        
        champBuffer->tete = sauvegarderVariable(champBuffer, (yyvsp[-5].text), TABLEAU, (yyvsp[-2].num));
    }
#line 1911 "parser.tab.c"
    break;

  case 40:
#line 396 "parser.y"
                                                           {
        if(champBuffer == NULL)
            champBuffer = initialisationBuffer();
        
        champBuffer->tete = sauvegarderVariable(champBuffer, (yyvsp[-5].text), TABLEAU, (yyvsp[-2].num));
    }
#line 1922 "parser.tab.c"
    break;

  case 41:
#line 403 "parser.y"
                                                           {
        if(champBuffer == NULL)
            champBuffer = initialisationBuffer();
        
        champBuffer->tete = sauvegarderVariable(champBuffer, (yyvsp[-5].text), TABLEAU, (yyvsp[-2].num));
    }
#line 1933 "parser.tab.c"
    break;

  case 42:
#line 410 "parser.y"
                                                               {
        if(champBuffer == NULL)
            champBuffer = initialisationBuffer();
        
        champBuffer->tete = sauvegarderVariable(champBuffer, (yyvsp[-5].text), TABLEAU, (yyvsp[-2].num));
    }
#line 1944 "parser.tab.c"
    break;

  case 43:
#line 417 "parser.y"
                              {
    }
#line 1951 "parser.tab.c"
    break;

  case 44:
#line 432 "parser.y"
                { 
        char numb[20];       
        sprintf(numb, "%ld", (yyvsp[0].num)); 
        //strcpy($$, numb);
         (yyval.text) = numb ;
        }
#line 1962 "parser.tab.c"
    break;

  case 45:
#line 439 "parser.y"
            { strcpy((yyval.text), (yyvsp[0].text));}
#line 1968 "parser.tab.c"
    break;

  case 46:
#line 441 "parser.y"
                 { strcpy((yyval.text), (yyvsp[0].text));}
#line 1974 "parser.tab.c"
    break;

  case 47:
#line 443 "parser.y"
                   { strcpy((yyval.text), (yyvsp[0].text));}
#line 1980 "parser.tab.c"
    break;

  case 48:
#line 445 "parser.y"
            { strcpy((yyval.text), (yyvsp[0].text));}
#line 1986 "parser.tab.c"
    break;

  case 49:
#line 447 "parser.y"
           { strcpy((yyval.text), (yyvsp[0].text));}
#line 1992 "parser.tab.c"
    break;

  case 50:
#line 449 "parser.y"
                                                      {
        char cp[20];
        strcpy(cp, (yyvsp[-1].text)); 
       (yyval.text) = cp ;
        }
#line 2002 "parser.tab.c"
    break;

  case 51:
#line 455 "parser.y"
                  {
        if ((yyvsp[0].varId) != NULL) {
            if ((yyvsp[0].varId)->type != ENTIER) {
                fprintf(stderr, "Erreur variable %s, son type est : %s, type attendu: ENTIER \n", (yyvsp[0].varId)->nom, typeOf((yyvsp[0].varId)->type) );
                exit(1);
            } 
            else {
               char no[20]=" ";
               strcpy(no, (yyvsp[0].varId)->nom);
              strcpy((yyval.text), no);
            }
        } else {
            fprintf(stderr, "symbol non définit");
            exit(1);
        }
            
    }
#line 2024 "parser.tab.c"
    break;

  case 52:
#line 474 "parser.y"
                                                              {
        strcpy(quad[ind][0],"+");
        
        char c1[20];
        strcpy(c1, (yyvsp[-2].text));        
        strcpy(quad[ind][1],c1);

        char c2[20];
        strcpy(c2, (yyvsp[0].text)); 
        strcpy(quad[ind][2],c2);

        char add[20] = "T_add";
        (yyval.text) = add;
        strcpy(quad[ind][3],add);       
        ind++;
        }
#line 2045 "parser.tab.c"
    break;

  case 53:
#line 491 "parser.y"
                                                                 {
        char mm[20] = "T_sous";
        (yyval.text)=mm;
        char cs1[20];
        strcpy(cs1, (yyvsp[-2].text)); 
        strcpy(quad[ind][0],"-");
        strcpy(quad[ind][1],cs1);  
        char cs2[20];
        strcpy(cs2, (yyvsp[0].text)); 
        strcpy(quad[ind][2],cs2);
        strcpy(quad[ind][3],mm);       
        ind++;
        }
#line 2063 "parser.tab.c"
    break;

  case 54:
#line 505 "parser.y"
                                                               {
        char mul[20] = "T_mult";
        (yyval.text)= mul;
        char cm1[20];
        strcpy(cm1, (yyvsp[-2].text)); 
        strcpy(quad[ind][0],"*");
        strcpy(quad[ind][1],cm1);
        char cm2[20];
        strcpy(cm2, (yyvsp[0].text)); 
        strcpy(quad[ind][2],cm2);
        strcpy(quad[ind][3],mul);       
        ind++;
        }
#line 2081 "parser.tab.c"
    break;

  case 55:
#line 519 "parser.y"
                                                                {
        char d[20] = "T_div";
        (yyval.text)=d;
        char c1[20];
     
        strcpy(c1, (yyvsp[-2].text)); 
        
        strcpy(quad[ind][0],"/");
        strcpy(quad[ind][1],c1);
       char c2[20];
        strcpy(c2, (yyvsp[0].text)); 
        strcpy(quad[ind][2],c2);
        strcpy(quad[ind][3],d);       
        ind++;
        }
#line 2101 "parser.tab.c"
    break;

  case 56:
#line 535 "parser.y"
                                                              { 
        char dol[20] = "T_mod";
        (yyval.text)=dol;
        char c1[20];
        strcpy(c1, (yyvsp[-2].text)); 
        strcpy(quad[ind][0],"%");
        strcpy(quad[ind][1],c1);
        char c2[20];
        strcpy(c2, (yyvsp[0].text)); 
        strcpy(quad[ind][2],c2);
        strcpy(quad[ind][3],dol);       
        ind++;
        }
#line 2119 "parser.tab.c"
    break;

  case 57:
#line 549 "parser.y"
                                                   {

}
#line 2127 "parser.tab.c"
    break;

  case 60:
#line 557 "parser.y"
                                                             {
                    
                }
#line 2135 "parser.tab.c"
    break;

  case 61:
#line 560 "parser.y"
                                                                                                             {

                }
#line 2143 "parser.tab.c"
    break;

  case 62:
#line 564 "parser.y"
                                                                               {

                }
#line 2151 "parser.tab.c"
    break;

  case 63:
#line 567 "parser.y"
                                                            {

                }
#line 2159 "parser.tab.c"
    break;

  case 64:
#line 570 "parser.y"
                                                                                  {
                    
                }
#line 2167 "parser.tab.c"
    break;

  case 65:
#line 575 "parser.y"
                  { 
        if ((yyvsp[0].varId) != NULL) {
            if ((yyvsp[0].varId)->type != BOOLEEN) {
                fprintf(stderr, "Erreur de type : %s, son type est : %s, type attendu: BOOLEEN \n", (yyvsp[0].varId)->nom, typeOf((yyvsp[0].varId)->type));
                exit(1);
            } 
            else {
             char exp[20];
             strcpy(exp, (yyvsp[0].varId)->nom);
             (yyval.text) = exp;
            }
        } else {
            fprintf(stderr, "symbol non définit");
            exit(1);
        }
    }
#line 2188 "parser.tab.c"
    break;

  case 66:
#line 591 "parser.y"
                  {//$$ = $1;
    }
#line 2195 "parser.tab.c"
    break;

  case 67:
#line 593 "parser.y"
                  {// $$=0;
    }
#line 2202 "parser.tab.c"
    break;

  case 68:
#line 595 "parser.y"
                  { //$$=1; 
    }
#line 2209 "parser.tab.c"
    break;

  case 69:
#line 597 "parser.y"
                                        { //$$=$2;
    }
#line 2216 "parser.tab.c"
    break;

  case 70:
#line 599 "parser.y"
                        {// $$=!$2;
    }
#line 2223 "parser.tab.c"
    break;

  case 71:
#line 601 "parser.y"
                                {// $$=($1)&&($3);
     }
#line 2230 "parser.tab.c"
    break;

  case 72:
#line 603 "parser.y"
                                {// $$=($1)||($3); 
    }
#line 2237 "parser.tab.c"
    break;

  case 73:
#line 607 "parser.y"
                                     {// $$=($1 == $3); 
    }
#line 2244 "parser.tab.c"
    break;

  case 74:
#line 609 "parser.y"
                                       {// $$=($1 != $3); 
    }
#line 2251 "parser.tab.c"
    break;

  case 75:
#line 611 "parser.y"
                                      {// $$=($1 > $3); 
    }
#line 2258 "parser.tab.c"
    break;

  case 76:
#line 613 "parser.y"
                                          {// $$=($1 >= $3); 
    }
#line 2265 "parser.tab.c"
    break;

  case 77:
#line 615 "parser.y"
                                      {// $$=($1 < $3); 
    }
#line 2272 "parser.tab.c"
    break;

  case 78:
#line 617 "parser.y"
                                          {// $$=($1 <= $3);
     }
#line 2279 "parser.tab.c"
    break;

  case 80:
#line 623 "parser.y"
                  {
    if ((yyvsp[0].varId) != NULL) {
        if ((yyvsp[0].varId)->type != ENTIER) {
            fprintf(stderr, "Erreur variable %s, son type est : %s, type attendu: ENTIER \n", (yyvsp[0].varId)->nom, typeOf((yyvsp[0].varId)->type) );
            exit(1);
        } 
        else {
            char nom[20];
               strcpy(nom, (yyvsp[0].varId)->nom);
          (yyval.num) = nom;
        }
    } else {
        fprintf(stderr, "symbol non définit");
        exit(1);
    }
    }
#line 2300 "parser.tab.c"
    break;


#line 2304 "parser.tab.c"

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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
                      yytoken, &yylval);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
#line 642 "parser.y"


int main(int argc , char** argv) {
    //initialisation des Tables des symboles et structures globales
    table = initialisation();
    tableStruct = initialisationTableStructures();
    
    ind =0 ;

    yyin= fopen (argv[1], "r");
    int result = yyparse();
    if(result == 0) {
        printf("\n********\n\t\tProgramme syntaxiquement correct\n********\n");
        AfficherTable(table->Entete_llc) ;
        afficher(quad,ind);
    }
   
}

void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
 }
