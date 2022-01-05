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

//bool erreurSyntax = false;
extern unsigned int linenbr;
extern bool erreurLexical;

int yylex(void);
void yyerror (char const *s);


#line 84 "parser.tab.c"

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
  YYSYMBOL_commentaire = 58,               /* commentaire  */
  YYSYMBOL_instruction = 59,               /* instruction  */
  YYSYMBOL_affectation = 60,               /* affectation  */
  YYSYMBOL_variable = 61,                  /* variable  */
  YYSYMBOL_DECLARE = 62,                   /* DECLARE  */
  YYSYMBOL_LISTE = 63,                     /* LISTE  */
  YYSYMBOL_CHAMP = 64,                     /* CHAMP  */
  YYSYMBOL_expression = 65,                /* expression  */
  YYSYMBOL_expression_arithmetique = 66,   /* expression_arithmetique  */
  YYSYMBOL_addition = 67,                  /* addition  */
  YYSYMBOL_soustraction = 68,              /* soustraction  */
  YYSYMBOL_multiplication = 69,            /* multiplication  */
  YYSYMBOL_division = 70,                  /* division  */
  YYSYMBOL_modulo = 71,                    /* modulo  */
  YYSYMBOL_ecriture = 72,                  /* ecriture  */
  YYSYMBOL_lecture = 73,                   /* lecture  */
  YYSYMBOL_while = 74,                     /* while  */
  YYSYMBOL_for = 75,                       /* for  */
  YYSYMBOL_conditionnel = 76,              /* conditionnel  */
  YYSYMBOL_expression_booleenne = 77,      /* expression_booleenne  */
  YYSYMBOL_ExpBool = 78,                   /* ExpBool  */
  YYSYMBOL_Comparaison = 79,               /* Comparaison  */
  YYSYMBOL_comparable = 80                 /* comparable  */
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
#define YYFINAL  25
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   241

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  54
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  87
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  188

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
       0,   122,   122,   124,   124,   124,   124,   127,   127,   127,
     127,   127,   128,   132,   136,   141,   145,   149,   153,   158,
     162,   168,   173,   181,   186,   191,   195,   199,   203,   207,
     211,   215,   219,   223,   227,   231,   235,   239,   242,   244,
     247,   249,   251,   253,   255,   257,   259,   261,   266,   270,
     281,   284,   287,   290,   293,   296,   299,   305,   311,   317,
     323,   329,   335,   339,   342,   345,   349,   352,   355,   358,
     362,   366,   371,   378,   379,   380,   381,   382,   383,   384,
     385,   388,   389,   390,   391,   392,   393,   396
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
  "bloc_code", "bloc_declaration", "commentaire", "instruction",
  "affectation", "variable", "DECLARE", "LISTE", "CHAMP", "expression",
  "expression_arithmetique", "addition", "soustraction", "multiplication",
  "division", "modulo", "ecriture", "lecture", "while", "for",
  "conditionnel", "expression_booleenne", "ExpBool", "Comparaison",
  "comparable", YY_NULLPTR
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

