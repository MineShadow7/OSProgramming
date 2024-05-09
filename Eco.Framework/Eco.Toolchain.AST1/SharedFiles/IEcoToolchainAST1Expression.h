/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1Expression
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1Expression
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_EXPRESSION_H__
#define __I_ECO_TOOLCHAIN_AST_1_EXPRESSION_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1Type.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1Expression IID = {937549A5-DFF7-41AE-AD21-166A74B0CA20} */
#ifndef __IID_IEcoToolchainAST1Expression
static const UGUID IID_IEcoToolchainAST1Expression = {0x01, 0x10, {0x93, 0x75, 0x49, 0xA5, 0xDF, 0xF7, 0x41, 0xAE, 0xAD, 0x21, 0x16, 0x6A, 0x74, 0xB0, 0xCA, 0x20} };
#endif /* __IID_IEcoToolchainAST1Expression */

typedef struct IEcoToolchainAST1Expression* IEcoToolchainAST1ExpressionPtr_t;

typedef struct IEcoToolchainAST1ExpressionVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1ExpressionPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1ExpressionPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1ExpressionPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1ExpressionPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1ExpressionPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1ExpressionPtr_t me);
    IEcoToolchainAST1ExpressionPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1ExpressionPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Expression */
    IEcoToolchainAST1Type* (ECOCALLMETHOD *get_Type)(/* in */ IEcoToolchainAST1ExpressionPtr_t me);

} IEcoToolchainAST1ExpressionVTbl, *IEcoToolchainAST1ExpressionVTblPtr;

interface IEcoToolchainAST1Expression {
    struct IEcoToolchainAST1ExpressionVTbl *pVTbl;
} IEcoToolchainAST1Expression;

#endif /* __I_ECO_TOOLCHAIN_AST_1_EXPRESSION_H__ */