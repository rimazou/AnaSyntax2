/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30706

/* Bison version string.  */
#define YYBISON_VERSION "3.7.6"

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

bool erreurSyntax = false;
extern unsigned int linenbr;
extern bool erreurLexical;

extern FILE * yyin ;
int yylex(void);
void yyerror (char const *s);


#line 89 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TOKEN_MULTICOM = 3,             /* TOKEN_MULTICOM  */
  YYSYMBOL_TOKEN_COMMENT = 4,              /* TOKEN_COMMENT  */
  YYSYMBOL_TOKEN_CHAR = 5,                 /* TOKEN_CHAR  */
  YYSYMBOL_TOKEN_TEXT = 6,                 /* TOKEN_TEXT  */
  YYSYMBOL_TOKEN_NUMBER = 7,               /* TOKEN_NUMBER  */
  YYSYMBOL_TOKEN_FALSE = 8,                /* TOKEN_FALSE  */
  YYSYMBOL_TOKEN_TRUE = 9,                 /* TOKEN_TRUE  */
  YYSYMBOL_TOKEN_DECLARE = 10,             /* TOKEN_DECLARE  */
  YYSYMBOL_TOKEN_CONST = 11,               /* TOKEN_CONST  */
  YYSYMBOL_TOKEN_START = 12,               /* TOKEN_START  */
  YYSYMBOL_TOKEN_STOP = 13,                /* TOKEN_STOP  */
  YYSYMBOL_TOKEN_STRUCT = 14,              /* TOKEN_STRUCT  */
  YYSYMBOL_TOKEN_READ = 15,                /* TOKEN_READ  */
  YYSYMBOL_TOKEN_WRITE = 16,               /* TOKEN_WRITE  */
  YYSYMBOL_TOKEN_IF = 17,                  /* TOKEN_IF  */
  YYSYMBOL_TOKEN_ELSE = 18,                /* TOKEN_ELSE  */
  YYSYMBOL_TOKEN_FOR = 19,                 /* TOKEN_FOR  */
  YYSYMBOL_TOKEN_IN = 20,                  /* TOKEN_IN  */
  YYSYMBOL_TOKEN_FROM = 21,                /* TOKEN_FROM  */
  YYSYMBOL_TOKEN_WHILE = 22,               /* TOKEN_WHILE  */
  YYSYMBOL_TOKEN_ASSIGN = 23,              /* TOKEN_ASSIGN  */
  YYSYMBOL_NUM = 24,                       /* NUM  */
  YYSYMBOL_BOOL = 25,                      /* BOOL  */
  YYSYMBOL_CHAR = 26,                      /* CHAR  */
  YYSYMBOL_FININSTR = 27,                  /* FININSTR  */
  YYSYMBOL_ACCOLAD_G = 28,                 /* ACCOLAD_G  */
  YYSYMBOL_ACCOLAD_D = 29,                 /* ACCOLAD_D  */
  YYSYMBOL_TOKEN_BEGIN = 30,               /* TOKEN_BEGIN  */
  YYSYMBOL_END = 31,                       /* END  */
  YYSYMBOL_PARENTHESE_G = 32,              /* PARENTHESE_G  */
  YYSYMBOL_PARENTHESE_D = 33,              /* PARENTHESE_D  */
  YYSYMBOL_TOKEN_INF = 34,                 /* TOKEN_INF  */
  YYSYMBOL_TOKEN_SUP = 35,                 /* TOKEN_SUP  */
  YYSYMBOL_TOKEN_INFEGAL = 36,             /* TOKEN_INFEGAL  */
  YYSYMBOL_TOKEN_SUPEGAL = 37,             /* TOKEN_SUPEGAL  */
  YYSYMBOL_TOKEN_EGAL = 38,                /* TOKEN_EGAL  */
  YYSYMBOL_TOKEN_DIFF = 39,                /* TOKEN_DIFF  */
  YYSYMBOL_TOKEN_ADD = 40,                 /* TOKEN_ADD  */
  YYSYMBOL_TOKEN_SOUSTR = 41,              /* TOKEN_SOUSTR  */
  YYSYMBOL_TOKEN_MULT = 42,                /* TOKEN_MULT  */
  YYSYMBOL_TOKEN_DIVIS = 43,               /* TOKEN_DIVIS  */
  YYSYMBOL_TOKEN_MOD = 44,                 /* TOKEN_MOD  */
  YYSYMBOL_TOKEN_NOT = 45,                 /* TOKEN_NOT  */
  YYSYMBOL_TOKEN_AND = 46,                 /* TOKEN_AND  */
  YYSYMBOL_TOKEN_OR = 47,                  /* TOKEN_OR  */
  YYSYMBOL_TOKEN_COMMA = 48,               /* TOKEN_COMMA  */
  YYSYMBOL_TOKEN_ACSTRUCT = 49,            /* TOKEN_ACSTRUCT  */
  YYSYMBOL_TOKEN_ID = 50,                  /* TOKEN_ID  */
  YYSYMBOL_TOKEN_FININPUT = 51,            /* TOKEN_FININPUT  */
  YYSYMBOL_CROCHET_G = 52,                 /* CROCHET_G  */
  YYSYMBOL_CROCHET_D = 53,                 /* CROCHET_D  */
  YYSYMBOL_YYACCEPT = 54,                  /* $accept  */
  YYSYMBOL_program = 55,                   /* program  */
  YYSYMBOL_bloc_code = 56,                 /* bloc_code  */
  YYSYMBOL_bloc_declaration = 57,          /* bloc_declaration  */
  YYSYMBOL_instruction = 58,               /* instruction  */
  YYSYMBOL_affectation = 59,               /* affectation  */
  YYSYMBOL_variable_name = 60,             /* variable_name  */
  YYSYMBOL_DECLARE = 61,                   /* DECLARE  */
  YYSYMBOL_LISTE = 62,                     /* LISTE  */
  YYSYMBOL_CHAMP = 63,                     /* CHAMP  */
  YYSYMBOL_expression = 64,                /* expression  */
  YYSYMBOL_expression_arithmetique = 65,   /* expression_arithmetique  */
  YYSYMBOL_addition = 66,                  /* addition  */
  YYSYMBOL_soustraction = 67,              /* soustraction  */
  YYSYMBOL_multiplication = 68,            /* multiplication  */
  YYSYMBOL_division = 69,                  /* division  */
  YYSYMBOL_modulo = 70,                    /* modulo  */
  YYSYMBOL_ecriture = 71,                  /* ecriture  */
  YYSYMBOL_lecture = 72,                   /* lecture  */
  YYSYMBOL_while = 73,                     /* while  */
  YYSYMBOL_for = 74,                       /* for  */
  YYSYMBOL_conditionnel = 75,              /* conditionnel  */
  YYSYMBOL_ExpBool = 76,                   /* ExpBool  */
  YYSYMBOL_Comparaison = 77,               /* Comparaison  */
  YYSYMBOL_comparable = 78                 /* comparable  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYLAST   253

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   308


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
       0,   125,   125,   127,   127,   127,   130,   130,   132,   137,
     142,   147,   151,   156,   160,   168,   172,   177,   182,   187,
     195,   203,   211,   216,   221,   226,   231,   235,   239,   243,
     247,   251,   255,   258,   260,   263,   265,   267,   269,   271,
     273,   275,   277,   279,   284,   288,   299,   302,   305,   308,
     311,   314,   320,   326,   332,   338,   344,   350,   353,   356,
     359,   362,   366,   369,   372,   377,   378,   380,   382,   384,
     386,   388,   390,   394,   395,   396,   397,   398,   399,   402,
     402
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TOKEN_MULTICOM",
  "TOKEN_COMMENT", "TOKEN_CHAR", "TOKEN_TEXT", "TOKEN_NUMBER",
  "TOKEN_FALSE", "TOKEN_TRUE", "TOKEN_DECLARE", "TOKEN_CONST",
  "TOKEN_START", "TOKEN_STOP", "TOKEN_STRUCT", "TOKEN_READ", "TOKEN_WRITE",
  "TOKEN_IF", "TOKEN_ELSE", "TOKEN_FOR", "TOKEN_IN", "TOKEN_FROM",
  "TOKEN_WHILE", "TOKEN_ASSIGN", "NUM", "BOOL", "CHAR", "FININSTR",
  "ACCOLAD_G", "ACCOLAD_D", "TOKEN_BEGIN", "END", "PARENTHESE_G",
  "PARENTHESE_D", "TOKEN_INF", "TOKEN_SUP", "TOKEN_INFEGAL",
  "TOKEN_SUPEGAL", "TOKEN_EGAL", "TOKEN_DIFF", "TOKEN_ADD", "TOKEN_SOUSTR",
  "TOKEN_MULT", "TOKEN_DIVIS", "TOKEN_MOD", "TOKEN_NOT", "TOKEN_AND",
  "TOKEN_OR", "TOKEN_COMMA", "TOKEN_ACSTRUCT", "TOKEN_ID",
  "TOKEN_FININPUT", "CROCHET_G", "CROCHET_D", "$accept", "program",
  "bloc_code", "bloc_declaration", "instruction", "affectation",
  "variable_name", "DECLARE", "LISTE", "CHAMP", "expression",
  "expression_arithmetique", "addition", "soustraction", "multiplication",
  "division", "modulo", "ecriture", "lecture", "while", "for",
  "conditionnel", "ExpBool", "Comparaison", "comparable", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
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
#endif

#define YYPACT_NINF (-67)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-80)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      29,     1,    33,     7,     9,    83,    36,     1,   -67,   169,
      13,   -16,   -14,    -9,    -5,     4,   -67,    58,    65,    76,
      78,    84,   -67,   -67,   113,   -67,   121,   -67,   136,   -67,
     138,    71,   104,     3,   106,   109,   106,   -12,   148,    71,
     -67,   139,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,    62,   118,   119,   158,   159,   -67,   186,   187,
     188,   -67,   -67,   -67,   106,   106,   117,    53,   -67,   151,
     132,   111,   167,    17,   -67,   -67,    23,   189,    98,   -67,
     191,   192,   193,   194,   -67,   -67,   -67,    93,   -67,    79,
     106,   106,    -6,    -6,    -6,    -6,    -6,    -6,   172,   216,
     115,   -67,   -67,    17,   126,   -67,   -67,   -67,   -67,   -67,
     197,   157,   110,   198,   163,    89,   -67,    -2,     0,    52,
      54,   -67,   -67,   -67,   -67,   -67,    11,   -67,   180,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   199,   179,   200,   140,
      17,    17,    17,    17,    17,   -67,   -67,   -67,   -67,   221,
     -67,   223,   -67,   225,   -67,   226,   115,   -67,   115,   227,
     -67,   -67,   166,   166,   195,   195,   195,   182,   183,   184,
     185,   209,   210,   212,   217,   218,   219,   220,   -67,   -67,
     115,   -67,   -67,   -67,   -67,   222,   -67
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     7,     0,     0,     0,     0,     0,     7,     1,     0,
       0,     0,     0,     0,     0,     0,     6,     0,     0,     0,
       0,     0,    33,    19,     0,    20,     0,    21,     0,    31,
       0,     0,     0,     0,     0,     0,     0,    16,     0,     0,
       8,     0,    10,     9,    12,    13,    11,    25,    26,    22,
      24,    23,     0,     0,     0,     0,     0,     5,     0,     0,
       0,    79,    67,    68,     0,     0,    80,     0,    66,     0,
       0,     0,     0,     0,     2,     3,     0,     0,     0,    34,
       0,     0,     0,     0,    59,    58,    57,     0,    70,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,    45,     0,     0,    46,    47,    48,    49,    50,
       0,    45,     0,     0,    43,    44,    32,     0,     0,     0,
       0,    27,    28,    29,    30,    69,     0,    71,    72,    80,
      77,    75,    78,    76,    73,    74,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    17,    15,    14,    35,     0,
      36,     0,    37,     0,    42,     0,     0,    63,     0,     0,
      60,    51,    52,    53,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    64,    62,
       0,    38,    39,    40,    41,     0,    61
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -67,   -67,   -31,   236,   -67,   -67,   -30,   -67,   -67,   -67,
     -67,   -66,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -20,   -67,   105
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    38,     6,    39,    40,    41,     7,    52,    79,
     113,   139,   105,   106,   107,   108,   109,    42,    43,    44,
      45,    46,    87,    68,    69
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      57,    61,    58,    60,    66,    31,    66,   104,    75,    59,
     114,    23,     3,    25,    67,     4,    71,    -4,    27,    32,
      33,    34,    29,    35,   102,   148,    36,   150,   110,   156,
     111,    62,    63,     8,    66,    66,    24,    72,    26,     1,
      73,    22,   157,    28,    37,    88,    66,    30,    15,   103,
     149,     5,   151,    37,    37,   112,   115,     9,   126,    10,
      66,    66,   129,   129,   129,   129,   129,   129,    65,   138,
     127,   128,    31,    37,   162,   163,   164,   165,   166,   152,
      31,   154,    66,    89,    -4,    47,    32,    33,    34,    -4,
      35,    77,    48,    36,    32,    33,    34,    -4,    35,    90,
      91,    36,    -4,    49,   153,    50,   155,    11,    12,    13,
      -4,    51,    78,    61,    62,    63,    31,   111,    62,    63,
      53,    37,   117,   118,   119,   171,   125,   172,    54,    37,
      32,    33,    34,    14,    35,    90,    91,    36,    64,    90,
      91,   100,   112,    55,   -65,    56,    -4,   -65,   120,   185,
     -65,    65,    98,    99,    37,    65,    37,    90,    91,    70,
      37,    74,    76,   -65,   -65,    37,   140,   141,   142,   143,
     144,    80,    81,   161,    17,    18,    19,    20,    21,   145,
     140,   141,   142,   143,   144,    92,    93,    94,    95,    96,
      97,   -79,   -79,   -79,   -79,   -79,   -79,   130,   131,   132,
     133,   134,   135,   140,   141,   142,   143,   144,   142,   143,
     144,    82,    83,    84,    85,    86,   116,   101,   121,   122,
     123,   124,   136,   137,   146,   147,    90,   159,   167,   158,
     168,   160,   169,   170,   173,   174,   175,   176,   177,   144,
     178,   179,   180,    16,   181,   182,   183,   184,     0,     0,
       0,     0,     0,   186
};

static const yytype_int16 yycheck[] =
{
      31,     7,    32,    33,    34,     1,    36,    73,    39,     6,
      76,    27,    11,    27,    34,    14,    36,    13,    27,    15,
      16,    17,    27,    19,     7,    27,    22,    27,     5,    18,
       7,     8,     9,     0,    64,    65,    52,    49,    52,    10,
      52,    28,    31,    52,    50,    65,    76,    52,    12,    32,
      52,    50,    52,    50,    50,    32,    76,    50,    89,    50,
      90,    91,    92,    93,    94,    95,    96,    97,    45,   100,
      90,    91,     1,    50,   140,   141,   142,   143,   144,    27,
       1,    27,   112,    30,    13,    27,    15,    16,    17,    18,
      19,    29,    27,    22,    15,    16,    17,    18,    19,    46,
      47,    22,    31,    27,    52,    27,    52,    24,    25,    26,
      31,    27,    50,     7,     8,     9,     1,     7,     8,     9,
       7,    50,    24,    25,    26,   156,    33,   158,     7,    50,
      15,    16,    17,    50,    19,    46,    47,    22,    32,    46,
      47,    30,    32,     7,    27,     7,    31,    30,    50,   180,
      33,    45,    20,    21,    50,    45,    50,    46,    47,    50,
      50,    13,    23,    46,    47,    50,    40,    41,    42,    43,
      44,    53,    53,    33,     5,     6,     7,     8,     9,    53,
      40,    41,    42,    43,    44,    34,    35,    36,    37,    38,
      39,    34,    35,    36,    37,    38,    39,    92,    93,    94,
      95,    96,    97,    40,    41,    42,    43,    44,    42,    43,
      44,    53,    53,    27,    27,    27,    27,    50,    27,    27,
      27,    27,    50,     7,    27,    27,    46,    48,     7,    30,
       7,    31,     7,     7,     7,    53,    53,    53,    53,    44,
      31,    31,    30,     7,    27,    27,    27,    27,    -1,    -1,
      -1,    -1,    -1,    31
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    55,    11,    14,    50,    57,    61,     0,    50,
      50,    24,    25,    26,    50,    12,    57,     5,     6,     7,
       8,     9,    28,    27,    52,    27,    52,    27,    52,    27,
      52,     1,    15,    16,    17,    19,    22,    50,    56,    58,
      59,    60,    71,    72,    73,    74,    75,    27,    27,    27,
      27,    27,    62,     7,     7,     7,     7,    56,    60,     6,
      60,     7,     8,     9,    32,    45,    60,    76,    77,    78,
      50,    76,    49,    52,    13,    56,    23,    29,    50,    63,
      53,    53,    53,    53,    27,    27,    27,    76,    76,    30,
      46,    47,    34,    35,    36,    37,    38,    39,    20,    21,
      30,    50,     7,    32,    65,    66,    67,    68,    69,    70,
       5,     7,    32,    64,    65,    76,    27,    24,    25,    26,
      50,    27,    27,    27,    27,    33,    56,    76,    76,    60,
      78,    78,    78,    78,    78,    78,    50,     7,    56,    65,
      40,    41,    42,    43,    44,    53,    27,    27,    27,    52,
      27,    52,    27,    52,    27,    52,    18,    31,    30,    48,
      31,    33,    65,    65,    65,    65,    65,     7,     7,     7,
       7,    56,    56,     7,    53,    53,    53,    53,    31,    31,
      30,    27,    27,    27,    27,    56,    31
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    56,    56,    57,    57,    58,    58,
      58,    58,    58,    58,    59,    59,    60,    60,    60,    61,
      61,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    61,    62,    62,    63,    63,    63,    63,    63,
      63,    63,    63,    64,    64,    65,    65,    65,    65,    65,
      65,    65,    66,    67,    68,    69,    70,    71,    71,    72,
      73,    74,    74,    75,    75,    76,    76,    76,    76,    76,
      76,    76,    76,    77,    77,    77,    77,    77,    77,    78,
      78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     2,     0,     2,     2,     0,     1,     1,
       1,     1,     1,     1,     4,     4,     1,     4,     3,     3,
       3,     3,     4,     4,     4,     4,     4,     6,     6,     6,
       6,     3,     6,     0,     2,     3,     3,     3,     6,     6,
       6,     6,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       5,     9,     7,     5,     7,     1,     1,     1,     1,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 5: /* bloc_code: error bloc_code  */
