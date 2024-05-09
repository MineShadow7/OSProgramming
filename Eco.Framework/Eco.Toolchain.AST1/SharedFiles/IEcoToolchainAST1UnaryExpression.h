/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1UnaryExpression
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1UnaryExpression
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_UNARY_EXPRESSION_H__
#define __I_ECO_TOOLCHAIN_AST_1_UNARY_EXPRESSION_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1Expression.h"
#include "IEcoToolchainAST1SingleStatement.h"
#include "IEcoToolchainAST1Statement.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* Определение операторов */
enum tagUnOperator {
    ECO_TOOLCHAIN_AST1_UNARY_OPERATOR_POINTER = 1,      /* *foo */
    ECO_TOOLCHAIN_AST1_UNARY_OPERATOR_REFERENCE,        /* &foo */
    ECO_TOOLCHAIN_AST1_UNARY_OPERATOR_NEGATIVE,         /* -foo */
    ECO_TOOLCHAIN_AST1_UNARY_OPERATOR_NOT,              /* !foo */
    ECO_TOOLCHAIN_AST1_UNARY_OPERATOR_BIT_NOT,          /* ~foo */
    ECO_TOOLCHAIN_AST1_UNARY_OPERATOR_PREFIX_INC,       /* ++foo */
    ECO_TOOLCHAIN_AST1_UNARY_OPERATOR_PREFIX_DEC,       /* --foo */
    ECO_TOOLCHAIN_AST1_UNARY_OPERATOR_POSTFIX_INC,      /* foo++ */
    ECO_TOOLCHAIN_AST1_UNARY_OPERATOR_POSTFIX_DEC,      /* foo-- */
    ECO_TOOLCHAIN_AST1_UNARY_OPERATOR_POSITIVE          /* +foo */
};

/* IEcoToolchainAST1UnaryExpression IID = {02D70CE4-24FF-4A08-9FBB-601C91E64A43} */
#ifndef __IID_IEcoToolchainAST1UnaryExpression
static const UGUID IID_IEcoToolchainAST1UnaryExpression = {0x01, 0x10, {0x02, 0xD7, 0x0C, 0xE4, 0x24, 0xFF, 0x4A, 0x08, 0x9F, 0xBB, 0x60, 0x1C, 0x91, 0xE6, 0x4A, 0x43} };
#endif /* __IID_IEcoToolchainAST1UnaryExpression */

typedef struct IEcoToolchainAST1UnaryExpression* IEcoToolchainAST1UnaryExpressionPtr_t;

typedef struct IEcoToolchainAST1UnaryExpressionVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1UnaryExpressionPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1UnaryExpressionPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1UnaryExpressionPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1UnaryExpressionPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1UnaryExpressionPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1UnaryExpressionPtr_t me);
    IEcoToolchainAST1UnaryExpressionPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1UnaryExpressionPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Expression */
    IEcoToolchainAST1Type* (ECOCALLMETHOD *get_Type)(/* in */ IEcoToolchainAST1UnaryExpressionPtr_t me);

    /* IEcoToolchainAST1UnaryExpression */
    uint16_t (ECOCALLMETHOD *get_Operator)(/* in */ IEcoToolchainAST1UnaryExpressionPtr_t me);
    IEcoToolchainAST1Expression* (ECOCALLMETHOD *get_Operand)(/* in */ IEcoToolchainAST1UnaryExpressionPtr_t me);

} IEcoToolchainAST1UnaryExpressionVTbl, *IEcoToolchainAST1UnaryExpressionVTblPtr;

interface IEcoToolchainAST1UnaryExpression {
    struct IEcoToolchainAST1UnaryExpressionVTbl *pVTbl;
} IEcoToolchainAST1UnaryExpression;

#endif /* __I_ECO_TOOLCHAIN_AST_1_UNARY_EXPRESSION_H__ */

