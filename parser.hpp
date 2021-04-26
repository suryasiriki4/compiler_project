/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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

#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
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
    IDENTIFIER = 258,
    INT_CONSTANT = 259,
    FLOAT_CONSTANT = 260,
    CHAR_CONSTANT = 261,
    STR_CONSTANT = 262,
    INT32 = 263,
    FLOAT = 264,
    CHAR = 265,
    BOOL = 266,
    VOID = 267,
    ADD = 268,
    SUB = 269,
    DIV = 270,
    MUL = 271,
    MOD = 272,
    LAND = 273,
    LOR = 274,
    LEQ = 275,
    GEQ = 276,
    EQ = 277,
    NEQ = 278,
    LESSER = 279,
    GREATER = 280,
    FOR = 281,
    WHILE = 282,
    IF = 283,
    ELSE = 284,
    ELIF = 285,
    TRUE = 286,
    FALSE = 287,
    PRINT = 288,
    CONTINUE = 289,
    BREAK = 290,
    RETURN = 291,
    EXTERN = 292,
    NOT = 293
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 24 "parser.y" /* yacc.c:1909  */

    Node *node;
    BlockNode *block;
    ExpressionNode *expr;
    std::vector<ExpressionNode*> *exprs; 
    StatementNode *stmt;
    IdentifierNode *ident;
    VariableDeclarationNode *var_dec;
    std::vector<VariableDeclarationNode*> *varvec;
    std::vector<ExpressionNode*> *exprvec;
    std::string *string;
    int token;

#line 107 "parser.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */
