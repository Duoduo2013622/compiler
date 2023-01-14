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

#ifndef YY_YY_INCLUDE_PARSER_H_INCLUDED
# define YY_YY_INCLUDE_PARSER_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 15 "src/parser.y"

    #include "Ast.h"
    #include "SymbolTable.h"
    #include "Type.h"

#line 55 "include/parser.h"

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    DECI = 259,                    /* DECI  */
    OCT = 260,                     /* OCT  */
    HEX = 261,                     /* HEX  */
    FNUM = 262,                    /* FNUM  */
    IF = 263,                      /* IF  */
    ELSE = 264,                    /* ELSE  */
    DO = 265,                      /* DO  */
    WHILE = 266,                   /* WHILE  */
    FOR = 267,                     /* FOR  */
    BREAK = 268,                   /* BREAK  */
    CONTINUE = 269,                /* CONTINUE  */
    CONST = 270,                   /* CONST  */
    INT = 271,                     /* INT  */
    FLOAT = 272,                   /* FLOAT  */
    VOID = 273,                    /* VOID  */
    LPAREN = 274,                  /* LPAREN  */
    RPAREN = 275,                  /* RPAREN  */
    LBRACE = 276,                  /* LBRACE  */
    RBRACE = 277,                  /* RBRACE  */
    LBRACK = 278,                  /* LBRACK  */
    RBRACK = 279,                  /* RBRACK  */
    SEMI = 280,                    /* SEMI  */
    COMMA = 281,                   /* COMMA  */
    ADD = 282,                     /* ADD  */
    SUB = 283,                     /* SUB  */
    OR = 284,                      /* OR  */
    AND = 285,                     /* AND  */
    LESS = 286,                    /* LESS  */
    ASSIGN = 287,                  /* ASSIGN  */
    EQ = 288,                      /* EQ  */
    GRAEQ = 289,                   /* GRAEQ  */
    LESEQ = 290,                   /* LESEQ  */
    NEQ = 291,                     /* NEQ  */
    PLUSASSIGN = 292,              /* PLUSASSIGN  */
    MINUSASSIGN = 293,             /* MINUSASSIGN  */
    MULASSIGN = 294,               /* MULASSIGN  */
    DIVASSIGN = 295,               /* DIVASSIGN  */
    GRA = 296,                     /* GRA  */
    MUL = 297,                     /* MUL  */
    DIV = 298,                     /* DIV  */
    INCRE = 299,                   /* INCRE  */
    DECRE = 300,                   /* DECRE  */
    MOD = 301,                     /* MOD  */
    NOT = 302,                     /* NOT  */
    RETURN = 303,                  /* RETURN  */
    THEN = 304                     /* THEN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "src/parser.y"

    int itype;
    float ftype;
    char* strtype;
    StmtNode* stmttype;
    ExprNode* exprtype;
    Type* type;
    SymbolEntry* se;

#line 131 "include/parser.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_INCLUDE_PARSER_H_INCLUDED  */