#line 127 "parser.y"
                                                                  {printf("erreur syntaxique a la ligne %d",linenbr);erreurSyntax=true;}
#line 1304 "parser.tab.c"
    break;

  case 8: /* instruction: affectation  */
#line 132 "parser.y"
                           {
			printf("\tInstruction Affectation\n");

                }
#line 1313 "parser.tab.c"
    break;

  case 9: /* instruction: lecture  */
#line 137 "parser.y"
                       {
			printf("\tInstruction Lecture\n");

                }
#line 1322 "parser.tab.c"
    break;

  case 10: /* instruction: ecriture  */
#line 142 "parser.y"
                        {
			printf("\tInstruction ecriture\n");

                }
#line 1331 "parser.tab.c"
    break;

  case 11: /* instruction: conditionnel  */
#line 147 "parser.y"
                            {
                    printf(" instruction conditionnel\n");
                }
#line 1339 "parser.tab.c"
    break;

  case 12: /* instruction: while  */
#line 151 "parser.y"
                     {
                    printf("Boucle Tant que\n");
                    
                }
#line 1348 "parser.tab.c"
    break;

  case 13: /* instruction: for  */
#line 156 "parser.y"
                   {
                    printf("Boucle Pour\n");
                    
                }
#line 1357 "parser.tab.c"
    break;

  case 14: /* affectation: variable_name TOKEN_ASSIGN expression FININSTR  */