#define YYPACT_NINF (-61)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-88)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,    34,    14,   -61,   -61,   -61,   -29,   -10,     7,     7,
       2,    16,    10,    94,    81,    34,   -61,   -61,   116,    34,
     -61,   -61,   -61,   -61,   -61,   -61,   160,    76,    48,   115,
     118,   -61,   -61,   -61,     2,     2,   -61,    24,   -61,   125,
     117,    68,   104,   122,   143,   145,   -19,     9,    17,   120,
      46,   188,    91,   -61,    67,   -61,   169,   170,   171,   172,
     -61,   -61,   -61,   102,   143,    91,     2,     2,   193,   193,
     193,   193,   193,   193,   151,   195,    91,   -61,   196,   -61,
     197,   -61,   198,   -61,   -61,   199,   154,   200,    91,    91,
     138,   121,   147,   181,   144,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -25,   -61,     4,   143,   143,
     -61,   -61,   -61,   -61,   -61,   -61,   179,   162,   180,   159,
     161,   163,   164,   -61,   -61,   -61,   -61,   114,   -61,    36,
      36,    36,    36,    36,   191,    77,   -61,    91,   -61,    91,
     208,   -61,   192,   194,   201,   202,   -61,   -61,    36,   -61,
      89,    89,   176,   176,   144,   -61,    53,    82,    84,   203,
     204,   205,   207,   -61,   -61,   -61,   -61,   -61,   215,   -61,
     216,   -61,   217,   -61,   -61,   -61,    91,   173,   174,   178,
     209,   206,   211,   212,   -61,   -61,   -61,   -61
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    11,     0,    13,    12,    22,     0,     0,     0,     0,
       0,     0,     0,    21,     0,     9,    10,    14,     0,    11,
      16,    15,    18,    19,    17,     1,     0,     0,    21,     0,
       0,    87,    75,    76,     0,     0,    73,     0,    74,     0,
       0,    72,    71,     0,    69,    70,     0,     0,     0,     0,
       0,     0,     0,     8,     0,     7,     0,     0,     0,     0,
      38,    63,    62,     0,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    26,
       0,    27,     0,    24,    36,     0,     0,     0,     5,     6,
      49,     0,    50,     0,    47,    51,    52,    53,    54,    55,
      48,    31,    28,    30,    29,     0,    77,     0,    79,    80,
      85,    83,    86,    84,    81,    82,     0,     0,     0,     0,
       0,     0,     0,    23,     2,     4,     3,     0,    20,     0,
       0,     0,     0,     0,     0,     0,    39,     0,    67,     0,
       0,    64,     0,     0,     0,     0,    56,    49,     0,    50,
      57,    58,    59,    60,    61,    37,     0,     0,     0,     0,
       0,     0,     0,    32,    33,    34,    35,    40,     0,    41,
       0,    42,     0,    46,    68,    66,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    43,    44,    45
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -61,   -61,   -60,     5,    63,    66,   -61,    -8,   -61,   -61,
     -61,   -61,   -41,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   187,    -4,    11,   110
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,    87,    14,    88,    89,    17,    18,    19,   105,
     136,    93,   127,    95,    96,    97,    98,    99,    20,    21,
      22,    23,    24,    43,    44,    38,    39
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      29,    30,    36,   134,    36,   107,    37,     5,    77,    31,
      32,    33,     5,    94,    25,     5,   118,    31,    41,    42,
      53,    26,   137,    45,    55,   135,    36,    36,   125,   126,
      63,    64,     1,    78,    34,   138,    79,     3,     4,     5,
      27,     5,    34,   147,    81,     6,    92,    35,     7,     8,
       9,    10,    28,    11,    65,    35,    12,    28,    36,    36,
      28,    80,   108,   109,    15,    45,    40,    16,   148,    82,
      66,    67,     5,    84,    90,    41,    42,   160,    15,   161,
     167,    16,    15,    92,    13,    16,    28,    63,   150,   151,
     152,   153,   154,    52,     3,     4,     5,    49,    85,    91,
      51,   156,   157,   158,    60,   168,     8,     9,    10,   169,
      11,   171,    35,    12,   -75,   -75,   180,    28,    46,    47,
      48,   149,   149,   149,   149,   149,     5,   159,    90,    32,
      33,   131,   132,   133,   170,   106,   172,    74,    75,    54,
     149,    28,    61,    49,    50,    62,    51,   146,    66,    67,
     -76,   -76,    76,    91,   129,   130,   131,   132,   133,    68,
      69,    70,    71,    72,    73,    56,    35,    57,    58,    59,
      83,    28,   -87,   -87,   -87,   -87,   -87,   -87,   110,   111,
     112,   113,   114,   115,   129,   130,   131,   132,   133,    66,
      67,   -74,   -74,   -73,   -73,    86,   101,   102,   103,   104,
      31,   116,   117,   119,   120,   121,   122,   123,   128,   139,
     140,   141,   142,   124,   143,   162,   144,   145,   155,   163,
     133,   164,   177,   178,   179,     0,   181,   182,   165,   166,
     173,   183,     0,   185,     0,   174,   175,   176,   186,   187,
     184,   100
};

