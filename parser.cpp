/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

    #include "node.h"
    #include <map>
    using namespace std;

    int lineNo  = 1;
    map<string,E_TYPE> varTable;
    void addNewVar(string name,E_TYPE type);
    string typeStr(E_TYPE type);
    void emptyMap();
    void setVarType(IdentifierNode *);
    void printVarTable();
 
    BlockNode *programBlock; /* the top level root node of our final AST */

    extern int yylex();
    bool success_flag = true;
    void yyerror(const char *s) { printf("Line no: %d ERROR: %s\n", lineNo, s); success_flag = false; return ;}
      

#line 87 "parser.cpp" /* yacc.c:339  */

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
   by #include "parser.hpp".  */
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
#line 24 "parser.y" /* yacc.c:355  */

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

#line 180 "parser.cpp" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 197 "parser.cpp" /* yacc.c:358  */

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
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
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
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   349

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  48
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  141

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      46,    47,     2,     2,    38,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    41,
       2,    39,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,     2,    43,     2,     2,     2,     2,
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
      35,    36,    37,    40
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    65,    65,    68,    69,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    84,    85,    88,    89,    93,
      94,    95,    96,    99,   100,   101,   104,   105,   106,   109,
     112,   116,   117,   118,   121,   124,   125,   126,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   148,   149,   150,   151,   152,   153,   154,   155,   158,
     159,   160,   164,   165,   166,   170,   171,   172,   175,   178,
     181
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INT_CONSTANT",
  "FLOAT_CONSTANT", "CHAR_CONSTANT", "STR_CONSTANT", "INT32", "FLOAT",
  "CHAR", "BOOL", "VOID", "ADD", "SUB", "DIV", "MUL", "MOD", "LAND", "LOR",
  "LEQ", "GEQ", "EQ", "NEQ", "LESSER", "GREATER", "FOR", "WHILE", "IF",
  "ELSE", "ELIF", "TRUE", "FALSE", "PRINT", "CONTINUE", "BREAK", "RETURN",
  "EXTERN", "','", "'='", "NOT", "';'", "'{'", "'}'", "'['", "']'", "'('",
  "')'", "$accept", "program", "stmts", "stmt", "block", "var_dec",
  "var_type", "arr_dec", "invoke_args", "fun_dec", "extern_decl",
  "func_dec_args", "ident", "numeric", "expr", "logical_expr", "call_args",
  "if_stmt", "elif_stmt", "else_stmt", "for_stmt", "while_stmt", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,    44,    61,
     293,    59,   123,   125,    91,    93,    40,    41
};
# endif

