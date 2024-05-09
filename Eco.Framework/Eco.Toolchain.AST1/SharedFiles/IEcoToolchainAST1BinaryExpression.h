/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1BinaryExpression
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1BinaryExpression
 * </описание>
 *
 * <ссылка>
 *
 * </ссылка>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __I_ECO_TOOLCHAIN_AST_1_BINARY_EXPRESSION_H__
#define __I_ECO_TOOLCHAIN_AST_1_BINARY_EXPRESSION_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1Expression.h"
#include "IEcoToolchainAST1SingleStatement.h"
#include "IEcoToolchainAST1Statement.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* Определение операторов */
enum tagBinOperator {
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_ADD = 1,             /* foo1 + foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_SUBTRACT,            /* foo1 - foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_MULTIPLY,            /* foo1 * foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_DIVIDE,              /* foo1 / foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_MODULUS,             /* foo1 % foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_AND,                 /* foo1 && foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_OR,                  /* foo1 || foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_EQUAL,               /* foo1 == foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_NOT_EQUAL,           /* foo1 != foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_GREATER,             /* foo1 > foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_NOT_GREATE,          /* foo1 <= foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_LESS,                /* foo1 < foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_NOT_LESS,            /* foo1 >= foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_BIT_AND,             /* foo1 & foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_BIT_OR,              /* foo1 | foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_BIT_XOR,             /* foo1 ^ foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_BIT_LEFT_SHIFT,      /* foo1 << foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_BIT_RIGHT_SHIFT,     /* foo1 >> foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_ASSIGN,              /* foo1 = foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_COMMA,               /* foo1, foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_ADD_ASSIGN,          /* foo1 += foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_SUB_ASSIGN,          /* foo1 -= foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_MULT_ASSIGN,         /* foo1 *= foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_DIV_ASSIGN,          /* foo1 /= foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_MOD_ASSIGN,          /* foo1 %= foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_AND_ASSIGN,          /* foo1 &= foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_OR_ASSIGN,           /* foo1 |= foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_XOR_ASSIGN,          /* foo1 ^= foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_LEFT_SHIFT_ASSIGN,   /* foo1 <<= foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_RIGHT_SHIFT_ASSIGN,  /* foo1 >>= foo2 */
    ECO_TOOLCHAIN_AST1_BINARY_OPERATOR_INDEX                /* foo1[foo2] */
};

/* IEcoToolchainAST1BinaryExpression IID = {02D70CE4-24FF-4A08-9FBB-601C91E64C68} */
#ifndef __IID_IEcoToolchainAST1BinaryExpression
static const UGUID IID_IEcoToolchainAST1BinaryExpression = { 0x01, 0x10, {0x02, 0xD7, 0x0C, 0xE4, 0x24, 0xFF, 0x4A, 0x08, 0x9F, 0xBB, 0x60, 0x1C, 0x91, 0xE6, 0x4C, 0x68 } };
#endif /* __IID_IEcoToolchainAST1BinaryExpression */

typedef struct IEcoToolchainAST1BinaryExpression* IEcoToolchainAST1BinaryExpressionPtr_t;

typedef struct IEcoToolchainAST1BinaryExpressionVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1BinaryExpressionPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1BinaryExpressionPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1BinaryExpressionPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1BinaryExpressionPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1BinaryExpressionPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1BinaryExpressionPtr_t me);
    IEcoToolchainAST1BinaryExpressionPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1BinaryExpressionPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Expression */
    IEcoToolchainAST1Type* (ECOCALLMETHOD *get_Type)(/* in */ IEcoToolchainAST1BinaryExpressionPtr_t me);

    /* IEcoToolchainAST1BinaryExpression */
    int16_t (ECOCALLMETHOD *get_Operator)(/* in */ IEcoToolchainAST1BinaryExpressionPtr_t me);
    IEcoToolchainAST1Expression* (ECOCALLMETHOD *get_LeftOperand)(/* in */ IEcoToolchainAST1BinaryExpressionPtr_t me);
    IEcoToolchainAST1Expression* (ECOCALLMETHOD *get_RightOperand)(/* in */ IEcoToolchainAST1BinaryExpressionPtr_t me);

} IEcoToolchainAST1BinaryExpressionVTbl, *IEcoToolchainAST1BinaryExpressionVTblPtr;

interface IEcoToolchainAST1BinaryExpression {
    struct IEcoToolchainAST1BinaryExpressionVTbl *pVTbl;
} IEcoToolchainAST1BinaryExpression;

#endif /* __I_ECO_TOOLCHAIN_AST_1_BINARY_EXPRESSION_H__ */