#line 160 "parser.y"
                                                            {
                        /* $1 est la valeur du premier non terminal. Ici c'est la valeur du non terminal variable. 				$3 est la valeur du 2nd non terminal. */
                        printf("\t\tAffectation sur la variable \n");
                        Identifiant* p = rechercherVar(table, (yyvsp[-3].text));
                        if(p != NULL) {
                            printf("test: %s\n", p->nom);
                        }
                }
#line 1370 "parser.tab.c"
    break;

  case 16: /* variable_name: TOKEN_ID  */
#line 172 "parser.y"
                {
                       // $$=$1;
                        (yyval.text)=strdup((yyvsp[0].text));
                }
#line 1379 "parser.tab.c"
    break;

  case 17: /* variable_name: TOKEN_ID CROCHET_G expression_arithmetique CROCHET_D  */
#line 177 "parser.y"
                                                                    {
			printf("Acces a lelement  du tableau \n");
			//$$=strdup($1[$3]);	
		}
#line 1388 "parser.tab.c"
    break;

  case 18: /* variable_name: TOKEN_ID TOKEN_ACSTRUCT TOKEN_ID  */
#line 182 "parser.y"
                                                {
			printf("Acces au champss de la structure \n");
			//$$=strdup($1.$3);	
		}
#line 1397 "parser.tab.c"
    break;

  case 19: /* DECLARE: TOKEN_ID NUM FININSTR  */