#define YYPACT_NINF -63

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-63)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     158,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     2,
      12,    15,     8,    71,    20,    28,   158,   -63,    23,    26,
      29,   -63,    36,   -36,   -63,   253,   -63,   -63,   -63,   -63,
      20,    20,    20,   -63,   282,    26,   192,   -63,   -63,   -63,
      32,   -63,   -63,    20,    20,    20,    20,    20,    20,    20,
      20,    20,    20,    20,    20,    20,    20,    20,    20,   -63,
     295,   324,    38,    49,   -63,    27,   -63,    20,     5,    71,
     324,   240,   324,   -17,    72,    72,   -63,   -63,   -63,   176,
     220,    78,    78,   266,   266,    78,    78,    20,    25,    25,
      71,   324,    52,    64,   -63,    26,    18,    65,    20,   -63,
      74,   102,   -63,   -14,    21,   -63,    10,    86,    71,    25,
      20,   324,    20,   -63,   114,    25,    67,   -63,   -63,   -63,
     -63,    20,   -63,   -63,   324,   205,   -63,   -63,    20,    19,
     324,    25,    80,    20,   -63,   -63,    25,   324,   -14,   -63,
     -63
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    34,    35,    36,    37,    19,    20,    21,    22,     0,
       0,     0,     0,     0,     0,     0,     2,     3,     0,     0,
       0,     7,     0,    40,    41,     0,    47,    10,    12,    11,
       0,     0,     0,    13,     0,     0,     0,     1,     4,     5,
      17,     6,     8,     0,     0,    59,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
       0,     0,    47,    47,    14,     0,    48,     0,     0,    31,
      38,     0,    60,     0,    42,    43,    45,    44,    46,    51,
      52,    53,    54,    55,    56,    57,    58,     0,     0,     0,
      31,    18,     0,     0,    32,     0,     0,    49,     0,    39,
      47,     0,    70,    62,     0,    23,     0,    17,     0,     0,
       0,    61,     0,    15,     0,     0,     0,    63,    64,    30,
      24,    26,    33,    29,    50,     0,    16,    68,     0,     0,
      27,     0,    47,     0,    25,    69,     0,    28,    65,    66,
      67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -63,   -63,    30,   -15,   -62,   -18,    -6,   -63,   -63,   -63,
     -63,    42,   -13,   -63,   -12,   -27,   -63,   -63,    -5,    -4,
     -63,   -63
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,   102,    18,    19,    20,   129,    21,
      22,    96,    23,    24,    25,    26,    73,    27,   117,   118,
      28,    29
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      34,    38,    36,    43,    62,    63,    40,    35,    44,    92,
      45,     1,     2,     3,     4,   115,   116,   120,    60,    61,
      61,    98,    65,     1,     2,     3,     4,   103,    37,     1,
      99,    70,    71,    72,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,   123,    30,    33,
      93,    94,   121,   127,    14,    91,   108,   133,    31,   108,
     100,    32,   134,    95,    39,   109,    14,   101,   119,   135,
      41,    67,    94,    90,   138,    61,    68,    42,    69,     5,
       6,     7,   107,     8,    95,    88,   111,    48,    49,    50,
     122,    46,    47,    48,    49,    50,    89,   105,   124,    38,
     125,   132,    95,   106,   110,     1,     2,     3,     4,   130,
       5,     6,     7,   128,     8,   112,    61,     1,     2,     3,
       4,   137,     5,     6,     7,    67,     8,   136,     9,    10,
      11,   114,   104,   139,   140,     0,     0,     0,    12,    13,
       9,    10,    11,     0,     0,   113,     0,     0,    14,     0,
      12,    13,     0,     0,     0,     0,     0,   126,     0,     0,
      14,     1,     2,     3,     4,     0,     5,     6,     7,     0,
       8,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     9,    10,    11,     0,     0,    46,
      47,    48,    49,    50,    12,    13,    53,    54,    55,    56,
      57,    58,     0,     0,    14,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,     0,     0,    46,    47,    48,    49,    50,    51,    66,
      53,    54,    55,    56,    57,    58,     0,     0,     0,     0,
       0,     0,   131,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    46,
      47,    48,    49,    50,     0,    97,    53,    54,     0,     0,
      57,    58,     0,     0,    59,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,     0,     0,    64,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58
};

