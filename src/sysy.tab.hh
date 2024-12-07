/* A Bison parser, made by GNU Bison 3.8.2.  */

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

#ifndef YY_YY_SRC_SYSY_TAB_HH_INCLUDED
# define YY_YY_SRC_SYSY_TAB_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "src/sysy.y"

  #include <memory>
  #include <string>
  #include "ast.hh"

#line 55 "src/sysy.tab.hh"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    CONST = 258,                   /* CONST  */
    INT = 259,                     /* INT  */
    VOID = 260,                    /* VOID  */
    RETURN = 261,                  /* RETURN  */
    IDENT = 262,                   /* IDENT  */
    INT_CONST = 263,               /* INT_CONST  */
    LP = 264,                      /* LP  */
    RP = 265,                      /* RP  */
    LB = 266,                      /* LB  */
    RB = 267,                      /* RB  */
    LC = 268,                      /* LC  */
    RC = 269,                      /* RC  */
    COMMA = 270,                   /* COMMA  */
    And = 271,                     /* And  */
    OR = 272,                      /* OR  */
    SEMICOLON = 273,               /* SEMICOLON  */
    IF = 274,                      /* IF  */
    ELSE = 275,                    /* ELSE  */
    WHILE = 276,                   /* WHILE  */
    BREAK = 277,                   /* BREAK  */
    CONTINUE = 278,                /* CONTINUE  */
    Plus = 279,                    /* Plus  */
    Sub = 280,                     /* Sub  */
    Mul = 281,                     /* Mul  */
    Div = 282,                     /* Div  */
    Mod = 283,                     /* Mod  */
    GL = 284,                      /* GL  */
    LL = 285,                      /* LL  */
    LE = 286,                      /* LE  */
    GE = 287,                      /* GE  */
    EQ = 288,                      /* EQ  */
    NE = 289,                      /* NE  */
    Assign = 290,                  /* Assign  */
    Not = 291                      /* Not  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 24 "src/sysy.y"

    ASTNode *node;

#line 112 "src/sysy.tab.hh"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (ASTNode* &ast);


#endif /* !YY_YY_SRC_SYSY_TAB_HH_INCLUDED  */