#line 187 "parser.y"
                                     {
    Identifiant* p;
    p=declarerVar ((yyvsp[-2].text),ENTIER, PRIMITIF);
    p->suivant = table->Entete_llc;
             table->Entete_llc = p;
			printf("Declaration dun entier\n");
		}
#line 1409 "parser.tab.c"
    break;

  case 20: /* DECLARE: TOKEN_ID BOOL FININSTR  */
#line 195 "parser.y"
                                      {
          Identifiant* p;
    p=declarerVar ((yyvsp[-2].text),BOOLEEN, PRIMITIF);
    p->suivant = table->Entete_llc;
             table->Entete_llc = p;
			printf("Declaration dun booleen\n");
		}
#line 1421 "parser.tab.c"
    break;

  case 21: /* DECLARE: TOKEN_ID CHAR FININSTR  */
#line 203 "parser.y"
                                      {
           Identifiant* p;
             p=declarerVar ((yyvsp[-2].text),CARACTERE, PRIMITIF);
             p->suivant = table->Entete_llc;
             table->Entete_llc = p;
			printf("Declaration dun caractere\n");
		}
#line 1433 "parser.tab.c"
    break;

  case 22: /* DECLARE: TOKEN_CONST TOKEN_ID TOKEN_NUMBER FININSTR  */