static const yytype_int16 yycheck[] =
{
       8,     9,    10,    28,    12,    65,    10,     5,    27,     7,
       8,     9,     5,    54,     0,     5,    76,     7,     8,     9,
      15,    50,    18,    12,    19,    50,    34,    35,    88,    89,
      34,    35,    10,    52,    32,    31,    27,     3,     4,     5,
      50,     5,    32,     7,    27,    11,    54,    45,    14,    15,
      16,    17,    50,    19,    30,    45,    22,    50,    66,    67,
      50,    52,    66,    67,     1,    54,    50,     1,    32,    52,
      46,    47,     5,    27,     7,     8,     9,   137,    15,   139,
      27,    15,    19,    91,    50,    19,    50,    91,   129,   130,
     131,   132,   133,    12,     3,     4,     5,    49,    52,    32,
      52,    24,    25,    26,    28,    52,    15,    16,    17,    27,
      19,    27,    45,    22,    46,    47,   176,    50,    24,    25,
      26,   129,   130,   131,   132,   133,     5,    50,     7,     8,
       9,    42,    43,    44,    52,    33,    52,    20,    21,    23,
     148,    50,    27,    49,    50,    27,    52,    33,    46,    47,
      46,    47,    30,    32,    40,    41,    42,    43,    44,    34,
      35,    36,    37,    38,    39,     5,    45,     7,     8,     9,
      50,    50,    34,    35,    36,    37,    38,    39,    68,    69,
      70,    71,    72,    73,    40,    41,    42,    43,    44,    46,
      47,    46,    47,    46,    47,     7,    27,    27,    27,    27,
       7,    50,     7,     7,     7,     7,     7,    53,    27,    30,
      48,    31,    53,    13,    53,     7,    53,    53,    27,    27,
      44,    27,     7,     7,     7,    -1,    53,    53,    27,    27,
      27,    53,    -1,    27,    -1,    31,    31,    30,    27,    27,
      31,    54
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    10,    55,     3,     4,     5,    11,    14,    15,    16,
      17,    19,    22,    50,    57,    58,    59,    60,    61,    62,
      72,    73,    74,    75,    76,     0,    50,    50,    50,    61,
      61,     7,     8,     9,    32,    45,    61,    78,    79,    80,
      50,     8,     9,    77,    78,    79,    24,    25,    26,    49,
      50,    52,    12,    57,    23,    57,     5,     7,     8,     9,
      28,    27,    27,    78,    78,    30,    46,    47,    34,    35,
      36,    37,    38,    39,    20,    21,    30,    27,    52,    27,
      52,    27,    52,    50,    27,    52,     7,    56,    58,    59,
       7,    32,    61,    65,    66,    67,    68,    69,    70,    71,
      77,    27,    27,    27,    27,    63,    33,    56,    78,    78,
      80,    80,    80,    80,    80,    80,    50,     7,    56,     7,
       7,     7,     7,    53,    13,    56,    56,    66,    27,    40,
      41,    42,    43,    44,    28,    50,    64,    18,    31,    30,
      48,    31,    53,    53,    53,    53,    33,     7,    32,    61,
      66,    66,    66,    66,    66,    27,    24,    25,    26,    50,
      56,    56,     7,    27,    27,    27,    27,    27,    52,    27,
      52,    27,    52,    27,    31,    31,    30,     7,     7,     7,
      56,    53,    53,    53,    31,    27,    27,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    54,    55,    56,    56,    56,    56,    57,    57,    57,
      57,    57,    58,    58,    59,    59,    59,    59,    59,    59,
      60,    61,    61,    61,    61,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    63,    63,
      64,    64,    64,    64,    64,    64,    64,    65,    65,    66,
      66,    66,    66,    66,    66,    66,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    75,    76,    76,    77,
      77,    77,    77,    78,    78,    78,    78,    78,    78,    78,
      78,    79,    79,    79,    79,    79,    79,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     5,     2,     2,     1,     1,     2,     2,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     1,     4,     3,     3,     3,     3,     4,     4,
       4,     4,     6,     6,     6,     6,     3,     6,     0,     2,
       3,     3,     3,     6,     6,     6,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     5,     9,     7,     5,     7,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     1
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
  case 12: /* commentaire: TOKEN_COMMENT  */
#line 128 "parser.y"
                             {
                    printf("commentaire ");
                }
#line 1302 "parser.tab.c"
    break;

  case 13: /* commentaire: TOKEN_MULTICOM  */
#line 132 "parser.y"
                              {
                    printf("commentaire de multiples lignes");
                }
#line 1310 "parser.tab.c"
    break;

  case 14: /* instruction: affectation  */
#line 136 "parser.y"
                           {
			printf("\tInstruction type Affectation\n");

                }
#line 1319 "parser.tab.c"
    break;

  case 15: /* instruction: lecture  */
#line 141 "parser.y"
                       {

                }
#line 1327 "parser.tab.c"
    break;

  case 16: /* instruction: ecriture  */
#line 145 "parser.y"
                        {

                }
#line 1335 "parser.tab.c"
    break;

  case 17: /* instruction: conditionnel  */
#line 149 "parser.y"
                            {
                    printf("conditionnel\n");
                }
#line 1343 "parser.tab.c"
    break;

  case 18: /* instruction: while  */
#line 153 "parser.y"
                     {
                    printf("Boucle Tant que\n");
                    
                }
#line 1352 "parser.tab.c"
    break;

  case 19: /* instruction: for  */
#line 158 "parser.y"
                   {
                    printf("Boucle Pour\n");
                    
                }
#line 1361 "parser.tab.c"
    break;

  case 20: /* affectation: variable TOKEN_ASSIGN expression FININSTR  */
#line 162 "parser.y"
                                                       {
                        /* $1 est la valeur du premier non terminal. Ici c'est la valeur du non terminal variable. 				$3 est la valeur du 2nd non terminal. */
                        printf("\t\tAffectation sur la variable %s\n",(yyvsp[-3].text));
                }
#line 1370 "parser.tab.c"
    break;

  case 21: /* variable: TOKEN_ID  */
#line 168 "parser.y"
                {
                        printf("Variable %s\n",(yyvsp[0].text));
                        (yyval.text)=strdup((yyvsp[0].text));
                }
#line 1379 "parser.tab.c"
    break;

  case 22: /* variable: TOKEN_CHAR  */
#line 173 "parser.y"
                          {
			printf("Caractere: %c\n",(yyvsp[0].CHARACTER));
            char buffer[2];
            buffer[1] = '\0';
            buffer[0] = (yyvsp[0].CHARACTER);
			(yyval.text)=strdup(buffer);
		}
#line 1391 "parser.tab.c"
    break;

  case 23: /* variable: TOKEN_ID CROCHET_G TOKEN_NUMBER CROCHET_D  */
#line 181 "parser.y"
                                                         {
			printf("Acces a lelement %d du tableau %s\n",(yyvsp[-1].num),(yyvsp[-3].text));
			//$$=strdup($1[$3]);	
		}
#line 1400 "parser.tab.c"
    break;

  case 24: /* variable: TOKEN_ID TOKEN_ACSTRUCT TOKEN_ID  */
#line 186 "parser.y"
                                                {
			printf("Acces au champs %s de la structure %s\n",(yyvsp[0].text),(yyvsp[-2].text));
			//$$=strdup($1.$3);	
		}
#line 1409 "parser.tab.c"
    break;

  case 25: /* DECLARE: TOKEN_ID NUM FININSTR  */
#line 191 "parser.y"
                                     {
			printf("Declaration dun entier\n");
		}
#line 1417 "parser.tab.c"
    break;

  case 26: /* DECLARE: TOKEN_ID BOOL FININSTR  */
#line 195 "parser.y"
                                      {
			printf("Declaration dun booleen\n");
		}
#line 1425 "parser.tab.c"
    break;

  case 27: /* DECLARE: TOKEN_ID CHAR FININSTR  */
#line 199 "parser.y"
                                      {
			printf("Declaration dun caractere\n");
		}
#line 1433 "parser.tab.c"
    break;

  case 28: /* DECLARE: TOKEN_CONST TOKEN_ID TOKEN_NUMBER FININSTR  */
#line 203 "parser.y"
                                                          {
			printf("Declaration dune constante de type entier\n");
		}
#line 1441 "parser.tab.c"
    break;

  case 29: /* DECLARE: TOKEN_CONST TOKEN_ID TOKEN_TRUE FININSTR  */
#line 207 "parser.y"
                                                        {
			printf("Declaration dune constante de type booleen\n");
		}
#line 1449 "parser.tab.c"
    break;

  case 30: /* DECLARE: TOKEN_CONST TOKEN_ID TOKEN_FALSE FININSTR  */
#line 211 "parser.y"
                                                         {
			printf("Declaration dune constante de type booleen\n");
		}
#line 1457 "parser.tab.c"
    break;

  case 31: /* DECLARE: TOKEN_CONST TOKEN_ID TOKEN_CHAR FININSTR  */
#line 215 "parser.y"
                                                        {
			printf("Declaration dune constante de type caractere\n");
		}
#line 1465 "parser.tab.c"
    break;

  case 32: /* DECLARE: TOKEN_ID NUM CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR  */
#line 219 "parser.y"
                                                                      {
			printf("Declaration dun tableau de type entier et de taille %d\n",(yyvsp[-2].num));
		}
#line 1473 "parser.tab.c"
    break;

  case 33: /* DECLARE: TOKEN_ID BOOL CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR  */
#line 223 "parser.y"
                                                                       {
			printf("Declaration dun tableau de type booleen et de taille %d\n",(yyvsp[-2].num));
		}
#line 1481 "parser.tab.c"
    break;

  case 34: /* DECLARE: TOKEN_ID CHAR CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR  */
#line 227 "parser.y"
                                                                       {
			printf("Declaration dun tableau de type caractere et de taille %d\n",(yyvsp[-2].num));
		}
#line 1489 "parser.tab.c"
    break;

  case 35: /* DECLARE: TOKEN_ID TOKEN_ID CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR  */
#line 231 "parser.y"
                                                                           {
			printf("Declaration dun tableau de type structure %s et de taille %d\n",(yyvsp[-4].text),(yyvsp[-2].num));
		}
#line 1497 "parser.tab.c"
    break;

  case 36: /* DECLARE: TOKEN_ID TOKEN_ID FININSTR  */
#line 235 "parser.y"
                                          {
			printf("Declaration dune structure");
		}
#line 1505 "parser.tab.c"
    break;

  case 37: /* DECLARE: TOKEN_STRUCT TOKEN_ID ACCOLAD_G LISTE ACCOLAD_G FININSTR  */
#line 239 "parser.y"
                                                                        {
			printf("Creation dune structure");
		}
#line 1513 "parser.tab.c"
    break;

  case 38: /* LISTE: %empty  */
#line 242 "parser.y"
                      {}
#line 1519 "parser.tab.c"
    break;

  case 39: /* LISTE: LISTE CHAMP  */
#line 244 "parser.y"
                           {
		}
#line 1526 "parser.tab.c"
    break;

  case 40: /* CHAMP: TOKEN_ID NUM FININSTR  */
#line 247 "parser.y"
                                     {}
#line 1532 "parser.tab.c"
    break;

  case 41: /* CHAMP: TOKEN_ID BOOL FININSTR  */
#line 249 "parser.y"
                                      {}
#line 1538 "parser.tab.c"
    break;

  case 42: /* CHAMP: TOKEN_ID CHAR FININSTR  */
#line 251 "parser.y"
                                      {}
#line 1544 "parser.tab.c"
    break;

  case 43: /* CHAMP: TOKEN_ID NUM CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR  */
#line 253 "parser.y"
                                                                      {}
#line 1550 "parser.tab.c"
    break;

  case 44: /* CHAMP: TOKEN_ID BOOL CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR  */
#line 255 "parser.y"
                                                                       {}
#line 1556 "parser.tab.c"
    break;

  case 45: /* CHAMP: TOKEN_ID CHAR CROCHET_G TOKEN_NUMBER CROCHET_D FININSTR  */
#line 257 "parser.y"
                                                                       {}
#line 1562 "parser.tab.c"
    break;

  case 46: /* CHAMP: TOKEN_ID TOKEN_ID FININSTR  */
#line 259 "parser.y"
                                          {}
#line 1568 "parser.tab.c"
    break;

  case 47: /* expression: expression_arithmetique  */
#line 261 "parser.y"
                                       {

		
		}
#line 1577 "parser.tab.c"
    break;

  case 48: /* expression: expression_booleenne  */
#line 266 "parser.y"
                                    {
		
		}
#line 1585 "parser.tab.c"
    break;

  case 49: /* expression_arithmetique: TOKEN_NUMBER  */
#line 270 "parser.y"
                                     {
                                        printf("\t\t\tNombre : %ld\n",(yyvsp[0].num));
 /* Comme le token TOK_NOMBRE est de type entier et que on a type expression_arithmetique comme du texte, il nous faut convertir la valeur en texte. */
                                        int length=snprintf(NULL,0,"%ld",(yyvsp[0].num));
                                        char* str=malloc(length+1);
                                        snprintf(str,length+1,"%ld",(yyvsp[0].num));
                                        //$$=strdup(str);
                                        (yyval.num)=(yyvsp[0].num);
                                        free(str);
                                }
#line 1600 "parser.tab.c"
    break;

  case 50: /* expression_arithmetique: variable  */
#line 281 "parser.y"
                                        {
                                }
#line 1607 "parser.tab.c"
    break;

  case 51: /* expression_arithmetique: addition  */
#line 284 "parser.y"
                                        {
                                }
#line 1614 "parser.tab.c"
    break;

  case 52: /* expression_arithmetique: soustraction  */
#line 287 "parser.y"
                                            {
                                }
#line 1621 "parser.tab.c"
    break;

  case 53: /* expression_arithmetique: multiplication  */
#line 290 "parser.y"
                                              {
                                }
#line 1628 "parser.tab.c"
    break;

  case 54: /* expression_arithmetique: division  */
#line 293 "parser.y"
                                        {
                                }
#line 1635 "parser.tab.c"
    break;

  case 55: /* expression_arithmetique: modulo  */
#line 296 "parser.y"
                                      {
                                }
#line 1642 "parser.tab.c"
    break;

  case 56: /* expression_arithmetique: PARENTHESE_G expression_arithmetique PARENTHESE_D  */
#line 299 "parser.y"
                                                                                 {
                                        printf("\t\t\tCest une expression artihmetique entre parentheses\n");
                                        //$$=strcat(strcat(strdup("("),strdup($2)),strdup(")"));
                                        (yyval.num)=(yyvsp[-1].num);
                                }
#line 1652 "parser.tab.c"
    break;

  case 57: /* addition: expression_arithmetique TOKEN_ADD expression_arithmetique  */
#line 305 "parser.y"
                                                             {
        printf("\t\t\tAddition\n");
        //$$=strcat(strcat(strdup($1),strdup("+")),strdup($3));
        (yyval.num)=(yyvsp[-2].num)+(yyvsp[0].num);
    }
#line 1662 "parser.tab.c"
    break;

  case 58: /* soustraction: expression_arithmetique TOKEN_SOUSTR expression_arithmetique  */
#line 311 "parser.y"
                                                                {
        printf("\t\t\tSoustraction\n");
        //$$=strcat(strcat(strdup($1),strdup("-")),strdup($3));
        (yyval.num)=(yyvsp[-2].num)-(yyvsp[0].num);
    }
#line 1672 "parser.tab.c"
    break;

  case 59: /* multiplication: expression_arithmetique TOKEN_MULT expression_arithmetique  */
#line 317 "parser.y"
                                                              {
        printf("\t\t\tMultiplication\n");
        //$$=strcat(strcat(strdup($1),strdup("*")),strdup($3));
        (yyval.num)=(yyvsp[-2].num)*(yyvsp[0].num);
    }
#line 1682 "parser.tab.c"
    break;

  case 60: /* division: expression_arithmetique TOKEN_DIVIS expression_arithmetique  */
#line 323 "parser.y"
                                                               {
        printf("\t\t\tDivision\n");
        //$$=strcat(strcat(strdup($1),strdup("/")),strdup($3));
        (yyval.num)=(yyvsp[-2].num)/(yyvsp[0].num);
    }
#line 1692 "parser.tab.c"
    break;

  case 61: /* modulo: expression_arithmetique TOKEN_MOD expression_arithmetique  */
#line 329 "parser.y"
                                                             {
        printf("\t\t\tModulo\n");
        //$$=strcat(strcat(strdup($1),strdup("%")),strdup($3));
        (yyval.num)=(yyvsp[-2].num)%(yyvsp[0].num);
    }
#line 1702 "parser.tab.c"
    break;

  case 62: /* ecriture: TOKEN_WRITE variable FININSTR  */
#line 335 "parser.y"
                                             {
		printf("\t\t\t Affichage de variable %s \n",(yyvsp[-1].text));
		}
#line 1710 "parser.tab.c"
    break;

  case 63: /* lecture: TOKEN_READ variable FININSTR  */
#line 339 "parser.y"
                                            {
		printf("\t\t\t Lecture variable %s\n ",(yyvsp[-1].text));
		}
#line 1718 "parser.tab.c"
    break;

  case 64: /* while: TOKEN_WHILE expression_booleenne TOKEN_BEGIN bloc_code END  */
#line 342 "parser.y"
                                                                          {
                    
                }
#line 1726 "parser.tab.c"
    break;

  case 65: /* for: TOKEN_FOR TOKEN_ID TOKEN_FROM TOKEN_NUMBER TOKEN_COMMA TOKEN_NUMBER TOKEN_BEGIN bloc_code END  */
#line 345 "parser.y"
                                                                                                             {

                }
#line 1734 "parser.tab.c"
    break;

  case 66: /* for: TOKEN_FOR TOKEN_ID TOKEN_IN TOKEN_ID TOKEN_BEGIN bloc_code END  */
#line 349 "parser.y"
                                                                               {

                }
#line 1742 "parser.tab.c"
    break;

  case 67: /* conditionnel: TOKEN_IF ExpBool TOKEN_BEGIN bloc_code END  */
#line 352 "parser.y"
                                                            {

                }
#line 1750 "parser.tab.c"
    break;

  case 68: /* conditionnel: TOKEN_IF ExpBool TOKEN_BEGIN bloc_code TOKEN_ELSE bloc_code END  */
#line 355 "parser.y"
                                                                                  {
                    
                }
#line 1758 "parser.tab.c"
    break;

  case 69: /* expression_booleenne: ExpBool  */
#line 358 "parser.y"
                             {

                      }
#line 1766 "parser.tab.c"
    break;

  case 70: /* expression_booleenne: Comparaison  */
#line 362 "parser.y"
                                {

                    }
#line 1774 "parser.tab.c"
    break;

  case 71: /* expression_booleenne: TOKEN_TRUE  */
#line 366 "parser.y"
                          {
                        printf("Booleen vrai\n");
                        (yyval.BOOLEAN)=1;
               	}
#line 1783 "parser.tab.c"
    break;

  case 72: /* expression_booleenne: TOKEN_FALSE  */
#line 371 "parser.y"
                           {
                   	printf("Booleaen faux\n");
                        (yyval.BOOLEAN)=0;
		}
#line 1792 "parser.tab.c"
    break;

  case 73: /* ExpBool: variable  */
#line 378 "parser.y"
                          {(yyval.BOOLEAN)=atoi((yyvsp[0].text)); }
#line 1798 "parser.tab.c"
    break;

  case 74: /* ExpBool: Comparaison  */
#line 379 "parser.y"
                              {(yyval.BOOLEAN) = (yyvsp[0].BOOLEAN);}
#line 1804 "parser.tab.c"
    break;

  case 75: /* ExpBool: TOKEN_FALSE  */
#line 380 "parser.y"
                              { (yyval.BOOLEAN)=(yyvsp[0].BOOLEAN); }
#line 1810 "parser.tab.c"
    break;

  case 76: /* ExpBool: TOKEN_TRUE  */
#line 381 "parser.y"
                              { (yyval.BOOLEAN)=(yyvsp[0].BOOLEAN); }
#line 1816 "parser.tab.c"
    break;

  case 77: /* ExpBool: PARENTHESE_G ExpBool PARENTHESE_D  */
#line 382 "parser.y"
                                                    { (yyval.BOOLEAN)=(yyvsp[-1].BOOLEAN); }
#line 1822 "parser.tab.c"
    break;

  case 78: /* ExpBool: TOKEN_NOT ExpBool  */
#line 383 "parser.y"
                                    { (yyval.BOOLEAN)=!(yyvsp[0].BOOLEAN); }
#line 1828 "parser.tab.c"
    break;

  case 79: /* ExpBool: ExpBool TOKEN_AND ExpBool  */
#line 384 "parser.y"
                                            { (yyval.BOOLEAN)=((yyvsp[-2].BOOLEAN))&&((yyvsp[0].BOOLEAN)); }
#line 1834 "parser.tab.c"
    break;

  case 80: /* ExpBool: ExpBool TOKEN_OR ExpBool  */
#line 385 "parser.y"
                                            { (yyval.BOOLEAN)=((yyvsp[-2].BOOLEAN))||((yyvsp[0].BOOLEAN)); }
#line 1840 "parser.tab.c"
    break;

  case 81: /* Comparaison: comparable TOKEN_EGAL comparable  */
#line 388 "parser.y"
                                                  { (yyval.BOOLEAN)=((yyvsp[-2].num) == (yyvsp[0].num)); }
#line 1846 "parser.tab.c"
    break;

  case 82: /* Comparaison: comparable TOKEN_DIFF comparable  */
#line 389 "parser.y"
                                                   { (yyval.BOOLEAN)=((yyvsp[-2].num) != (yyvsp[0].num)); }
#line 1852 "parser.tab.c"
    break;

  case 83: /* Comparaison: comparable TOKEN_SUP comparable  */
#line 390 "parser.y"
                                                  { (yyval.BOOLEAN)=((yyvsp[-2].num) > (yyvsp[0].num)); }
#line 1858 "parser.tab.c"
    break;

  case 84: /* Comparaison: comparable TOKEN_SUPEGAL comparable  */
#line 391 "parser.y"
                                                      { (yyval.BOOLEAN)=((yyvsp[-2].num) >= (yyvsp[0].num)); }
#line 1864 "parser.tab.c"
    break;

  case 85: /* Comparaison: comparable TOKEN_INF comparable  */
#line 392 "parser.y"
                                                  { (yyval.BOOLEAN)=((yyvsp[-2].num) < (yyvsp[0].num)); }
#line 1870 "parser.tab.c"
    break;

  case 86: /* Comparaison: comparable TOKEN_INFEGAL comparable  */
#line 393 "parser.y"
                                                      { (yyval.BOOLEAN)=((yyvsp[-2].num) <= (yyvsp[0].num)); }
#line 1876 "parser.tab.c"
    break;


#line 1880 "parser.tab.c"

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

#line 400 "parser.y"


int main(void) {
  yyparse();
}

void yyerror (char const *s) {
   fprintf (stderr, "%s\n", s);
 }
