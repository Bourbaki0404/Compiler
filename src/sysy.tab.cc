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




/* First part of user prologue.  */
#line 9 "src/sysy.y"

#include <iostream>
#include <memory>
#include <string>
#include "ast.hh"
using namespace std;

void yyerror(ASTNode* & ast, const char *s);
extern int yylex(void);


#line 83 "src/sysy.tab.cc"

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

#include "sysy.tab.hh"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CONST = 3,                      /* CONST  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_VOID = 5,                       /* VOID  */
  YYSYMBOL_RETURN = 6,                     /* RETURN  */
  YYSYMBOL_IDENT = 7,                      /* IDENT  */
  YYSYMBOL_INT_CONST = 8,                  /* INT_CONST  */
  YYSYMBOL_LP = 9,                         /* LP  */
  YYSYMBOL_RP = 10,                        /* RP  */
  YYSYMBOL_LB = 11,                        /* LB  */
  YYSYMBOL_RB = 12,                        /* RB  */
  YYSYMBOL_LC = 13,                        /* LC  */
  YYSYMBOL_RC = 14,                        /* RC  */
  YYSYMBOL_COMMA = 15,                     /* COMMA  */
  YYSYMBOL_And = 16,                       /* And  */
  YYSYMBOL_OR = 17,                        /* OR  */
  YYSYMBOL_SEMICOLON = 18,                 /* SEMICOLON  */
  YYSYMBOL_IF = 19,                        /* IF  */
  YYSYMBOL_ELSE = 20,                      /* ELSE  */
  YYSYMBOL_WHILE = 21,                     /* WHILE  */
  YYSYMBOL_BREAK = 22,                     /* BREAK  */
  YYSYMBOL_CONTINUE = 23,                  /* CONTINUE  */
  YYSYMBOL_Plus = 24,                      /* Plus  */
  YYSYMBOL_Sub = 25,                       /* Sub  */
  YYSYMBOL_Mul = 26,                       /* Mul  */
  YYSYMBOL_Div = 27,                       /* Div  */
  YYSYMBOL_Mod = 28,                       /* Mod  */
  YYSYMBOL_GL = 29,                        /* GL  */
  YYSYMBOL_LL = 30,                        /* LL  */
  YYSYMBOL_LE = 31,                        /* LE  */
  YYSYMBOL_GE = 32,                        /* GE  */
  YYSYMBOL_EQ = 33,                        /* EQ  */
  YYSYMBOL_NE = 34,                        /* NE  */
  YYSYMBOL_Assign = 35,                    /* Assign  */
  YYSYMBOL_Not = 36,                       /* Not  */
  YYSYMBOL_YYACCEPT = 37,                  /* $accept  */
  YYSYMBOL_CompUnit = 38,                  /* CompUnit  */
  YYSYMBOL_Decl = 39,                      /* Decl  */
  YYSYMBOL_ConstDecl = 40,                 /* ConstDecl  */
  YYSYMBOL_ConstDeclTail = 41,             /* ConstDeclTail  */
  YYSYMBOL_Type = 42,                      /* Type  */
  YYSYMBOL_ConstDef = 43,                  /* ConstDef  */
  YYSYMBOL_ConstDefTail = 44,              /* ConstDefTail  */
  YYSYMBOL_ConstInitVal = 45,              /* ConstInitVal  */
  YYSYMBOL_ConstInitValTail = 46,          /* ConstInitValTail  */
  YYSYMBOL_ConstInitValTailTail = 47,      /* ConstInitValTailTail  */
  YYSYMBOL_VarDecl = 48,                   /* VarDecl  */
  YYSYMBOL_VarDeclTail = 49,               /* VarDeclTail  */
  YYSYMBOL_VarDef = 50,                    /* VarDef  */
  YYSYMBOL_VarDefGroup = 51,               /* VarDefGroup  */
  YYSYMBOL_InitVal = 52,                   /* InitVal  */
  YYSYMBOL_InitValTail = 53,               /* InitValTail  */
  YYSYMBOL_InitValTailTail = 54,           /* InitValTailTail  */
  YYSYMBOL_FuncDef = 55,                   /* FuncDef  */
  YYSYMBOL_FuncFParams = 56,               /* FuncFParams  */
  YYSYMBOL_FuncFParamsTail = 57,           /* FuncFParamsTail  */
  YYSYMBOL_FuncFParam = 58,                /* FuncFParam  */
  YYSYMBOL_FuncFParamTail = 59,            /* FuncFParamTail  */
  YYSYMBOL_FuncFParamTailTail = 60,        /* FuncFParamTailTail  */
  YYSYMBOL_Block = 61,                     /* Block  */
  YYSYMBOL_BlockItemTail = 62,             /* BlockItemTail  */
  YYSYMBOL_BlockItem = 63,                 /* BlockItem  */
  YYSYMBOL_Stmt = 64,                      /* Stmt  */
  YYSYMBOL_ReturnExp = 65,                 /* ReturnExp  */
  YYSYMBOL_Exp = 66,                       /* Exp  */
  YYSYMBOL_LVal = 67,                      /* LVal  */
  YYSYMBOL_LValTail = 68,                  /* LValTail  */
  YYSYMBOL_PrimaryExp = 69,                /* PrimaryExp  */
  YYSYMBOL_Number = 70,                    /* Number  */
  YYSYMBOL_UnaryExp = 71,                  /* UnaryExp  */
  YYSYMBOL_UnaryOp = 72,                   /* UnaryOp  */
  YYSYMBOL_FuncRParams = 73,               /* FuncRParams  */
  YYSYMBOL_FuncRParamsTail = 74,           /* FuncRParamsTail  */
  YYSYMBOL_MulExp = 75,                    /* MulExp  */
  YYSYMBOL_MulOp = 76,                     /* MulOp  */
  YYSYMBOL_AddExp = 77,                    /* AddExp  */
  YYSYMBOL_AddOp = 78,                     /* AddOp  */
  YYSYMBOL_RelExp = 79,                    /* RelExp  */
  YYSYMBOL_RelOp = 80,                     /* RelOp  */
  YYSYMBOL_EqExp = 81,                     /* EqExp  */
  YYSYMBOL_EqOp = 82,                      /* EqOp  */
  YYSYMBOL_LAndExp = 83,                   /* LAndExp  */
  YYSYMBOL_LOrExp = 84,                    /* LOrExp  */
  YYSYMBOL_ConstExp = 85                   /* ConstExp  */
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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   181

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  37
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  49
/* YYNRULES -- Number of rules.  */
#define YYNRULES  101
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  178

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


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
      35,    36
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    51,    51,    54,    57,    60,    66,    69,    75,    81,
      84,    90,    96,   102,   105,   110,   113,   119,   122,   127,
     130,   136,   142,   145,   151,   154,   160,   163,   170,   173,
     179,   182,   188,   191,   197,   200,   207,   210,   214,   217,
     224,   230,   233,   239,   242,   249,   255,   258,   265,   268,
     274,   277,   280,   283,   286,   289,   292,   295,   298,   305,
     308,   314,   320,   326,   329,   335,   338,   341,   347,   353,
     356,   359,   365,   368,   371,   377,   383,   386,   392,   395,
     401,   404,   407,   413,   416,   422,   425,   431,   434,   440,
     443,   446,   449,   455,   458,   464,   467,   473,   476,   482,
     485,   491
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
  "\"end of file\"", "error", "\"invalid token\"", "CONST", "INT", "VOID",
  "RETURN", "IDENT", "INT_CONST", "LP", "RP", "LB", "RB", "LC", "RC",
  "COMMA", "And", "OR", "SEMICOLON", "IF", "ELSE", "WHILE", "BREAK",
  "CONTINUE", "Plus", "Sub", "Mul", "Div", "Mod", "GL", "LL", "LE", "GE",
  "EQ", "NE", "Assign", "Not", "$accept", "CompUnit", "Decl", "ConstDecl",
  "ConstDeclTail", "Type", "ConstDef", "ConstDefTail", "ConstInitVal",
  "ConstInitValTail", "ConstInitValTailTail", "VarDecl", "VarDeclTail",
  "VarDef", "VarDefGroup", "InitVal", "InitValTail", "InitValTailTail",
  "FuncDef", "FuncFParams", "FuncFParamsTail", "FuncFParam",
  "FuncFParamTail", "FuncFParamTailTail", "Block", "BlockItemTail",
  "BlockItem", "Stmt", "ReturnExp", "Exp", "LVal", "LValTail",
  "PrimaryExp", "Number", "UnaryExp", "UnaryOp", "FuncRParams",
  "FuncRParamsTail", "MulExp", "MulOp", "AddExp", "AddOp", "RelExp",
  "RelOp", "EqExp", "EqOp", "LAndExp", "LOrExp", "ConstExp", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-156)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      23,    46,  -156,    46,    43,  -156,  -156,    37,  -156,  -156,
      53,    59,  -156,  -156,  -156,    40,    63,    74,    77,    78,
      46,   101,    58,    95,    85,   101,    76,    53,    89,    46,
     105,   103,   104,    72,  -156,   101,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,   101,     6,   -13,    67,    41,   100,
     106,   108,    55,   107,    63,  -156,   110,    81,    77,  -156,
     114,   117,   116,    46,  -156,   101,   101,  -156,   120,  -156,
    -156,  -156,  -156,   101,  -156,  -156,   101,  -156,  -156,  -156,
    -156,   101,  -156,  -156,   101,   101,   101,   107,    55,  -156,
    -156,  -156,    74,    81,  -156,  -156,  -156,   116,   121,  -156,
      16,  -156,   104,   119,   122,   126,  -156,  -156,     6,   -13,
      67,    41,   100,  -156,   124,   128,  -156,   125,   129,  -156,
     133,   101,   136,   137,   130,   131,  -156,    95,  -156,   138,
      16,  -156,   132,   112,  -156,   101,  -156,  -156,   140,    55,
    -156,  -156,    81,  -156,  -156,   101,  -156,   135,  -156,   101,
     101,  -156,  -156,  -156,  -156,  -156,   101,   119,  -156,   124,
     125,   142,  -156,   145,   146,   139,  -156,  -156,  -156,   133,
      48,    48,  -156,  -156,   141,  -156,    48,  -156
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,    11,     0,     0,     2,     6,     0,     7,     3,
       0,     0,     1,     4,     5,    27,    23,    14,    10,     0,
      37,     0,    24,     0,     0,     0,     0,     0,     0,    37,
       0,     0,    39,    64,    68,     0,    72,    73,    74,   101,
      66,    69,    67,    78,     0,    83,    87,    93,    97,    99,
      61,     0,     0,    27,    23,    21,     0,     0,    10,     8,
       0,    42,     0,     0,    36,     0,     0,    62,     0,    71,
      80,    81,    82,     0,    85,    86,     0,    89,    90,    91,
      92,     0,    95,    96,     0,     0,     0,    27,    31,    25,
      28,    22,    14,    18,    12,    15,     9,     0,     0,    40,
      47,    34,    39,    77,     0,     0,    65,    79,    84,    88,
      94,    98,   100,    26,    33,     0,    13,    20,     0,    35,
      44,    60,     0,     0,     0,     0,    48,     0,    52,     0,
      47,    49,     0,    66,    38,     0,    75,    70,    64,     0,
      30,    29,     0,    17,    16,     0,    41,     0,    59,     0,
       0,    56,    57,    45,    46,    51,     0,    77,    63,    33,
      20,     0,    58,     0,     0,     0,    76,    32,    19,    44,
       0,     0,    50,    43,    53,    55,     0,    54
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,    14,  -156,   102,     1,   143,    66,   -84,  -156,
      -1,  -156,   109,   144,    75,   -80,  -156,     5,   161,   147,
      64,   111,  -156,     0,   -52,    38,  -156,  -155,  -156,   -35,
     -94,    33,  -156,  -156,   -31,  -156,  -156,    15,    97,  -156,
      94,  -156,    93,  -156,    96,  -156,    92,  -156,   -18
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     4,   126,     6,    28,    30,    18,    26,    94,   118,
     143,     8,    24,    16,    22,    89,   115,   140,     9,    31,
      64,    32,    99,   146,   128,   129,   130,   131,   147,    39,
      40,    67,    41,    42,    43,    44,   104,   136,    45,    73,
      46,    76,    47,    81,    48,    84,    49,    50,    95
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      68,     7,    10,    51,    11,     7,   133,    56,   114,   117,
     101,    74,    75,    69,     5,   174,   175,    90,    13,     1,
       2,   177,   121,    33,    34,    35,     1,     2,     3,   100,
     103,   105,    70,    71,    72,   122,   133,   123,   124,   125,
      36,    37,   107,    12,    15,   119,     1,     2,     3,    20,
       2,    21,    38,    90,   121,    33,    34,    35,   160,   159,
      17,   100,    33,    34,    35,   132,    19,   122,    88,   123,
     124,   125,    36,    37,    82,    83,   133,   133,    23,    36,
      37,    65,   133,    66,    38,    25,   148,    29,    33,    34,
      35,    38,    27,    52,    93,   132,    77,    78,    79,    80,
     157,   127,    53,    55,    90,    36,    37,    59,    33,    34,
      35,    57,    61,    62,   163,   164,    85,    38,    21,    63,
      87,   165,    92,    86,    97,    36,    37,   161,    98,   100,
     106,   127,   137,   120,   135,   132,   132,    38,   138,   139,
     142,   132,   141,   144,   145,   149,   150,   156,   151,   152,
     155,    66,   153,   162,   169,   170,   171,   172,   116,   168,
      96,   176,   113,    91,   167,    14,   134,    54,   154,   173,
      58,   158,   166,   108,   102,   109,    60,   110,   112,     0,
       0,   111
};