#line 211 "parser.y"
                                                          {
             
			printf("Declaration dune constante de type entier\n");
		}
#line 1442 "parser.tab.c"
    break;

  case 23: /* DECLARE: TOKEN_CONST TOKEN_ID TOKEN_TRUE FININSTR  */
#line 216 "parser.y"
                                                        {
              
			printf("Declaration dune constante de type booleen\n");
		}
#line 1451 "parser.tab.c"
    break;

  case 24: /* DECLARE: TOKEN_CONST TOKEN_ID TOKEN_FALSE FININSTR  */
#line 221 "parser.y"
                                                         {
             
			printf("Declaration dune constante de type booleen\n");
		}
#line 1460 "parser.tab.c"
    break;

  case 25: /* DECLARE: TOKEN_CONST TOKEN_ID TOKEN_CHAR FININSTR  */
#line 226 "parser.y"
                                                        {
              
			printf("Declaration dune constante de type caractere\n");
		}
#line 1469 "parser.tab.c"
    break;

  case 26: /* DECLARE: TOKEN_CONST TOKEN_ID TOKEN_TEXT FININSTR  */
#line 231 "parser.y"
                                                {
			printf("Declaration dune constante de type texte \n");
		}
#line 1477 "parser.tab.c"
    break;

  case 27: /* DECLARE: TOKEN_ID NUM CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR  */
