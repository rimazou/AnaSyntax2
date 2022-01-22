/* A Bison parser, made by GNU Bison 3.7.6.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TOKEN_MULTICOM = 258,          /* TOKEN_MULTICOM  */
    TOKEN_COMMENT = 259,           /* TOKEN_COMMENT  */
    TOKEN_CHAR = 260,              /* TOKEN_CHAR  */
    TOKEN_TEXT = 261,              /* TOKEN_TEXT  */
    TOKEN_NUMBER = 262,            /* TOKEN_NUMBER  */
    TOKEN_FALSE = 263,             /* TOKEN_FALSE  */
    TOKEN_TRUE = 264,              /* TOKEN_TRUE  */
    TOKEN_DECLARE = 265,           /* TOKEN_DECLARE  */
    TOKEN_CONST = 266,             /* TOKEN_CONST  */
    TOKEN_START = 267,             /* TOKEN_START  */
    TOKEN_STOP = 268,              /* TOKEN_STOP  */
    TOKEN_STRUCT = 269,            /* TOKEN_STRUCT  */
    TOKEN_READ = 270,              /* TOKEN_READ  */
    TOKEN_WRITE = 271,             /* TOKEN_WRITE  */
    TOKEN_IF = 272,                /* TOKEN_IF  */
    TOKEN_ELSE = 273,              /* TOKEN_ELSE  */
    TOKEN_FOR = 274,               /* TOKEN_FOR  */
    TOKEN_IN = 275,                /* TOKEN_IN  */
    TOKEN_FROM = 276,              /* TOKEN_FROM  */
    TOKEN_WHILE = 277,             /* TOKEN_WHILE  */
    TOKEN_ASSIGN = 278,            /* TOKEN_ASSIGN  */
    NUM = 279,                     /* NUM  */
    BOOL = 280,                    /* BOOL  */
    CHAR = 281,                    /* CHAR  */
    FININSTR = 282,                /* FININSTR  */
    ACCOLAD_G = 283,               /* ACCOLAD_G  */
    ACCOLAD_D = 284,               /* ACCOLAD_D  */
    TOKEN_BEGIN = 285,             /* TOKEN_BEGIN  */
    END = 286,                     /* END  */
    PARENTHESE_G = 287,            /* PARENTHESE_G  */
    PARENTHESE_D = 288,            /* PARENTHESE_D  */
    TOKEN_INF = 289,               /* TOKEN_INF  */
    TOKEN_SUP = 290,               /* TOKEN_SUP  */
    TOKEN_INFEGAL = 291,           /* TOKEN_INFEGAL  */
    TOKEN_SUPEGAL = 292,           /* TOKEN_SUPEGAL  */
    TOKEN_EGAL = 293,              /* TOKEN_EGAL  */
    TOKEN_DIFF = 294,              /* TOKEN_DIFF  */
    TOKEN_ADD = 295,               /* TOKEN_ADD  */
    TOKEN_SOUSTR = 296,            /* TOKEN_SOUSTR  */
    TOKEN_MULT = 297,              /* TOKEN_MULT  */
    TOKEN_DIVIS = 298,             /* TOKEN_DIVIS  */
    TOKEN_MOD = 299,               /* TOKEN_MOD  */
    TOKEN_NOT = 300,               /* TOKEN_NOT  */
    TOKEN_AND = 301,               /* TOKEN_AND  */
    TOKEN_OR = 302,                /* TOKEN_OR  */
    TOKEN_COMMA = 303,             /* TOKEN_COMMA  */
    TOKEN_ACSTRUCT = 304,          /* TOKEN_ACSTRUCT  */
    TOKEN_ID = 305,                /* TOKEN_ID  */
    TOKEN_FININPUT = 306,          /* TOKEN_FININPUT  */
    CROCHET_G = 307,               /* CROCHET_G  */
    CROCHET_D = 308                /* CROCHET_D  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 28 "parser.y"

    long num;
    char* text;
    char CHARACTER;
    int BOOLEAN;
    Identifiant *varId;

#line 125 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