static const yytype_int16 yycheck[] =
{
      12,    16,    14,    39,    31,    32,    19,    13,    44,     4,
      46,     3,     4,     5,     6,    29,    30,     7,    30,    31,
      32,    38,    35,     3,     4,     5,     6,    89,     0,     3,
      47,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,   109,    46,    41,
      45,    69,    42,   115,    46,    67,    38,    38,    46,    38,
      87,    46,    43,    69,    41,    47,    46,    42,    47,   131,
      41,    39,    90,    46,   136,    87,    44,    41,    46,     8,
       9,    10,    95,    12,    90,    47,    98,    15,    16,    17,
     108,    13,    14,    15,    16,    17,    47,    45,   110,   114,
     112,   128,   108,    39,    39,     3,     4,     5,     6,   121,
       8,     9,    10,    46,    12,    41,   128,     3,     4,     5,
       6,   133,     8,     9,    10,    39,    12,    47,    26,    27,
      28,   101,    90,   138,   138,    -1,    -1,    -1,    36,    37,
      26,    27,    28,    -1,    -1,    43,    -1,    -1,    46,    -1,
      36,    37,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      46,     3,     4,     5,     6,    -1,     8,     9,    10,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    27,    28,    -1,    -1,    13,
      14,    15,    16,    17,    36,    37,    20,    21,    22,    23,
      24,    25,    -1,    -1,    46,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    13,    14,    15,    16,    17,    18,    47,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
      -1,    -1,    47,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    13,
      14,    15,    16,    17,    -1,    45,    20,    21,    -1,    -1,
      24,    25,    -1,    -1,    41,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,     8,     9,    10,    12,    26,
      27,    28,    36,    37,    46,    49,    50,    51,    53,    54,
      55,    57,    58,    60,    61,    62,    63,    65,    68,    69,
      46,    46,    46,    41,    62,    54,    62,     0,    51,    41,
      60,    41,    41,    39,    44,    46,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    41,
      62,    62,    63,    63,    41,    60,    47,    39,    44,    46,
      62,    62,    62,    64,    62,    62,    62,    62,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    41,    47,    47,
      46,    62,     4,    45,    53,    54,    59,    45,    38,    47,
      63,    42,    52,    52,    59,    45,    39,    60,    38,    47,
      39,    62,    41,    43,    50,    29,    30,    66,    67,    47,
       7,    42,    53,    52,    62,    62,    43,    52,    46,    56,
      62,    47,    63,    38,    43,    52,    47,    62,    52,    66,
      67
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    48,    49,    50,    50,    51,    51,    51,    51,    51,
      51,    51,    51,    51,    51,    52,    52,    53,    53,    54,
      54,    54,    54,    55,    55,    55,    56,    56,    56,    57,
      58,    59,    59,    59,    60,    61,    61,    61,    62,    62,
      62,    62,    62,    62,    62,    62,    62,    62,    62,    62,
      62,    63,    63,    63,    63,    63,    63,    63,    63,    64,
      64,    64,    65,    65,    65,    66,    66,    66,    67,    68,
      69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     2,     1,     2,     2,
       1,     1,     1,     2,     3,     2,     3,     2,     4,     1,
       1,     1,     1,     5,     6,     8,     0,     1,     3,     6,
       6,     0,     1,     3,     1,     1,     1,     1,     3,     4,
       1,     1,     3,     3,     3,     3,     3,     1,     3,     4,
       6,     3,     3,     3,     3,     3,     3,     3,     3,     0,
       1,     3,     5,     6,     6,     5,     6,     6,     2,     9,
       5
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


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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

    YYSIZE_T yystacksize;

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
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
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
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
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


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 65 "parser.y" /* yacc.c:1646  */
    { programBlock = (yyvsp[0].block);}
#line 1413 "parser.cpp" /* yacc.c:1646  */
    break;

  case 3:
#line 68 "parser.y" /* yacc.c:1646  */
    { (yyval.block) = new BlockNode(); (yyval.block)->statements.push_back((yyvsp[0].stmt)); }
#line 1419 "parser.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 69 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].block)->statements.push_back((yyvsp[0].stmt)); }
#line 1425 "parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 73 "parser.y" /* yacc.c:1646  */
    {(yyval.stmt) = (yyvsp[-1].stmt) ;}
#line 1431 "parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 76 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new ExpressionStatementNode(*(yyvsp[-1].expr)); }
#line 1437 "parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 77 "parser.y" /* yacc.c:1646  */
    {(yyval.stmt) = (yyvsp[0].stmt);}
#line 1443 "parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 78 "parser.y" /* yacc.c:1646  */
    {(yyval.stmt) = (yyvsp[0].stmt);}
#line 1449 "parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 79 "parser.y" /* yacc.c:1646  */
    {(yyval.stmt) = (yyvsp[0].stmt);}
#line 1455 "parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 80 "parser.y" /* yacc.c:1646  */
    {(yyval.stmt) = new ReturnStatementNode(NULL);}
#line 1461 "parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 81 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new ReturnStatementNode((yyvsp[-1].expr)); }
#line 1467 "parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 84 "parser.y" /* yacc.c:1646  */
    {  (yyval.block) = new BlockNode(); }
#line 1473 "parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 85 "parser.y" /* yacc.c:1646  */
    { (yyval.block) = (yyvsp[-1].block); emptyMap();  }
#line 1479 "parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 88 "parser.y" /* yacc.c:1646  */
    { (yyvsp[0].ident)->_type = (yyvsp[-1].ident)->_type;  (yyval.stmt) = new VariableDeclarationNode(*(yyvsp[-1].ident), *(yyvsp[0].ident)); addNewVar((yyvsp[0].ident)->name, (yyvsp[0].ident)->_type);}
#line 1485 "parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 89 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].ident)->_type = (yyvsp[-3].ident)->_type; (yyval.stmt) = new VariableDeclarationNode(*(yyvsp[-3].ident), *(yyvsp[-2].ident), (yyvsp[0].expr));  addNewVar((yyvsp[-2].ident)->name, (yyvsp[-2].ident)->_type);  }
#line 1491 "parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 93 "parser.y" /* yacc.c:1646  */
    { (yyval.ident) = new IdentifierNode(*(yyvsp[0].string),E_INT) ; delete (yyvsp[0].string);}
#line 1497 "parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 94 "parser.y" /* yacc.c:1646  */
    {  (yyval.ident) = new IdentifierNode(*(yyvsp[0].string), E_FLOAT) ; delete (yyvsp[0].string);}
#line 1503 "parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 95 "parser.y" /* yacc.c:1646  */
    {  (yyval.ident) = new IdentifierNode(*(yyvsp[0].string), E_CHAR) ; delete (yyvsp[0].string);}
#line 1509 "parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 96 "parser.y" /* yacc.c:1646  */
    {  (yyval.ident) = new IdentifierNode(*(yyvsp[0].string),E_VOID) ; delete (yyvsp[0].string);}
#line 1515 "parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 99 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new ArrayDecNode((yyvsp[-4].ident), (yyvsp[-3].ident), atol((yyvsp[-1].string)->c_str()));}
#line 1521 "parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 100 "parser.y" /* yacc.c:1646  */
    {  (yyval.stmt) = new ArrayDecNode((yyvsp[-5].ident), (yyvsp[-4].ident), *(yyvsp[0].string)); }
#line 1527 "parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 101 "parser.y" /* yacc.c:1646  */
    {  (yyval.stmt) = new ArrayDecNode((yyvsp[-7].ident), (yyvsp[-6].ident), (yyvsp[-1].exprs));}
#line 1533 "parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 104 "parser.y" /* yacc.c:1646  */
    { (yyval.exprs) = new std::vector<ExpressionNode*>(); }
#line 1539 "parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 105 "parser.y" /* yacc.c:1646  */
    { (yyval.exprs) = new std::vector<ExpressionNode*>(); (yyval.exprs)->push_back((yyvsp[0].expr)); }
#line 1545 "parser.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 106 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].exprs)->push_back((yyvsp[0].expr)); (yyval.exprs) = (yyvsp[-2].exprs); }
#line 1551 "parser.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 109 "parser.y" /* yacc.c:1646  */
    { (yyval.stmt) = new FunctionDeclarationNode(*(yyvsp[-5].ident), *(yyvsp[-4].ident), *(yyvsp[-2].varvec), *(yyvsp[0].block)); delete (yyvsp[-2].varvec); }
#line 1557 "parser.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 113 "parser.y" /* yacc.c:1646  */
    {  (yyval.stmt) = new ExternDeclarationNode(*(yyvsp[-4].ident), *(yyvsp[-3].ident), *(yyvsp[-1].varvec)); delete (yyvsp[-1].varvec);  }
#line 1563 "parser.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 116 "parser.y" /* yacc.c:1646  */
    { (yyval.varvec) = new VariableList(); }
#line 1569 "parser.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 117 "parser.y" /* yacc.c:1646  */
    { (yyval.varvec) = new VariableList(); (yyval.varvec)->push_back((yyvsp[0].var_dec)); }
#line 1575 "parser.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 118 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].varvec)->push_back((yyvsp[0].var_dec)); }
#line 1581 "parser.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 121 "parser.y" /* yacc.c:1646  */
    { (yyval.ident) = new IdentifierNode(*(yyvsp[0].string)); setVarType((yyval.ident)); delete (yyvsp[0].string);  }
#line 1587 "parser.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 124 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new IntegerNode(atoi((yyvsp[0].string)->c_str()));(yyval.expr)->_type = E_INT; delete (yyvsp[0].string); }
#line 1593 "parser.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 125 "parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = new FloatNode(atof((yyvsp[0].string)->c_str()));(yyval.expr)->_type = E_FLOAT; delete (yyvsp[0].string);}
#line 1599 "parser.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 126 "parser.y" /* yacc.c:1646  */
    {  (yyval.expr) = new CharNode((yyvsp[0].string)->c_str()[1]); (yyval.expr)->_type = E_CHAR ;delete (yyvsp[0].string); }
#line 1605 "parser.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 130 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new AssignmentNode(*(yyvsp[-2].ident), *(yyvsp[0].expr)); setVarType((yyvsp[-2].ident)); (yyval.expr)->_type = (yyvsp[-2].ident)->_type;}
#line 1611 "parser.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 131 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new MethodCallNode(*(yyvsp[-3].ident), *(yyvsp[-1].exprvec)); addNewVar((yyvsp[-3].ident)->name, E_FUNC); setVarType((yyvsp[-3].ident)); (yyval.expr)->_type = (yyvsp[-3].ident)->_type;delete (yyvsp[-1].exprvec); }
#line 1617 "parser.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 132 "parser.y" /* yacc.c:1646  */
    { setVarType((yyvsp[0].ident)) ; (yyval.expr) = (yyvsp[0].ident); }
#line 1623 "parser.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 133 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1629 "parser.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 134 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr)); }
#line 1635 "parser.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 135 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr)); }
#line 1641 "parser.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 136 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr)); }
#line 1647 "parser.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 137 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr)); }
#line 1653 "parser.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 138 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr)); }
#line 1659 "parser.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 139 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[0].expr); }
#line 1665 "parser.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 140 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = (yyvsp[-1].expr); }
#line 1671 "parser.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 141 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new IndexExprNode((yyvsp[-3].ident), (yyvsp[-1].expr)); (yyval.expr)->_type = (yyvsp[-3].ident)->_type; }
#line 1677 "parser.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 142 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new IndexExprNode((yyvsp[-5].ident), (yyvsp[-3].expr), (yyvsp[0].expr)); (yyval.expr)->_type = (yyvsp[-5].ident)->_type; }
#line 1683 "parser.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 148 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr)); }
#line 1689 "parser.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 149 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr)); }
#line 1695 "parser.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 150 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr)); }
#line 1701 "parser.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 151 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr)); }
#line 1707 "parser.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 152 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr)); }
#line 1713 "parser.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 153 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr)); }
#line 1719 "parser.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 154 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr)); }
#line 1725 "parser.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 155 "parser.y" /* yacc.c:1646  */
    { (yyval.expr) = new BinaryOperatorNode(*(yyvsp[-2].expr), (yyvsp[-1].token), *(yyvsp[0].expr)); }
#line 1731 "parser.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 158 "parser.y" /* yacc.c:1646  */
    { (yyval.exprvec) = new ExpressionList(); }
#line 1737 "parser.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 159 "parser.y" /* yacc.c:1646  */
    { (yyval.exprvec) = new ExpressionList(); (yyval.exprvec)->push_back((yyvsp[0].expr)); }
#line 1743 "parser.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 160 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-2].exprvec)->push_back((yyvsp[0].expr)); }
#line 1749 "parser.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 164 "parser.y" /* yacc.c:1646  */
    {(yyval.stmt) = new IfNode((yyvsp[-2].expr), (yyvsp[0].block));}
#line 1755 "parser.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 165 "parser.y" /* yacc.c:1646  */
    { }
#line 1761 "parser.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 166 "parser.y" /* yacc.c:1646  */
    {(yyval.stmt) = new IfElseNode((yyvsp[-3].expr), (yyvsp[-1].block), (yyvsp[0].block));}
#line 1767 "parser.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 170 "parser.y" /* yacc.c:1646  */
    { }
#line 1773 "parser.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 171 "parser.y" /* yacc.c:1646  */
    { }
#line 1779 "parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 172 "parser.y" /* yacc.c:1646  */
    { }
#line 1785 "parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 175 "parser.y" /* yacc.c:1646  */
    {(yyval.block) = (yyvsp[0].block);}
#line 1791 "parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 178 "parser.y" /* yacc.c:1646  */
    {(yyval.stmt) = new ForNode((yyvsp[-6].expr),(yyvsp[-4].expr),(yyvsp[-2].expr),(yyvsp[0].block));}
#line 1797 "parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 181 "parser.y" /* yacc.c:1646  */
    {(yyval.stmt) = new WhileNode((yyvsp[-2].expr), (yyvsp[0].block));}
#line 1803 "parser.cpp" /* yacc.c:1646  */
    break;


#line 1807 "parser.cpp" /* yacc.c:1646  */
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

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
  return yyresult;
}
#line 185 "parser.y" /* yacc.c:1906  */