#line 235 "parser.y"
                                                                      {
			printf("Declaration dun tableau de type entier et de taille %d\n",(yyvsp[-2].num));
		}
#line 1485 "parser.tab.c"
    break;

  case 28: /* DECLARE: TOKEN_ID BOOL CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR  */
#line 239 "parser.y"
                                                                       {
			printf("Declaration dun tableau de type booleen et de taille %d\n",(yyvsp[-2].num));
		}
#line 1493 "parser.tab.c"
    break;

  case 29: /* DECLARE: TOKEN_ID CHAR CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR  */
#line 243 "parser.y"
                                                                       {
			printf("Declaration dun tableau de type caractere et de taille %d\n",(yyvsp[-2].num));
		}
#line 1501 "parser.tab.c"
    break;

  case 30: /* DECLARE: TOKEN_ID TOKEN_ID CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR  */
#line 247 "parser.y"
                                                                           {
			printf("Declaration dun tableau de type structure %s et de taille %d\n",(yyvsp[-4].text),(yyvsp[-2].num));
		}
#line 1509 "parser.tab.c"
    break;

  case 31: /* DECLARE: TOKEN_ID TOKEN_ID FININSTR  */
#line 251 "parser.y"
                                          {
			printf("Declaration dune structure");
		}
#line 1517 "parser.tab.c"
    break;

  case 32: /* DECLARE: TOKEN_STRUCT TOKEN_ID ACCOLAD_G LISTE ACCOLAD_D FININSTR  */
#line 255 "parser.y"
                                                                        {
			printf("Creation dune structure");
		}
#line 1525 "parser.tab.c"
    break;

  case 33: /* LISTE: %empty  */
#line 258 "parser.y"
                      {}
#line 1531 "parser.tab.c"
    break;

  case 34: /* LISTE: LISTE CHAMP  */
#line 260 "parser.y"
                           {
		}
#line 1538 "parser.tab.c"
    break;

  case 35: /* CHAMP: TOKEN_ID NUM FININSTR  */
#line 263 "parser.y"
                                     {}
#line 1544 "parser.tab.c"
    break;

  case 36: /* CHAMP: TOKEN_ID BOOL FININSTR  */
#line 265 "parser.y"
                                      {}
#line 1550 "parser.tab.c"
    break;

  case 37: /* CHAMP: TOKEN_ID CHAR FININSTR  */
#line 267 "parser.y"
                                      {}
#line 1556 "parser.tab.c"
    break;

  case 38: /* CHAMP: TOKEN_ID NUM CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR  */
#line 269 "parser.y"
                                                                      {}
#line 1562 "parser.tab.c"
    break;

  case 39: /* CHAMP: TOKEN_ID BOOL CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR  */
#line 271 "parser.y"
                                                                       {}
#line 1568 "parser.tab.c"
    break;

  case 40: /* CHAMP: TOKEN_ID CHAR CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR  */
#line 273 "parser.y"
                                                                       {}
#line 1574 "parser.tab.c"
    break;

  case 41: /* CHAMP: TOKEN_ID TOKEN_ID CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR  */
#line 275 "parser.y"
                                                                   {}
#line 1580 "parser.tab.c"
    break;

  case 42: /* CHAMP: TOKEN_ID TOKEN_ID FININSTR  */
#line 277 "parser.y"
                                          {}
#line 1586 "parser.tab.c"
    break;

  case 43: /* expression: expression_arithmetique  */
#line 279 "parser.y"
                                       {

		
		}
#line 1595 "parser.tab.c"
    break;

  case 44: /* expression: ExpBool  */
#line 284 "parser.y"
                       {
		
		}
#line 1603 "parser.tab.c"
    break;

  case 45: /* expression_arithmetique: TOKEN_NUMBER  */
