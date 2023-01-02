/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* "%code top" blocks.  */
#line 1 "src/parser.y"

    #include <iostream>
    #include <assert.h>
    #include <stack>
    #include "parser.h"
    extern Ast ast;
    int yylex();
    int yyerror( char const * );
    std::stack<DeclExpr*> stk;
    std::stack<StmtNode*> whileStk;
    DeclExpr* top;
    int whileCnt = 0; 

#line 82 "src/parser.cpp"




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

#include "parser.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_DECI = 4,                       /* DECI  */
  YYSYMBOL_OCT = 5,                        /* OCT  */
  YYSYMBOL_HEX = 6,                        /* HEX  */
  YYSYMBOL_FNUM = 7,                       /* FNUM  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_ELSE = 9,                       /* ELSE  */
  YYSYMBOL_DO = 10,                        /* DO  */
  YYSYMBOL_WHILE = 11,                     /* WHILE  */
  YYSYMBOL_FOR = 12,                       /* FOR  */
  YYSYMBOL_BREAK = 13,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 14,                  /* CONTINUE  */
  YYSYMBOL_CONST = 15,                     /* CONST  */
  YYSYMBOL_INT = 16,                       /* INT  */
  YYSYMBOL_FLOAT = 17,                     /* FLOAT  */
  YYSYMBOL_VOID = 18,                      /* VOID  */
  YYSYMBOL_LPAREN = 19,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 20,                    /* RPAREN  */
  YYSYMBOL_LBRACE = 21,                    /* LBRACE  */
  YYSYMBOL_RBRACE = 22,                    /* RBRACE  */
  YYSYMBOL_LBRACK = 23,                    /* LBRACK  */
  YYSYMBOL_RBRACK = 24,                    /* RBRACK  */
  YYSYMBOL_SEMI = 25,                      /* SEMI  */
  YYSYMBOL_COMMA = 26,                     /* COMMA  */
  YYSYMBOL_ADD = 27,                       /* ADD  */
  YYSYMBOL_SUB = 28,                       /* SUB  */
  YYSYMBOL_OR = 29,                        /* OR  */
  YYSYMBOL_AND = 30,                       /* AND  */
  YYSYMBOL_LESS = 31,                      /* LESS  */
  YYSYMBOL_ASSIGN = 32,                    /* ASSIGN  */
  YYSYMBOL_EQ = 33,                        /* EQ  */
  YYSYMBOL_GRAEQ = 34,                     /* GRAEQ  */
  YYSYMBOL_LESEQ = 35,                     /* LESEQ  */
  YYSYMBOL_NEQ = 36,                       /* NEQ  */
  YYSYMBOL_PLUSASSIGN = 37,                /* PLUSASSIGN  */
  YYSYMBOL_MINUSASSIGN = 38,               /* MINUSASSIGN  */
  YYSYMBOL_MULASSIGN = 39,                 /* MULASSIGN  */
  YYSYMBOL_DIVASSIGN = 40,                 /* DIVASSIGN  */
  YYSYMBOL_GRA = 41,                       /* GRA  */
  YYSYMBOL_MUL = 42,                       /* MUL  */
  YYSYMBOL_DIV = 43,                       /* DIV  */
  YYSYMBOL_INCRE = 44,                     /* INCRE  */
  YYSYMBOL_DECRE = 45,                     /* DECRE  */
  YYSYMBOL_MOD = 46,                       /* MOD  */
  YYSYMBOL_NOT = 47,                       /* NOT  */
  YYSYMBOL_RETURN = 48,                    /* RETURN  */
  YYSYMBOL_THEN = 49,                      /* THEN  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_Program = 51,                   /* Program  */
  YYSYMBOL_Stmts = 52,                     /* Stmts  */
  YYSYMBOL_Stmt = 53,                      /* Stmt  */
  YYSYMBOL_LVal = 54,                      /* LVal  */
  YYSYMBOL_AssignStmt = 55,                /* AssignStmt  */
  YYSYMBOL_ExprStmt = 56,                  /* ExprStmt  */
  YYSYMBOL_BlockStmt = 57,                 /* BlockStmt  */
  YYSYMBOL_58_1 = 58,                      /* $@1  */
  YYSYMBOL_BlankStmt = 59,                 /* BlankStmt  */
  YYSYMBOL_IfStmt = 60,                    /* IfStmt  */
  YYSYMBOL_WhileStmt = 61,                 /* WhileStmt  */
  YYSYMBOL_62_2 = 62,                      /* @2  */
  YYSYMBOL_ReturnStmt = 63,                /* ReturnStmt  */
  YYSYMBOL_BreakStmt = 64,                 /* BreakStmt  */
  YYSYMBOL_ContinueStmt = 65,              /* ContinueStmt  */
  YYSYMBOL_Exp = 66,                       /* Exp  */
  YYSYMBOL_Cond = 67,                      /* Cond  */
  YYSYMBOL_PrimaryExp = 68,                /* PrimaryExp  */
  YYSYMBOL_UnaryExp = 69,                  /* UnaryExp  */
  YYSYMBOL_MulExp = 70,                    /* MulExp  */
  YYSYMBOL_AddExp = 71,                    /* AddExp  */
  YYSYMBOL_RelExp = 72,                    /* RelExp  */
  YYSYMBOL_EqExp = 73,                     /* EqExp  */
  YYSYMBOL_LAndExp = 74,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 75,                    /* LOrExp  */
  YYSYMBOL_ConstExp = 76,                  /* ConstExp  */
  YYSYMBOL_Type = 77,                      /* Type  */
  YYSYMBOL_FuncRParams = 78,               /* FuncRParams  */
  YYSYMBOL_MFuncFParams = 79,              /* MFuncFParams  */
  YYSYMBOL_FuncFParams = 80,               /* FuncFParams  */
  YYSYMBOL_FuncFParam = 81,                /* FuncFParam  */
  YYSYMBOL_DeclStmt = 82,                  /* DeclStmt  */
  YYSYMBOL_ConstDecl = 83,                 /* ConstDecl  */
  YYSYMBOL_ConstList = 84,                 /* ConstList  */
  YYSYMBOL_ConstDef = 85,                  /* ConstDef  */
  YYSYMBOL_ConstInitVal = 86,              /* ConstInitVal  */
  YYSYMBOL_VarList = 87,                   /* VarList  */
  YYSYMBOL_VarDecl = 88,                   /* VarDecl  */
  YYSYMBOL_VarDef = 89,                    /* VarDef  */
  YYSYMBOL_FuncDef = 90,                   /* FuncDef  */
  YYSYMBOL_91_3 = 91,                      /* $@3  */
  YYSYMBOL_92_4 = 92                       /* @4  */
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

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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
#define YYFINAL  58
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   218

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  88
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  145

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   304


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
      45,    46,    47,    48,    49
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    49,    49,    54,    55,    60,    61,    62,    63,    64,
      65,    66,    67,    72,    77,    78,    81,    96,   101,   107,
     106,   116,   121,   126,   129,   135,   135,   151,   155,   160,
     165,   171,   175,   179,   183,   186,   190,   194,   198,   205,
     206,   216,   227,   228,   232,   239,   241,   247,   253,   261,
     263,   269,   277,   279,   285,   291,   297,   305,   307,   313,
     321,   323,   331,   333,   341,   344,   348,   353,   354,   359,
     360,   362,   366,   369,   381,   383,   388,   394,   396,   402,
     415,   421,   423,   430,   436,   446,   458,   462,   458
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "DECI", "OCT",
  "HEX", "FNUM", "IF", "ELSE", "DO", "WHILE", "FOR", "BREAK", "CONTINUE",
  "CONST", "INT", "FLOAT", "VOID", "LPAREN", "RPAREN", "LBRACE", "RBRACE",
  "LBRACK", "RBRACK", "SEMI", "COMMA", "ADD", "SUB", "OR", "AND", "LESS",
  "ASSIGN", "EQ", "GRAEQ", "LESEQ", "NEQ", "PLUSASSIGN", "MINUSASSIGN",
  "MULASSIGN", "DIVASSIGN", "GRA", "MUL", "DIV", "INCRE", "DECRE", "MOD",
  "NOT", "RETURN", "THEN", "$accept", "Program", "Stmts", "Stmt", "LVal",
  "AssignStmt", "ExprStmt", "BlockStmt", "$@1", "BlankStmt", "IfStmt",
  "WhileStmt", "@2", "ReturnStmt", "BreakStmt", "ContinueStmt", "Exp",
  "Cond", "PrimaryExp", "UnaryExp", "MulExp", "AddExp", "RelExp", "EqExp",
  "LAndExp", "LOrExp", "ConstExp", "Type", "FuncRParams", "MFuncFParams",
  "FuncFParams", "FuncFParam", "DeclStmt", "ConstDecl", "ConstList",
  "ConstDef", "ConstInitVal", "VarList", "VarDecl", "VarDef", "FuncDef",
  "$@3", "@4", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-40)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-87)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     145,     5,   -40,   -40,   -40,   -40,     8,    17,   -15,    20,
       7,   -40,   -40,   171,    25,   -40,   171,   171,   171,     1,
      51,   145,   -40,    30,   -40,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,    49,   -40,   -40,   -11,    26,    75,   -40,
     -40,   -40,   -40,    36,   171,   171,   -40,   -40,    82,   -40,
      66,   -40,   145,   -40,   -40,   -40,   -40,    63,   -40,   -40,
     171,   -40,   171,   171,   171,   171,   171,    -2,    -7,   -40,
     -40,   -40,    -4,    69,    26,     3,    13,    60,    62,    72,
      61,    32,   -40,   -40,   107,   -40,    70,   -40,   -40,   -40,
     -11,   -11,   171,    77,   -40,    91,   -40,   171,   145,   171,
     171,   171,   171,   171,   171,   171,   171,   -40,   171,   -40,
      82,   -40,   -40,   -40,     7,    65,   -40,   -40,    90,    26,
      26,    26,    26,     3,     3,    13,    60,   145,    26,   -40,
     -40,   -40,    97,    81,    76,   -40,   145,   -40,   -40,   -40,
       7,   -40,    83,   -40,   -40
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    16,    35,    37,    36,    38,     0,     0,     0,     0,
       0,    65,    66,     0,    19,    22,     0,     0,     0,     0,
       0,     2,     3,    34,     5,     6,     7,     8,     9,    10,
      11,    12,    13,     0,    39,    45,    49,    31,     0,    14,
      75,    74,    15,     0,     0,     0,    29,    30,     0,    34,
       0,    21,     0,    42,    43,    44,    27,     0,     1,     4,
       0,    18,     0,     0,     0,     0,     0,    84,     0,    81,
      41,    67,     0,     0,    52,    57,    60,    62,    32,     0,
       0,     0,    77,    33,     0,    28,     0,    46,    47,    48,
      50,    51,     0,     0,    83,     0,    40,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    25,     0,    76,
       0,    20,    17,    85,    70,    84,    82,    68,    23,    53,
      56,    55,    54,    58,    59,    61,    63,     0,    64,    80,
      79,    78,     0,     0,    69,    72,     0,    26,    73,    87,
       0,    24,     0,    71,    88
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -40,   -40,    54,   -19,     0,   -40,   -40,   -39,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,   -10,    64,   -40,    -3,
      11,   -33,   -23,     2,    10,   -40,   -40,    -9,   -40,   -40,
     -40,   -21,   -40,   -40,   -40,    14,   -40,   -40,   -40,    35,
     -40,   -40,   -40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,    20,    21,    22,    49,    24,    25,    26,    52,    27,
      28,    29,   127,    30,    31,    32,    33,    73,    34,    35,
      36,    37,    75,    76,    77,    78,   129,    38,    72,   133,
     134,   135,    39,    40,    81,    82,   130,    68,    41,    69,
      42,    93,   142
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,    48,    59,    50,     1,     2,     3,     4,     5,    57,
      46,    74,    74,    53,    54,    55,    96,   -86,    94,    95,
      13,    23,    97,    11,    43,    12,    56,    44,    16,    17,
      92,    62,    63,    71,    99,    64,    45,   100,   101,     1,
       2,     3,     4,     5,   102,    47,   103,    51,    18,   104,
      86,    58,    23,    65,    66,    13,    70,   109,   110,    87,
      88,    89,    60,    16,    17,    59,   119,   120,   121,   122,
      74,    74,    74,    74,    61,   128,    90,    91,    67,   118,
     123,   124,   113,    18,    23,    80,    83,   117,    85,    98,
     105,   106,   107,   108,   115,   112,   114,    92,    23,   136,
     138,   139,   140,   144,    14,   132,    84,   125,   137,    79,
       1,     2,     3,     4,     5,     6,   126,   141,     7,   143,
       8,     9,    10,    11,   131,    12,    13,    23,    14,   111,
     116,   132,    15,     0,    16,    17,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,     6,    18,    19,     7,     0,     8,     9,
      10,    11,     0,    12,    13,     0,    14,     0,     0,     0,
      15,     0,    16,    17,     1,     2,     3,     4,     5,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      13,     0,    18,    19,     0,     0,     0,     0,    16,    17,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    18
};