void emptyMap(){
  varTable.clear();
}

void addNewVar(string name, E_TYPE type) {
  map<string, E_TYPE>::iterator it;
  it = varTable.find(name);
  if (it == varTable.end()) {
    varTable[name] = type;
  } else if (type == E_FUNC) {
    varTable[name] = type;
  } else {
    success_flag = false;
    cout << "line " << lineNo << ": redefinition of variable " << name << " from (" << typeStr((*it).second) << ") to (" << typeStr(type) << ")." << endl;
    varTable[name] = type;
  }
}
string typeStr(E_TYPE type) {
    switch (type) {
    case E_VOID:
        return "void";
    case E_INT:
        return "int";
    case E_CHAR:
        return "char";
    case E_FLOAT:
        return "float";
    case E_FUNC:
        return "function part";
    default:
        return "unknown";
    }
}

void setVarType(IdentifierNode *var){
  map<string, E_TYPE>::iterator it;
  it = varTable.find(var->name);
  if (it == varTable.end()) {
    var->_type = E_UNKNOWN;
  } else {
    var->_type = (*it).second;
  }
}

void printVarTable() {
  std::map<std::string, E_TYPE>::iterator it;
  for (it = varTable.begin(); it != varTable.end(); it++) {
    cout << (*it).first << " : " << typeStr((*it).second) << std::endl;
  }
}