#line 288 "parser.y"
                                     {
                                        //printf("\t\t\tNombre : %ld\n",$1);
 /* Comme le token TOK_NOMBRE est de type entier et que on a type expression_arithmetique comme du texte, il nous faut convertir la valeur en texte. */
                                      /*  int length=snprintf(NULL,0,"%ld",$1);
                                        char* str=malloc(length+1);
                                        snprintf(str,length+1,"%ld",$1);*/
                                        //$$=strdup(str);
                                        (yyval.num)=(yyvsp[0].num);
                                       // free(str);
                                }
#line 1618 "parser.tab.c"
    break;

  case 46: /* expression_arithmetique: addition  */
#line 299 "parser.y"
                                        {
                                }
#line 1625 "parser.tab.c"
    break;

  case 47: /* expression_arithmetique: soustraction  */
#line 302 "parser.y"
                                            {
                                }
#line 1632 "parser.tab.c"
    break;

  case 48: /* expression_arithmetique: multiplication  */
#line 305 "parser.y"
                                              {
                                }
#line 1639 "parser.tab.c"
    break;

  case 49: /* expression_arithmetique: division  */
#line 308 "parser.y"
                                        {
                                }
#line 1646 "parser.tab.c"
    break;

  case 50: /* expression_arithmetique: modulo  */
#line 311 "parser.y"
                                      {
                                }
#line 1653 "parser.tab.c"
    break;

  case 51: /* expression_arithmetique: PARENTHESE_G expression_arithmetique PARENTHESE_D  */
#line 314 "parser.y"
                                                                                 {
                                       // printf("\t\t\tCest une expression artihmetique entre parentheses\n");
                                        //$$=strcat(strcat(strdup("("),strdup($2)),strdup(")"));
                                        (yyval.num)=(yyvsp[-1].num);
                                }
#line 1663 "parser.tab.c"
    break;

  case 52: /* addition: expression_arithmetique TOKEN_ADD expression_arithmetique  */
#line 320 "parser.y"
                                                             {
        //printf("\t\t\tAddition\n");
        //$$=strcat(strcat(strdup($1),strdup("+")),strdup($3));
        (yyval.num)=(yyvsp[-2].num)+(yyvsp[0].num);
    }
#line 1673 "parser.tab.c"
    break;

  case 53: /* soustraction: expression_arithmetique TOKEN_SOUSTR expression_arithmetique  */
#line 326 "parser.y"
                                                                {
       // printf("\t\t\tSoustraction\n");
        //$$=strcat(strcat(strdup($1),strdup("-")),strdup($3));
        (yyval.num)=(yyvsp[-2].num)-(yyvsp[0].num);
    }
#line 1683 "parser.tab.c"
    break;

  case 54: /* multiplication: expression_arithmetique TOKEN_MULT expression_arithmetique  */
#line 332 "parser.y"
                                                              {
        //printf("\t\t\tMultiplication\n");
        //$$=strcat(strcat(strdup($1),strdup("*")),strdup($3));
        (yyval.num)=(yyvsp[-2].num)*(yyvsp[0].num);
    }
#line 1693 "parser.tab.c"
    break;

  case 55: /* division: expression_arithmetique TOKEN_DIVIS expression_arithmetique  */
#line 338 "parser.y"
                                                               {
       // printf("\t\t\tDivision\n");
        //$$=strcat(strcat(strdup($1),strdup("/")),strdup($3));
        (yyval.num)=(yyvsp[-2].num)/(yyvsp[0].num);
    }
#line 1703 "parser.tab.c"
    break;

  case 56: /* modulo: expression_arithmetique TOKEN_MOD expression_arithmetique  */
#line 344 "parser.y"
                                                             {
        printf("\t\t\tModulo\n");
        //$$=strcat(strcat(strdup($1),strdup("%")),strdup($3));
        (yyval.num)=(yyvsp[-2].num)%(yyvsp[0].num);
    }
#line 1713 "parser.tab.c"
    break;

  case 57: /* ecriture: TOKEN_WRITE variable_name FININSTR  */
#line 350 "parser.y"
                                                  {
	//	printf("ecriture");
		}
#line 1721 "parser.tab.c"
    break;

  case 58: /* ecriture: TOKEN_WRITE TOKEN_TEXT FININSTR  */
#line 353 "parser.y"
                                         {}
#line 1727 "parser.tab.c"
    break;

  case 59: /* lecture: TOKEN_READ variable_name FININSTR  */
#line 356 "parser.y"
                                                 {
	//	printf("lecture");
		}
#line 1735 "parser.tab.c"
    break;

  case 60: /* while: TOKEN_WHILE ExpBool TOKEN_BEGIN bloc_code END  */
#line 359 "parser.y"
                                                             {
                    
                }