static const yytype_int16 yycheck[] =
{
      35,     0,     1,    21,     3,     4,   100,    25,    88,    93,
      62,    24,    25,    44,     0,   170,   171,    52,     4,     3,
       4,   176,     6,     7,     8,     9,     3,     4,     5,    13,
      65,    66,    26,    27,    28,    19,   130,    21,    22,    23,
      24,    25,    73,     0,     7,    97,     3,     4,     5,     9,
       4,    11,    36,    88,     6,     7,     8,     9,   142,   139,
       7,    13,     7,     8,     9,   100,     7,    19,    13,    21,
      22,    23,    24,    25,    33,    34,   170,   171,    15,    24,
      25,     9,   176,    11,    36,    11,   121,     9,     7,     8,
       9,    36,    15,    35,    13,   130,    29,    30,    31,    32,
     135,   100,     7,    18,   139,    24,    25,    18,     7,     8,
       9,    35,     7,    10,   149,   150,    16,    36,    11,    15,
      12,   156,    12,    17,    10,    24,    25,   145,    11,    13,
      10,   130,    10,    12,    15,   170,   171,    36,    12,    15,
      15,   176,    14,    14,    11,     9,     9,    35,    18,    18,
      18,    11,    14,    18,    12,    10,    10,    18,    92,   160,
      58,    20,    87,    54,   159,     4,   102,    23,   130,   169,
      27,   138,   157,    76,    63,    81,    29,    84,    86,    -1,
      -1,    85
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    38,    39,    40,    42,    48,    55,
      42,    42,     0,    39,    55,     7,    50,     7,    43,     7,
       9,    11,    51,    15,    49,    11,    44,    15,    41,     9,
      42,    56,    58,     7,     8,     9,    24,    25,    36,    66,
      67,    69,    70,    71,    72,    75,    77,    79,    81,    83,
      84,    85,    35,     7,    50,    18,    85,    35,    43,    18,
      56,     7,    10,    15,    57,     9,    11,    68,    66,    71,
      26,    27,    28,    76,    24,    25,    78,    29,    30,    31,
      32,    80,    33,    34,    82,    16,    17,    12,    13,    52,
      66,    49,    12,    13,    45,    85,    41,    10,    11,    59,
      13,    61,    58,    66,    73,    66,    10,    71,    75,    77,
      79,    81,    83,    51,    52,    53,    44,    45,    46,    61,
      12,     6,    19,    21,    22,    23,    39,    42,    61,    62,
      63,    64,    66,    67,    57,    15,    74,    10,    12,    15,
      54,    14,    15,    47,    14,    11,    60,    65,    66,     9,
       9,    18,    18,    14,    62,    18,    35,    66,    68,    52,
      45,    85,    18,    66,    66,    66,    74,    54,    47,    12,
      10,    10,    18,    60,    64,    64,    20,    64
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    37,    38,    38,    38,    38,    39,    39,    40,    41,
      41,    42,    43,    44,    44,    45,    45,    46,    46,    47,
      47,    48,    49,    49,    50,    50,    51,    51,    52,    52,
      53,    53,    54,    54,    55,    55,    56,    56,    57,    57,
      58,    59,    59,    60,    60,    61,    62,    62,    63,    63,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    65,
      65,    66,    67,    68,    68,    69,    69,    69,    70,    71,
      71,    71,    72,    72,    72,    73,    74,    74,    75,    75,
      76,    76,    76,    77,    77,    78,    78,    79,    79,    80,
      80,    80,    80,    81,    81,    82,    82,    83,    83,    84,
      84,    85
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     1,     1,     5,     3,
       0,     1,     4,     4,     0,     1,     3,     2,     0,     3,
       0,     4,     3,     0,     2,     4,     4,     0,     1,     3,
       2,     0,     3,     0,     6,     7,     2,     0,     3,     0,
       3,     3,     0,     4,     0,     3,     2,     0,     1,     1,
       4,     2,     1,     5,     7,     5,     2,     2,     3,     1,
       0,     1,     2,     4,     0,     3,     1,     1,     1,     1,
       4,     2,     1,     1,     1,     2,     3,     0,     1,     3,
       1,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     3,     1,
       3,     1
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
        yyerror (ast, YY_("syntax error: cannot back up")); \
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
                  Kind, Value, ast); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, ASTNode* &ast)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  YY_USE (ast);
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
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep, ASTNode* &ast)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep, ast);
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
                 int yyrule, ASTNode* &ast)
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
                       &yyvsp[(yyi + 1) - (yynrhs)], ast);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule, ast); \
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
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep, ASTNode* &ast)
{
  YY_USE (yyvaluep);
  YY_USE (ast);
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
yyparse (ASTNode* &ast)
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
  case 2: /* CompUnit: Decl  */
#line 51 "src/sysy.y"
         {
    ast = new ASTNode("CompUnit", {(yyvsp[0].node)});
  }
#line 1286 "src/sysy.tab.cc"
    break;

  case 3: /* CompUnit: FuncDef  */
#line 54 "src/sysy.y"
            {
    ast = new ASTNode("CompUnit", {(yyvsp[0].node)});
  }
#line 1294 "src/sysy.tab.cc"
    break;

  case 4: /* CompUnit: CompUnit Decl  */
#line 57 "src/sysy.y"
                  {
    ast = new ASTNode("CompUnit", {(yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1302 "src/sysy.tab.cc"
    break;

  case 5: /* CompUnit: CompUnit FuncDef  */
#line 60 "src/sysy.y"
                     {
    ast = new ASTNode("CompUnit", {(yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1310 "src/sysy.tab.cc"
    break;

  case 6: /* Decl: ConstDecl  */
#line 66 "src/sysy.y"
              {
    (yyval.node) = new ASTNode("Decl", {(yyvsp[0].node)});
  }
#line 1318 "src/sysy.tab.cc"
    break;

  case 7: /* Decl: VarDecl  */
#line 69 "src/sysy.y"
            {
    (yyval.node) = new ASTNode("Decl", {(yyvsp[0].node)});
  }
#line 1326 "src/sysy.tab.cc"
    break;

  case 8: /* ConstDecl: CONST Type ConstDef ConstDeclTail SEMICOLON  */
#line 75 "src/sysy.y"
                                                {
    (yyval.node) = new ASTNode("ConstDecl", {(yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node)});
  }
#line 1334 "src/sysy.tab.cc"
    break;

  case 9: /* ConstDeclTail: COMMA ConstDef ConstDeclTail  */
#line 81 "src/sysy.y"
                                 {
    (yyval.node) = new ASTNode("ConstDeclTail", {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1342 "src/sysy.tab.cc"
    break;

  case 10: /* ConstDeclTail: %empty  */
#line 84 "src/sysy.y"
                {
    (yyval.node) = NULL;
  }
#line 1350 "src/sysy.tab.cc"
    break;

  case 11: /* Type: INT  */
#line 90 "src/sysy.y"
        {
    (yyval.node) = new ASTNode("BType", {(yyvsp[0].node)});
  }
#line 1358 "src/sysy.tab.cc"
    break;

  case 12: /* ConstDef: IDENT ConstDefTail Assign ConstInitVal  */
#line 96 "src/sysy.y"
                                           {
    (yyval.node) = new ASTNode("ConstDef", {(yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1366 "src/sysy.tab.cc"
    break;

  case 13: /* ConstDefTail: LB ConstExp RB ConstDefTail  */
#line 102 "src/sysy.y"
                                {
    (yyval.node) = new ASTNode("ConstDefTail", {(yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1374 "src/sysy.tab.cc"
    break;

  case 14: /* ConstDefTail: %empty  */
#line 105 "src/sysy.y"
                {
  }
#line 1381 "src/sysy.tab.cc"
    break;

  case 15: /* ConstInitVal: ConstExp  */
#line 110 "src/sysy.y"
             {
    (yyval.node) = new ASTNode("ConstInitVal", {(yyvsp[0].node)});
  }
#line 1389 "src/sysy.tab.cc"
    break;

  case 16: /* ConstInitVal: LC ConstInitValTail RC  */
#line 113 "src/sysy.y"
                           {
    (yyval.node) = new ASTNode("ConstInitVal", {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1397 "src/sysy.tab.cc"
    break;

  case 17: /* ConstInitValTail: ConstInitVal ConstInitValTailTail  */
#line 119 "src/sysy.y"
                                      {
    (yyval.node) = new ASTNode("ConstInitValTail", {(yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1405 "src/sysy.tab.cc"
    break;

  case 18: /* ConstInitValTail: %empty  */
#line 122 "src/sysy.y"
                {
  }
#line 1412 "src/sysy.tab.cc"
    break;

  case 19: /* ConstInitValTailTail: COMMA ConstInitVal ConstInitValTailTail  */
#line 127 "src/sysy.y"
                                            {
    (yyval.node) = new ASTNode("ConstInitValTailTail", {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1420 "src/sysy.tab.cc"
    break;

  case 20: /* ConstInitValTailTail: %empty  */
#line 130 "src/sysy.y"
                {
   
  }
#line 1428 "src/sysy.tab.cc"
    break;

  case 21: /* VarDecl: Type VarDef VarDeclTail SEMICOLON  */
#line 136 "src/sysy.y"
                                      {
    (yyval.node) = new ASTNode("VarDecl", {(yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node)});
  }
#line 1436 "src/sysy.tab.cc"
    break;

  case 22: /* VarDeclTail: COMMA VarDef VarDeclTail  */
#line 142 "src/sysy.y"
                             {
    (yyval.node) = new ASTNode("VarDeclTail", {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1444 "src/sysy.tab.cc"
    break;

  case 23: /* VarDeclTail: %empty  */
#line 145 "src/sysy.y"
                {
    (yyval.node) = NULL;
  }
#line 1452 "src/sysy.tab.cc"
    break;

  case 24: /* VarDef: IDENT VarDefGroup  */
#line 151 "src/sysy.y"
                      {
    (yyval.node) = new ASTNode("VarDef", {(yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1460 "src/sysy.tab.cc"
    break;

  case 25: /* VarDef: IDENT VarDefGroup Assign InitVal  */
#line 154 "src/sysy.y"
                                     {
    (yyval.node) = new ASTNode("VarDef", {(yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1468 "src/sysy.tab.cc"
    break;

  case 26: /* VarDefGroup: LB ConstExp RB VarDefGroup  */
#line 160 "src/sysy.y"
                               {
    (yyval.node) = new ASTNode("VarDefGroup", {(yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1476 "src/sysy.tab.cc"
    break;

  case 27: /* VarDefGroup: %empty  */
#line 163 "src/sysy.y"
    {
  
  }
#line 1484 "src/sysy.tab.cc"
    break;

  case 28: /* InitVal: Exp  */
#line 170 "src/sysy.y"
        {
    (yyval.node) = new ASTNode("InitVal", {(yyvsp[0].node)});
  }
#line 1492 "src/sysy.tab.cc"
    break;

  case 29: /* InitVal: LC InitValTail RC  */
#line 173 "src/sysy.y"
                      {
    (yyval.node) = new ASTNode("InitVal", {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1500 "src/sysy.tab.cc"
    break;

  case 30: /* InitValTail: InitVal InitValTailTail  */
#line 179 "src/sysy.y"
                            {
    (yyval.node) = new ASTNode("InitValTail", {(yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1508 "src/sysy.tab.cc"
    break;

  case 31: /* InitValTail: %empty  */
#line 182 "src/sysy.y"
                {

  }
#line 1516 "src/sysy.tab.cc"
    break;

  case 32: /* InitValTailTail: COMMA InitVal InitValTailTail  */
#line 188 "src/sysy.y"
                                  {
    (yyval.node) = new ASTNode("InitValTailTail", {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1524 "src/sysy.tab.cc"
    break;

  case 33: /* InitValTailTail: %empty  */
#line 191 "src/sysy.y"
                {
   
  }
#line 1532 "src/sysy.tab.cc"
    break;

  case 34: /* FuncDef: Type IDENT LP FuncFParams RP Block  */
#line 197 "src/sysy.y"
                                       {
    (yyval.node) = new ASTNode("FuncDef", {(yyvsp[-5].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1540 "src/sysy.tab.cc"
    break;

  case 35: /* FuncDef: VOID Type IDENT LP FuncFParams RP Block  */
#line 200 "src/sysy.y"
                                            {
    (yyval.node) = new ASTNode("FuncDef", {(yyvsp[-6].node), (yyvsp[-5].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node)});
  }
#line 1548 "src/sysy.tab.cc"
    break;

  case 36: /* FuncFParams: FuncFParam FuncFParamsTail  */
#line 207 "src/sysy.y"
                               {
    (yyval.node) = new ASTNode("FuncFParams", {(yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1556 "src/sysy.tab.cc"
    break;

  case 37: /* FuncFParams: %empty  */
#line 210 "src/sysy.y"
    {}
#line 1562 "src/sysy.tab.cc"
    break;

  case 38: /* FuncFParamsTail: COMMA FuncFParam FuncFParamsTail  */
#line 214 "src/sysy.y"
                                     {
    (yyval.node) = new ASTNode("FuncFParamsGroup", {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1570 "src/sysy.tab.cc"
    break;

  case 39: /* FuncFParamsTail: %empty  */
#line 217 "src/sysy.y"
                {
  
  
  }
#line 1579 "src/sysy.tab.cc"
    break;

  case 40: /* FuncFParam: Type IDENT FuncFParamTail  */
#line 224 "src/sysy.y"
                              {
    (yyval.node) = new ASTNode("FuncFParam", {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1587 "src/sysy.tab.cc"
    break;

  case 41: /* FuncFParamTail: LB RB FuncFParamTailTail  */
#line 230 "src/sysy.y"
                             {
    (yyval.node) = new ASTNode("FuncFParamTail", {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1595 "src/sysy.tab.cc"
    break;

  case 42: /* FuncFParamTail: %empty  */
#line 233 "src/sysy.y"
    {
    (yyval.node) = new ASTNode("FuncFParamTail", {});
  }
#line 1603 "src/sysy.tab.cc"
    break;

  case 43: /* FuncFParamTailTail: LB ConstExp RB FuncFParamTailTail  */
#line 239 "src/sysy.y"
                                      {
    (yyval.node) = new ASTNode("FuncFParamTailTail", {(yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1611 "src/sysy.tab.cc"
    break;

  case 44: /* FuncFParamTailTail: %empty  */
#line 242 "src/sysy.y"
    {
    (yyval.node) = new ASTNode("FuncFParamTailTail", {});
  }
#line 1619 "src/sysy.tab.cc"
    break;

  case 45: /* Block: LC BlockItemTail RC  */
#line 249 "src/sysy.y"
                        {
    (yyval.node) = new ASTNode("Block", {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1627 "src/sysy.tab.cc"
    break;

  case 46: /* BlockItemTail: BlockItem BlockItemTail  */
#line 255 "src/sysy.y"
                            {
    (yyval.node) = new ASTNode("BlockItemGroup", {(yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1635 "src/sysy.tab.cc"
    break;

  case 47: /* BlockItemTail: %empty  */
#line 258 "src/sysy.y"
                {
 

  }
#line 1644 "src/sysy.tab.cc"
    break;

  case 48: /* BlockItem: Decl  */
#line 265 "src/sysy.y"
         {
    (yyval.node) = new ASTNode("BlockItem", {(yyvsp[0].node)});
  }
#line 1652 "src/sysy.tab.cc"
    break;

  case 49: /* BlockItem: Stmt  */
#line 268 "src/sysy.y"
         {
    (yyval.node) = new ASTNode("BlockItem", {(yyvsp[0].node)});
  }
#line 1660 "src/sysy.tab.cc"
    break;

  case 50: /* Stmt: LVal Assign Exp SEMICOLON  */
#line 274 "src/sysy.y"
                              {
    (yyval.node) = new ASTNode("Stmt", {(yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node)});
  }
#line 1668 "src/sysy.tab.cc"
    break;

  case 51: /* Stmt: Exp SEMICOLON  */
#line 277 "src/sysy.y"
                  {
    (yyval.node) = new ASTNode("Stmt", {(yyvsp[-1].node)});
  }
#line 1676 "src/sysy.tab.cc"
    break;

  case 52: /* Stmt: Block  */
#line 280 "src/sysy.y"
          {
    (yyval.node) = new ASTNode("Stmt", {(yyvsp[0].node)});
  }
#line 1684 "src/sysy.tab.cc"
    break;

  case 53: /* Stmt: IF LP Exp RP Stmt  */
#line 283 "src/sysy.y"
                      {
    (yyval.node) = new ASTNode("Stmt", {(yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1692 "src/sysy.tab.cc"
    break;

  case 54: /* Stmt: IF LP Exp RP Stmt ELSE Stmt  */
#line 286 "src/sysy.y"
                               {
    (yyval.node) = new ASTNode("Stmt", {(yyvsp[-6].node), (yyvsp[-5].node), (yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1700 "src/sysy.tab.cc"
    break;

  case 55: /* Stmt: WHILE LP Exp RP Stmt  */
#line 289 "src/sysy.y"
                         {
    (yyval.node) = new ASTNode("Stmt", {(yyvsp[-4].node), (yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1708 "src/sysy.tab.cc"
    break;

  case 56: /* Stmt: BREAK SEMICOLON  */
#line 292 "src/sysy.y"
                    {
    (yyval.node) = new ASTNode("Stmt", {(yyvsp[-1].node)});
  }
#line 1716 "src/sysy.tab.cc"
    break;

  case 57: /* Stmt: CONTINUE SEMICOLON  */
#line 295 "src/sysy.y"
                       {
    (yyval.node) = new ASTNode("Stmt", {(yyvsp[-1].node)});
  }
#line 1724 "src/sysy.tab.cc"
    break;

  case 58: /* Stmt: RETURN ReturnExp SEMICOLON  */
#line 298 "src/sysy.y"
                               {
    (yyval.node) = new ASTNode("Stmt", {(yyvsp[-2].node), (yyvsp[-1].node)});
  }
#line 1732 "src/sysy.tab.cc"
    break;

  case 59: /* ReturnExp: Exp  */
#line 305 "src/sysy.y"
        {
    (yyval.node) = new ASTNode("ReturnExp", {(yyvsp[0].node)});
  }
#line 1740 "src/sysy.tab.cc"
    break;

  case 60: /* ReturnExp: %empty  */
#line 308 "src/sysy.y"
                {
    (yyval.node) = NULL;
  }
#line 1748 "src/sysy.tab.cc"
    break;

  case 61: /* Exp: LOrExp  */
#line 314 "src/sysy.y"
           {
    (yyval.node) = new ASTNode("Exp", {(yyvsp[0].node)});
  }
#line 1756 "src/sysy.tab.cc"
    break;

  case 62: /* LVal: IDENT LValTail  */
#line 320 "src/sysy.y"
                   {
    (yyval.node) = new ASTNode("LVal", {(yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1764 "src/sysy.tab.cc"
    break;

  case 63: /* LValTail: LB Exp RB LValTail  */
#line 326 "src/sysy.y"
                       {
    (yyval.node) = new ASTNode("LValTail", {(yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1772 "src/sysy.tab.cc"
    break;

  case 64: /* LValTail: %empty  */
#line 329 "src/sysy.y"
                {
    (yyval.node) = NULL;
  }
#line 1780 "src/sysy.tab.cc"
    break;

  case 65: /* PrimaryExp: LP Exp RP  */
#line 335 "src/sysy.y"
              {
    (yyval.node) = new ASTNode("PrimaryExp", {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1788 "src/sysy.tab.cc"
    break;

  case 66: /* PrimaryExp: LVal  */
#line 338 "src/sysy.y"
         {
    (yyval.node) = new ASTNode("PrimaryExp", {(yyvsp[0].node)});
  }
#line 1796 "src/sysy.tab.cc"
    break;

  case 67: /* PrimaryExp: Number  */
#line 341 "src/sysy.y"
           {
    (yyval.node) = new ASTNode("PrimaryExp", {(yyvsp[0].node)});
  }
#line 1804 "src/sysy.tab.cc"
    break;

  case 68: /* Number: INT_CONST  */
#line 347 "src/sysy.y"
              {
    (yyval.node) = new ASTNode("Number", {(yyvsp[0].node)});
  }
#line 1812 "src/sysy.tab.cc"
    break;

  case 69: /* UnaryExp: PrimaryExp  */
#line 353 "src/sysy.y"
               {
    (yyval.node) = new ASTNode("UnaryExp", {(yyvsp[0].node)});
  }
#line 1820 "src/sysy.tab.cc"
    break;

  case 70: /* UnaryExp: IDENT LP FuncRParams RP  */
#line 356 "src/sysy.y"
                            {
    (yyval.node) = new ASTNode("UnaryExp", {(yyvsp[-3].node), (yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1828 "src/sysy.tab.cc"
    break;

  case 71: /* UnaryExp: UnaryOp UnaryExp  */
#line 359 "src/sysy.y"
                     {
    (yyval.node) = new ASTNode("UnaryExp", {(yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1836 "src/sysy.tab.cc"
    break;

  case 72: /* UnaryOp: Plus  */
#line 365 "src/sysy.y"
         {
    (yyval.node) = new ASTNode("UnaryOp", {(yyvsp[0].node)});
  }
#line 1844 "src/sysy.tab.cc"
    break;

  case 73: /* UnaryOp: Sub  */
#line 368 "src/sysy.y"
        {
    (yyval.node) = new ASTNode("UnaryOp", {(yyvsp[0].node)});
  }
#line 1852 "src/sysy.tab.cc"
    break;

  case 74: /* UnaryOp: Not  */
#line 371 "src/sysy.y"
        {
    (yyval.node) = new ASTNode("UnaryOp", {(yyvsp[0].node)});
  }
#line 1860 "src/sysy.tab.cc"
    break;

  case 75: /* FuncRParams: Exp FuncRParamsTail  */
#line 377 "src/sysy.y"
                        {
    (yyval.node) = new ASTNode("FuncRParams", {(yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1868 "src/sysy.tab.cc"
    break;

  case 76: /* FuncRParamsTail: COMMA Exp FuncRParamsTail  */
#line 383 "src/sysy.y"
                              {
    (yyval.node) = new ASTNode("FuncRParamsTail", {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1876 "src/sysy.tab.cc"
    break;

  case 77: /* FuncRParamsTail: %empty  */
#line 386 "src/sysy.y"
                {
    (yyval.node) = NULL;
  }
#line 1884 "src/sysy.tab.cc"
    break;

  case 78: /* MulExp: UnaryExp  */
#line 392 "src/sysy.y"
             {
    (yyval.node) = new ASTNode("MulExp", {(yyvsp[0].node)});
  }
#line 1892 "src/sysy.tab.cc"
    break;

  case 79: /* MulExp: MulExp MulOp UnaryExp  */
#line 395 "src/sysy.y"
                          {
    (yyval.node) = new ASTNode("MulExp", {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1900 "src/sysy.tab.cc"
    break;

  case 80: /* MulOp: Mul  */
#line 401 "src/sysy.y"
        {
    (yyval.node) = new ASTNode("MulOp", {(yyvsp[0].node)});
  }
#line 1908 "src/sysy.tab.cc"
    break;

  case 81: /* MulOp: Div  */
#line 404 "src/sysy.y"
        {
    (yyval.node) = new ASTNode("MulOp", {(yyvsp[0].node)});
  }
#line 1916 "src/sysy.tab.cc"
    break;

  case 82: /* MulOp: Mod  */
#line 407 "src/sysy.y"
        {
    (yyval.node) = new ASTNode("MulOp", {(yyvsp[0].node)});
  }
#line 1924 "src/sysy.tab.cc"
    break;

  case 83: /* AddExp: MulExp  */
#line 413 "src/sysy.y"
           {
    (yyval.node) = new ASTNode("AddExp", {(yyvsp[0].node)});
  }
#line 1932 "src/sysy.tab.cc"
    break;

  case 84: /* AddExp: AddExp AddOp MulExp  */
#line 416 "src/sysy.y"
                        {
    (yyval.node) = new ASTNode("AddExp", {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1940 "src/sysy.tab.cc"
    break;

  case 85: /* AddOp: Plus  */
#line 422 "src/sysy.y"
         {
    (yyval.node) = new ASTNode("AddOp", {(yyvsp[0].node)});
  }
#line 1948 "src/sysy.tab.cc"
    break;

  case 86: /* AddOp: Sub  */
#line 425 "src/sysy.y"
        {
    (yyval.node) = new ASTNode("AddOp", {(yyvsp[0].node)});
  }
#line 1956 "src/sysy.tab.cc"
    break;

  case 87: /* RelExp: AddExp  */
#line 431 "src/sysy.y"
           {
    (yyval.node) = new ASTNode("RelExp", {(yyvsp[0].node)});
  }
#line 1964 "src/sysy.tab.cc"
    break;

  case 88: /* RelExp: RelExp RelOp AddExp  */
#line 434 "src/sysy.y"
                        {
    (yyval.node) = new ASTNode("RelExp", {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 1972 "src/sysy.tab.cc"
    break;

  case 89: /* RelOp: GL  */
#line 440 "src/sysy.y"
       {
    (yyval.node) = new ASTNode("RelOp", {(yyvsp[0].node)});
  }
#line 1980 "src/sysy.tab.cc"
    break;

  case 90: /* RelOp: LL  */
#line 443 "src/sysy.y"
       {
    (yyval.node) = new ASTNode("RelOp", {(yyvsp[0].node)});
  }
#line 1988 "src/sysy.tab.cc"
    break;

  case 91: /* RelOp: LE  */
#line 446 "src/sysy.y"
       {
    (yyval.node) = new ASTNode("RelOp", {(yyvsp[0].node)});
  }
#line 1996 "src/sysy.tab.cc"
    break;

  case 92: /* RelOp: GE  */
#line 449 "src/sysy.y"
       {
    (yyval.node) = new ASTNode("RelOp", {(yyvsp[0].node)});
  }
#line 2004 "src/sysy.tab.cc"
    break;

  case 93: /* EqExp: RelExp  */
#line 455 "src/sysy.y"
           {
    (yyval.node) = new ASTNode("EqExp", {(yyvsp[0].node)});
  }
#line 2012 "src/sysy.tab.cc"
    break;

  case 94: /* EqExp: EqExp EqOp RelExp  */
#line 458 "src/sysy.y"
                      {
    (yyval.node) = new ASTNode("EqExp", {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 2020 "src/sysy.tab.cc"
    break;

  case 95: /* EqOp: EQ  */
#line 464 "src/sysy.y"
       {
    (yyval.node) = new ASTNode("EqOp", {(yyvsp[0].node)});
  }
#line 2028 "src/sysy.tab.cc"
    break;

  case 96: /* EqOp: NE  */
#line 467 "src/sysy.y"
       {
    (yyval.node) = new ASTNode("EqOp", {(yyvsp[0].node)});
  }
#line 2036 "src/sysy.tab.cc"
    break;

  case 97: /* LAndExp: EqExp  */
#line 473 "src/sysy.y"
          {
    (yyval.node) = new ASTNode("LAndExp", {(yyvsp[0].node)});
  }
#line 2044 "src/sysy.tab.cc"
    break;

  case 98: /* LAndExp: LAndExp And EqExp  */
#line 476 "src/sysy.y"
                      {
    (yyval.node) = new ASTNode("LAndExp", {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 2052 "src/sysy.tab.cc"
    break;

  case 99: /* LOrExp: LAndExp  */
#line 482 "src/sysy.y"
            {
    (yyval.node) = new ASTNode("LOrExp", {(yyvsp[0].node)});
  }
#line 2060 "src/sysy.tab.cc"
    break;

  case 100: /* LOrExp: LOrExp OR LAndExp  */
#line 485 "src/sysy.y"
                      {
    (yyval.node) = new ASTNode("LOrExp", {(yyvsp[-2].node), (yyvsp[-1].node), (yyvsp[0].node)});
  }
#line 2068 "src/sysy.tab.cc"
    break;

  case 101: /* ConstExp: Exp  */
#line 491 "src/sysy.y"
        {
    (yyval.node) = new ASTNode("ConstExp", {(yyvsp[0].node)});
  }
#line 2076 "src/sysy.tab.cc"
    break;


#line 2080 "src/sysy.tab.cc"

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
      yyerror (ast, YY_("syntax error"));
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
                      yytoken, &yylval, ast);
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp, ast);
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
  yyerror (ast, YY_("memory exhausted"));
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
                  yytoken, &yylval, ast);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp, ast);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 497 "src/sysy.y"


void yyerror(ASTNode* & ast, const char *s) {
  cerr <<  "Error type [B] at line [" << yylineno <<  "] : " << yytext << endl;
}