static const yytype_int16 yycheck[] =
{
       0,    10,    21,    13,     3,     4,     5,     6,     7,    19,
      25,    44,    45,    16,    17,    18,    20,    19,    25,    26,
      19,    21,    26,    16,    19,    18,    25,    19,    27,    28,
      32,    42,    43,    43,    31,    46,    19,    34,    35,     3,
       4,     5,     6,     7,    41,    25,    33,    22,    47,    36,
      60,     0,    52,    27,    28,    19,    20,    25,    26,    62,
      63,    64,    32,    27,    28,    84,    99,   100,   101,   102,
     103,   104,   105,   106,    25,   108,    65,    66,     3,    98,
     103,   104,    92,    47,    84,     3,    20,    97,    25,    20,
      30,    29,    20,    32,     3,    25,    19,    32,    98,     9,
       3,    20,    26,   142,    21,   114,    52,   105,   127,    45,
       3,     4,     5,     6,     7,     8,   106,   136,    11,   140,
      13,    14,    15,    16,   110,    18,    19,   127,    21,    22,
      95,   140,    25,    -1,    27,    28,   136,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,    47,    48,    11,    -1,    13,    14,
      15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      25,    -1,    27,    28,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    47,    48,    -1,    -1,    -1,    -1,    27,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    47
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     8,    11,    13,    14,
      15,    16,    18,    19,    21,    25,    27,    28,    47,    48,
      51,    52,    53,    54,    55,    56,    57,    59,    60,    61,
      63,    64,    65,    66,    68,    69,    70,    71,    77,    82,
      83,    88,    90,    19,    19,    19,    25,    25,    77,    54,
      66,    22,    58,    69,    69,    69,    25,    66,     0,    53,
      32,    25,    42,    43,    46,    27,    28,     3,    87,    89,
      20,    66,    78,    67,    71,    72,    73,    74,    75,    67,
       3,    84,    85,    20,    52,    25,    66,    69,    69,    69,
      70,    70,    32,    91,    25,    26,    20,    26,    20,    31,
      34,    35,    41,    33,    36,    30,    29,    20,    32,    25,
      26,    22,    25,    66,    19,     3,    89,    66,    53,    71,
      71,    71,    71,    72,    72,    73,    74,    62,    71,    76,
      86,    85,    77,    79,    80,    81,     9,    53,     3,    20,
      26,    53,    92,    81,    57
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    53,    53,    53,
      53,    53,    53,    53,    53,    53,    54,    55,    56,    58,
      57,    57,    59,    60,    60,    62,    61,    63,    63,    64,
      65,    66,    67,    68,    68,    68,    68,    68,    68,    69,
      69,    69,    69,    69,    69,    70,    70,    70,    70,    71,
      71,    71,    72,    72,    72,    72,    72,    73,    73,    73,
      74,    74,    75,    75,    76,    77,    77,    78,    78,    79,
      79,    80,    80,    81,    82,    82,    83,    84,    84,    85,
      86,    87,    87,    88,    89,    89,    91,    92,    90
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     2,     0,
       4,     2,     1,     5,     7,     0,     6,     2,     3,     2,
       2,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       4,     3,     2,     2,     2,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     1,     1,     1,     3,     1,
       0,     3,     1,     2,     1,     1,     4,     1,     3,     3,
       1,     1,     3,     3,     1,     3,     0,     0,     8
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
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
  case 2: /* Program: Stmts  */
#line 49 "src/parser.y"
            {
        ast.setRoot((yyvsp[0].stmttype));
    }
#line 1285 "src/parser.cpp"
    break;

  case 3: /* Stmts: Stmt  */
#line 54 "src/parser.y"
           {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1291 "src/parser.cpp"
    break;

  case 4: /* Stmts: Stmts Stmt  */
#line 55 "src/parser.y"
                {
        (yyval.stmttype) = new SeqNode((yyvsp[-1].stmttype), (yyvsp[0].stmttype));
    }
#line 1299 "src/parser.cpp"
    break;

  case 5: /* Stmt: AssignStmt  */
#line 60 "src/parser.y"
                 {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1305 "src/parser.cpp"
    break;

  case 6: /* Stmt: ExprStmt  */
#line 61 "src/parser.y"
               {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1311 "src/parser.cpp"
    break;

  case 7: /* Stmt: BlockStmt  */
#line 62 "src/parser.y"
                {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1317 "src/parser.cpp"
    break;

  case 8: /* Stmt: BlankStmt  */
#line 63 "src/parser.y"
                {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1323 "src/parser.cpp"
    break;

  case 9: /* Stmt: IfStmt  */
#line 64 "src/parser.y"
             {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1329 "src/parser.cpp"
    break;

  case 10: /* Stmt: WhileStmt  */
#line 65 "src/parser.y"
                {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1335 "src/parser.cpp"
    break;

  case 11: /* Stmt: ReturnStmt  */
#line 66 "src/parser.y"
                 {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1341 "src/parser.cpp"
    break;

  case 12: /* Stmt: BreakStmt  */
#line 67 "src/parser.y"
                {
        if(!whileCnt)
            fprintf(stderr, "\'break\' statement not in while statement\n"); //while计数器为0 表示不在while循环中
        (yyval.stmttype)=(yyvsp[0].stmttype);
    }
#line 1351 "src/parser.cpp"
    break;

  case 13: /* Stmt: ContinueStmt  */
#line 72 "src/parser.y"
                   {
        if(!whileCnt)
            fprintf(stderr, "\'break\' statement not in while statement\n"); //同上
        (yyval.stmttype)=(yyvsp[0].stmttype);
    }
#line 1361 "src/parser.cpp"
    break;

  case 14: /* Stmt: DeclStmt  */
#line 77 "src/parser.y"
               {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1367 "src/parser.cpp"
    break;

  case 15: /* Stmt: FuncDef  */
#line 78 "src/parser.y"
              {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1373 "src/parser.cpp"
    break;

  case 16: /* LVal: ID  */
#line 81 "src/parser.y"
         {
        SymbolEntry *se;
        se = identifiers->lookup((yyvsp[0].strtype));
        if(se == nullptr)
        {
            fprintf(stderr, "identifier \"%s\" is undefined\n", (char*)(yyvsp[0].strtype));
            delete [](char*)(yyvsp[0].strtype);
        }
        (yyval.exprtype) = new Id(se);
        delete [](yyvsp[0].strtype);
    }
#line 1389 "src/parser.cpp"
    break;

  case 17: /* AssignStmt: LVal ASSIGN Exp SEMI  */
#line 96 "src/parser.y"
                         {
        (yyval.stmttype) = new AssignStmt((yyvsp[-3].exprtype), (yyvsp[-1].exprtype));
    }
#line 1397 "src/parser.cpp"
    break;

  case 18: /* ExprStmt: Exp SEMI  */
#line 101 "src/parser.y"
               {
        (yyval.stmttype) = new ExprStmt((yyvsp[-1].exprtype));
    }
#line 1405 "src/parser.cpp"
    break;

  case 19: /* $@1: %empty  */
#line 107 "src/parser.y"
        {identifiers = new SymbolTable(identifiers);}
#line 1411 "src/parser.cpp"
    break;

  case 20: /* BlockStmt: LBRACE $@1 Stmts RBRACE  */
#line 109 "src/parser.y"
        {
            (yyval.stmttype) = new CompoundStmt((yyvsp[-1].stmttype));
            SymbolTable *top = identifiers;
            identifiers = identifiers->getPrev();
            delete top;
        }
#line 1422 "src/parser.cpp"
    break;

  case 21: /* BlockStmt: LBRACE RBRACE  */
#line 116 "src/parser.y"
                   {
        (yyval.stmttype) = new CompoundStmt();
    }
#line 1430 "src/parser.cpp"
    break;

  case 22: /* BlankStmt: SEMI  */
#line 121 "src/parser.y"
           {
        (yyval.stmttype) = new BlankStmt();
    }
#line 1438 "src/parser.cpp"
    break;

  case 23: /* IfStmt: IF LPAREN Cond RPAREN Stmt  */
#line 126 "src/parser.y"
                                            {
        (yyval.stmttype) = new IfStmt((yyvsp[-2].exprtype), (yyvsp[0].stmttype));
    }
#line 1446 "src/parser.cpp"
    break;

  case 24: /* IfStmt: IF LPAREN Cond RPAREN Stmt ELSE Stmt  */
#line 129 "src/parser.y"
                                           {
        (yyval.stmttype) = new IfElseStmt((yyvsp[-4].exprtype), (yyvsp[-2].stmttype), (yyvsp[0].stmttype));
    }
#line 1454 "src/parser.cpp"
    break;

  case 25: /* @2: %empty  */
#line 135 "src/parser.y"
                               {
        whileCnt++;
        WhileStmt *whileNode = new WhileStmt((yyvsp[-1].exprtype));
        (yyval.stmttype) = whileNode;
        whileStk.push(whileNode);
    }
#line 1465 "src/parser.cpp"
    break;

  case 26: /* WhileStmt: WHILE LPAREN Cond RPAREN @2 Stmt  */
#line 141 "src/parser.y"
        {
        StmtNode *whileNode = (yyvsp[-1].stmttype); 
        ((WhileStmt*)whileNode)->setStmt((yyvsp[0].stmttype));
        (yyval.stmttype)=whileNode;
        whileStk.pop();
        whileCnt--;
    }
#line 1477 "src/parser.cpp"
    break;

  case 27: /* ReturnStmt: RETURN SEMI  */
#line 151 "src/parser.y"
                {
        (yyval.stmttype) = new ReturnStmt();
    }
#line 1485 "src/parser.cpp"
    break;

  case 28: /* ReturnStmt: RETURN Exp SEMI  */
#line 155 "src/parser.y"
                    {
        (yyval.stmttype) = new ReturnStmt((yyvsp[-1].exprtype));
    }
#line 1493 "src/parser.cpp"
    break;

  case 29: /* BreakStmt: BREAK SEMI  */
#line 160 "src/parser.y"
                 {
       (yyval.stmttype) = new BreakStmt(whileStk.top());
    }
#line 1501 "src/parser.cpp"
    break;

  case 30: /* ContinueStmt: CONTINUE SEMI  */
#line 165 "src/parser.y"
                    {
        (yyval.stmttype) = new ContinueStmt(whileStk.top());
    }
#line 1509 "src/parser.cpp"
    break;

  case 31: /* Exp: AddExp  */
#line 171 "src/parser.y"
           {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1515 "src/parser.cpp"
    break;

  case 32: /* Cond: LOrExp  */
#line 175 "src/parser.y"
           {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1521 "src/parser.cpp"
    break;

  case 33: /* PrimaryExp: LPAREN Exp RPAREN  */
#line 179 "src/parser.y"
                      {
        (yyval.exprtype) = (yyvsp[-1].exprtype);
    }
#line 1529 "src/parser.cpp"
    break;

  case 34: /* PrimaryExp: LVal  */
#line 183 "src/parser.y"
         {
        (yyval.exprtype) = (yyvsp[0].exprtype);
    }
#line 1537 "src/parser.cpp"
    break;

  case 35: /* PrimaryExp: DECI  */
#line 186 "src/parser.y"
           {
        SymbolEntry *se = new ConstantSymbolEntry(TypeSystem::intType, (yyvsp[0].itype));
        (yyval.exprtype) = new Constant(se);
    }
#line 1546 "src/parser.cpp"
    break;

  case 36: /* PrimaryExp: HEX  */
#line 190 "src/parser.y"
          {
        SymbolEntry *se = new ConstantSymbolEntry(TypeSystem::intType, (yyvsp[0].itype));
        (yyval.exprtype) = new Constant(se);
    }
#line 1555 "src/parser.cpp"
    break;

  case 37: /* PrimaryExp: OCT  */
#line 194 "src/parser.y"
          {
        SymbolEntry *se = new ConstantSymbolEntry(TypeSystem::intType, (yyvsp[0].itype));
        (yyval.exprtype) = new Constant(se);
    }
#line 1564 "src/parser.cpp"
    break;

  case 38: /* PrimaryExp: FNUM  */
#line 198 "src/parser.y"
           {
        SymbolEntry *se = new ConstantSymbolEntry(TypeSystem::floatType, (yyvsp[0].ftype));
        (yyval.exprtype) = new Constant(se);
    }
#line 1573 "src/parser.cpp"
    break;

  case 39: /* UnaryExp: PrimaryExp  */
#line 205 "src/parser.y"
               {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1579 "src/parser.cpp"
    break;

  case 40: /* UnaryExp: ID LPAREN FuncRParams RPAREN  */
#line 206 "src/parser.y"
                                   {
        SymbolEntry* se;
        se = identifiers->lookup((yyvsp[-3].strtype));
        if(se == nullptr)
        {
            fprintf(stderr, "function \"%s\" is undefined\n", (char*)(yyvsp[-3].strtype));
            delete [](char*)(yyvsp[-3].strtype);
        }
        (yyval.exprtype) = new CallExpr(se, (yyvsp[-1].exprtype));
    }
#line 1594 "src/parser.cpp"
    break;

  case 41: /* UnaryExp: ID LPAREN RPAREN  */
#line 216 "src/parser.y"
                       {
        SymbolEntry* se;
        se = identifiers->lookup((yyvsp[-2].strtype));
        if(se == nullptr)
        {
            fprintf(stderr, "function \"%s\" is undefined\n", (char*)(yyvsp[-2].strtype));
            delete [](char*)(yyvsp[-2].strtype);
        }
        (yyval.exprtype) = new CallExpr(se);
    }
#line 1609 "src/parser.cpp"
    break;

  case 42: /* UnaryExp: ADD UnaryExp  */
#line 227 "src/parser.y"
                 {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1615 "src/parser.cpp"
    break;

  case 43: /* UnaryExp: SUB UnaryExp  */
#line 228 "src/parser.y"
                   {
        SymbolEntry* se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new UnaryExpr(se, UnaryExpr::SUB, (yyvsp[0].exprtype));
    }
#line 1624 "src/parser.cpp"
    break;

  case 44: /* UnaryExp: NOT UnaryExp  */
#line 232 "src/parser.y"
                   {
        SymbolEntry* se = new TemporarySymbolEntry(TypeSystem::boolType, SymbolTable::getLabel());
        (yyval.exprtype) = new UnaryExpr(se, UnaryExpr::NOT, (yyvsp[0].exprtype));
    }
#line 1633 "src/parser.cpp"
    break;

  case 45: /* MulExp: UnaryExp  */
#line 239 "src/parser.y"
             {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1639 "src/parser.cpp"
    break;

  case 46: /* MulExp: MulExp MUL UnaryExp  */
#line 242 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::MUL, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1648 "src/parser.cpp"
    break;

  case 47: /* MulExp: MulExp DIV UnaryExp  */
#line 248 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::DIV, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1657 "src/parser.cpp"
    break;

  case 48: /* MulExp: MulExp MOD UnaryExp  */
#line 254 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::MOD, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1666 "src/parser.cpp"
    break;

  case 49: /* AddExp: MulExp  */
#line 261 "src/parser.y"
           {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1672 "src/parser.cpp"
    break;

  case 50: /* AddExp: AddExp ADD MulExp  */
#line 264 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::ADD, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1681 "src/parser.cpp"
    break;

  case 51: /* AddExp: AddExp SUB MulExp  */
#line 270 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::intType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::SUB, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1690 "src/parser.cpp"
    break;

  case 52: /* RelExp: AddExp  */
#line 277 "src/parser.y"
           {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1696 "src/parser.cpp"
    break;

  case 53: /* RelExp: RelExp LESS AddExp  */
#line 280 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::boolType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::LESS, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1705 "src/parser.cpp"
    break;

  case 54: /* RelExp: RelExp GRA AddExp  */
#line 286 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::boolType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::GRA, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1714 "src/parser.cpp"
    break;

  case 55: /* RelExp: RelExp LESEQ AddExp  */
#line 292 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::boolType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::LESEQ, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1723 "src/parser.cpp"
    break;

  case 56: /* RelExp: RelExp GRAEQ AddExp  */
#line 298 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::boolType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::GRAEQ, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1732 "src/parser.cpp"
    break;

  case 57: /* EqExp: RelExp  */
#line 305 "src/parser.y"
           {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1738 "src/parser.cpp"
    break;

  case 58: /* EqExp: EqExp EQ RelExp  */
#line 308 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::boolType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::EQ, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1747 "src/parser.cpp"
    break;

  case 59: /* EqExp: EqExp NEQ RelExp  */
#line 314 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::boolType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::NEQ, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1756 "src/parser.cpp"
    break;

  case 60: /* LAndExp: EqExp  */
#line 321 "src/parser.y"
          {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1762 "src/parser.cpp"
    break;

  case 61: /* LAndExp: LAndExp AND EqExp  */
#line 324 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::boolType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::AND, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1771 "src/parser.cpp"
    break;

  case 62: /* LOrExp: LAndExp  */
#line 331 "src/parser.y"
            {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1777 "src/parser.cpp"
    break;

  case 63: /* LOrExp: LOrExp OR LAndExp  */
#line 334 "src/parser.y"
    {
        SymbolEntry *se = new TemporarySymbolEntry(TypeSystem::boolType, SymbolTable::getLabel());
        (yyval.exprtype) = new BinaryExpr(se, BinaryExpr::OR, (yyvsp[-2].exprtype), (yyvsp[0].exprtype));
    }
#line 1786 "src/parser.cpp"
    break;

  case 64: /* ConstExp: AddExp  */
#line 341 "src/parser.y"
           {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1792 "src/parser.cpp"
    break;

  case 65: /* Type: INT  */
#line 344 "src/parser.y"
          {
        (yyval.type) = TypeSystem::intType;
    }
#line 1800 "src/parser.cpp"
    break;

  case 66: /* Type: VOID  */
#line 348 "src/parser.y"
         {
        (yyval.type) = TypeSystem::voidType;
    }
#line 1808 "src/parser.cpp"
    break;

  case 67: /* FuncRParams: Exp  */
#line 353 "src/parser.y"
          {(yyval.exprtype) = (yyvsp[0].exprtype);}
#line 1814 "src/parser.cpp"
    break;

  case 68: /* FuncRParams: FuncRParams COMMA Exp  */
#line 354 "src/parser.y"
                            {
        (yyval.exprtype) = (yyvsp[-2].exprtype);
        (yyval.exprtype)->setNext((yyvsp[0].exprtype));
    }
#line 1823 "src/parser.cpp"
    break;

  case 69: /* MFuncFParams: FuncFParams  */
#line 359 "src/parser.y"
                  {(yyval.stmttype) = (yyvsp[0].stmttype);}
#line 1829 "src/parser.cpp"
    break;

  case 70: /* MFuncFParams: %empty  */
#line 360 "src/parser.y"
             {(yyval.stmttype) = nullptr;}
#line 1835 "src/parser.cpp"
    break;

  case 71: /* FuncFParams: FuncFParams COMMA FuncFParam  */
#line 362 "src/parser.y"
                                   {
        (yyval.stmttype) = (yyvsp[-2].stmttype);
        (yyval.stmttype)->setNext((yyvsp[0].stmttype));
    }
#line 1844 "src/parser.cpp"
    break;

  case 72: /* FuncFParams: FuncFParam  */
#line 366 "src/parser.y"
                 {(yyval.stmttype) = (yyvsp[0].stmttype);}
#line 1850 "src/parser.cpp"
    break;

  case 73: /* FuncFParam: Type ID  */
#line 369 "src/parser.y"
              {
        SymbolEntry* se;
        se = new IdentifierSymbolEntry((yyvsp[-1].type), (yyvsp[0].strtype), identifiers->getLevel());
        identifiers->install((yyvsp[0].strtype), se);
        ((IdentifierSymbolEntry*)se)->setLabel();
        ((IdentifierSymbolEntry*)se)->setAddr(new Operand(se));
        (yyval.stmttype) = new DeclStmt(new Id(se));
        delete [](yyvsp[0].strtype);
    }
#line 1864 "src/parser.cpp"
    break;

  case 74: /* DeclStmt: VarDecl  */
#line 381 "src/parser.y"
            {(yyval.stmttype) = (yyvsp[0].stmttype);}
#line 1870 "src/parser.cpp"
    break;

  case 75: /* DeclStmt: ConstDecl  */
#line 383 "src/parser.y"
              {(yyval.stmttype) = (yyvsp[0].stmttype);}
#line 1876 "src/parser.cpp"
    break;

  case 76: /* ConstDecl: CONST Type ConstList SEMI  */
#line 388 "src/parser.y"
                             {
        (yyval.stmttype)=(yyvsp[-1].stmttype);
    }
#line 1884 "src/parser.cpp"
    break;

  case 77: /* ConstList: ConstDef  */
#line 394 "src/parser.y"
             { (yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1890 "src/parser.cpp"
    break;

  case 78: /* ConstList: ConstList COMMA ConstDef  */
#line 396 "src/parser.y"
                             {
        (yyval.stmttype) = (yyvsp[-2].stmttype);
        (yyvsp[-2].stmttype)->setNext((yyvsp[0].stmttype));
    }
#line 1899 "src/parser.cpp"
    break;

  case 79: /* ConstDef: ID ASSIGN ConstInitVal  */
#line 402 "src/parser.y"
                             {
        SymbolEntry* se;
        se = new IdentifierSymbolEntry(TypeSystem::constIntType, (yyvsp[-2].strtype), identifiers->getLevel());
        if(!identifiers->install((yyvsp[-2].strtype), se))
            fprintf(stderr, "identifier \"%s\" is already defined\n", (char*)(yyvsp[-2].strtype));
        identifiers->install((yyvsp[-2].strtype), se);
        ((IdentifierSymbolEntry*)se)->setValue((yyvsp[0].exprtype)->getValue());
        (yyval.stmttype) = new DeclStmt(new Id(se), (yyvsp[0].exprtype));
        delete [](yyvsp[-2].strtype);
    }
#line 1914 "src/parser.cpp"
    break;

  case 80: /* ConstInitVal: ConstExp  */
#line 415 "src/parser.y"
             {
        (yyval.exprtype) = (yyvsp[0].exprtype);
    }
#line 1922 "src/parser.cpp"
    break;

  case 81: /* VarList: VarDef  */
#line 421 "src/parser.y"
           {(yyval.stmttype)=(yyvsp[0].stmttype);}
#line 1928 "src/parser.cpp"
    break;

  case 82: /* VarList: VarList COMMA VarDef  */
#line 423 "src/parser.y"
                         { 
        (yyval.stmttype)=(yyvsp[-2].stmttype); 
        (yyvsp[-2].stmttype)->setNext((yyvsp[0].stmttype));
    }
#line 1937 "src/parser.cpp"
    break;

  case 83: /* VarDecl: Type VarList SEMI  */
#line 430 "src/parser.y"
                      {
        (yyval.stmttype)=(yyvsp[-1].stmttype);
    }
#line 1945 "src/parser.cpp"
    break;

  case 84: /* VarDef: ID  */
#line 436 "src/parser.y"
       {
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, (yyvsp[0].strtype), identifiers->getLevel());
        if(!identifiers->install((yyvsp[0].strtype), se))
            fprintf(stderr, "identifier \"%s\" is already defined\n", (char*)(yyvsp[0].strtype));
        //identifiers->install($1, se);
        (yyval.stmttype) = new DeclStmt(new Id(se));
        delete [](yyvsp[0].strtype);
    }
#line 1959 "src/parser.cpp"
    break;

  case 85: /* VarDef: ID ASSIGN Exp  */
#line 446 "src/parser.y"
                  {
        SymbolEntry *se;
        se = new IdentifierSymbolEntry(TypeSystem::intType, (yyvsp[-2].strtype), identifiers->getLevel());
        if(!identifiers->install((yyvsp[-2].strtype), se))
            fprintf(stderr, "identifier \"%s\" is already defined\n", (char*)(yyvsp[-2].strtype));
        ((IdentifierSymbolEntry*)se)->setValue((yyvsp[0].exprtype)->getValue());
        (yyval.stmttype) = new DeclStmt(new Id(se), (yyvsp[0].exprtype));
        delete [](yyvsp[-2].strtype);
    }
#line 1973 "src/parser.cpp"
    break;

  case 86: /* $@3: %empty  */
#line 458 "src/parser.y"
            {
        identifiers = new SymbolTable(identifiers);
    }
#line 1981 "src/parser.cpp"
    break;

  case 87: /* @4: %empty  */
#line 462 "src/parser.y"
    {
        Type* funcType;
        std::vector<Type*> vec;
        std::vector<SymbolEntry*> vec1;
        DeclStmt* temp = (DeclStmt*)(yyvsp[-1].stmttype);
        while(temp){
            vec.push_back(temp->getId()->getSymbolEntry()->getType());
            vec1.push_back(temp->getId()->getSymbolEntry());
            temp = (DeclStmt*)(temp->getNext());
        }
        funcType = new FunctionType((yyvsp[-5].type), vec , vec1);
        SymbolEntry* se = new IdentifierSymbolEntry(funcType, (yyvsp[-4].strtype), identifiers->getPrev()->getLevel());
        
        if(!identifiers->getPrev()->install((yyvsp[-4].strtype), se)){
            fprintf(stderr, "redefinition of \'%s %s\'\n", (yyvsp[-4].strtype), se->getType()->toStr().c_str());
        }
        (yyval.se) = se;
    }
#line 2004 "src/parser.cpp"
    break;

  case 88: /* FuncDef: Type ID $@3 LPAREN MFuncFParams RPAREN @4 BlockStmt  */
#line 481 "src/parser.y"
    {
        (yyval.stmttype) = new FunctionDef((yyvsp[-1].se), (DeclStmt*)(yyvsp[-3].stmttype), (yyvsp[0].stmttype));
        SymbolTable* top = identifiers;
        identifiers = identifiers->getPrev();
        delete top;
        delete [](yyvsp[-6].strtype);
    }
#line 2016 "src/parser.cpp"
    break;


#line 2020 "src/parser.cpp"

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
  ++yynerrs;

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
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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

#line 489 "src/parser.y"


int yyerror(char const* message)
{
    std::cerr<<message<<std::endl;
    return -1;
}