#line 1743 "parser.tab.c"
    break;

  case 61: /* for: TOKEN_FOR TOKEN_ID TOKEN_FROM TOKEN_NUMBER TOKEN_COMMA TOKEN_NUMBER TOKEN_BEGIN bloc_code END  */
#line 362 "parser.y"
                                                                                                             {

                }
#line 1751 "parser.tab.c"
    break;

  case 62: /* for: TOKEN_FOR TOKEN_ID TOKEN_IN TOKEN_ID TOKEN_BEGIN bloc_code END  */
#line 366 "parser.y"
                                                                               {

                }
#line 1759 "parser.tab.c"
    break;

  case 63: /* conditionnel: TOKEN_IF ExpBool TOKEN_BEGIN bloc_code END  */
#line 369 "parser.y"
                                                            {

                }
#line 1767 "parser.tab.c"
    break;

  case 64: /* conditionnel: TOKEN_IF ExpBool TOKEN_BEGIN bloc_code TOKEN_ELSE bloc_code END  */
#line 372 "parser.y"
                                                                                  {
                    
                }
#line 1775 "parser.tab.c"
    break;

  case 65: /* ExpBool: variable_name  */
#line 377 "parser.y"
                               {  }
#line 1781 "parser.tab.c"
    break;

  case 66: /* ExpBool: Comparaison  */
#line 378 "parser.y"
                              {//$$ = $1;
                }
#line 1788 "parser.tab.c"
    break;

  case 67: /* ExpBool: TOKEN_FALSE  */
#line 380 "parser.y"
                              { //$$=0; 
                }
#line 1795 "parser.tab.c"
    break;

  case 68: /* ExpBool: TOKEN_TRUE  */
#line 382 "parser.y"
                              { //$$=1; 
                }
#line 1802 "parser.tab.c"
    break;

  case 69: /* ExpBool: PARENTHESE_G ExpBool PARENTHESE_D  */
#line 384 "parser.y"
                                                    {// $$=$2;
                 }
#line 1809 "parser.tab.c"
    break;

  case 70: /* ExpBool: TOKEN_NOT ExpBool  */
#line 386 "parser.y"
                                    { //$$=!$2; 
                }
#line 1816 "parser.tab.c"
    break;

  case 71: /* ExpBool: ExpBool TOKEN_AND ExpBool  */
#line 388 "parser.y"
                                            { //$$=($1)&&($3); 
                }
#line 1823 "parser.tab.c"
    break;

  case 72: /* ExpBool: ExpBool TOKEN_OR ExpBool  */
#line 390 "parser.y"
                                            { //$$=($1)||($3); 
                }
#line 1830 "parser.tab.c"
    break;

  case 73: /* Comparaison: comparable TOKEN_EGAL comparable  */
#line 394 "parser.y"
                                                  { (yyval.BOOLEAN)=((yyvsp[-2].num) == (yyvsp[0].num)); }
#line 1836 "parser.tab.c"
    break;

  case 74: /* Comparaison: comparable TOKEN_DIFF comparable  */
#line 395 "parser.y"
                                                   { (yyval.BOOLEAN)=((yyvsp[-2].num) != (yyvsp[0].num)); }
#line 1842 "parser.tab.c"
    break;

  case 75: /* Comparaison: comparable TOKEN_SUP comparable  */
#line 396 "parser.y"
                                                  { (yyval.BOOLEAN)=((yyvsp[-2].num) > (yyvsp[0].num)); }
#line 1848 "parser.tab.c"
    break;

  case 76: /* Comparaison: comparable TOKEN_SUPEGAL comparable  */
#line 397 "parser.y"
                                                      { (yyval.BOOLEAN)=((yyvsp[-2].num) >= (yyvsp[0].num)); }
#line 1854 "parser.tab.c"
    break;

  case 77: /* Comparaison: comparable TOKEN_INF comparable  */
#line 398 "parser.y"
                                                  { (yyval.BOOLEAN)=((yyvsp[-2].num) < (yyvsp[0].num)); }
#line 1860 "parser.tab.c"
    break;

  case 78: /* Comparaison: comparable TOKEN_INFEGAL comparable  */
#line 399 "parser.y"
                                                      { (yyval.BOOLEAN)=((yyvsp[-2].num) <= (yyvsp[0].num)); }
#line 1866 "parser.tab.c"
    break;


#line 1870 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 406 "parser.y"


int main(int argc , char** argv) {
    table = initialisation();

    yyin= fopen (argv[1], "r");
    int result = yyparse();
    if(result == 0) {
        printf("\n********\n\t\tProgramme syntaxiquement correct\n********\n");
        AfficherTable(table->Entete_llc) ;
    }
    
}

void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
 }
