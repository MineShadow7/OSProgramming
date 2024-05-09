/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1ExpressionableDeclaration
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1ExpressionableDeclaration
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_EXPRESSIONABLE_DECLARATION_H__
#define __I_ECO_TOOLCHAIN_AST_1_EXPRESSIONABLE_DECLARATION_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainLexicalAnalyzer1.h"
#include "IEcoToolchainAST1Type.h"

/* IEcoToolchainAST1ExpressionableDeclaration IID = {82AA8D91-4E04-44BD-B3DF-EA237CEC4E80} */
#ifndef __IID_IEcoToolchainAST1ExpressionableDeclaration
static const UGUID IID_IEcoToolchainAST1ExpressionableDeclaration = {0x01, 0x10, {0x82, 0xAA, 0x8D, 0x91, 0x4E, 0x04, 0x44, 0xBD, 0xB3, 0xDF, 0xEA, 0x23, 0x7C, 0xEC, 0x4E, 0x80} };
#endif /* __IID_IEcoToolchainAST1ExpressionableDeclaration */

typedef struct IEcoToolchainAST1ExpressionableDeclaration* IEcoToolchainAST1ExpressionableDeclarationPtr_t;

typedef struct IEcoToolchainAST1ExpressionableDeclarationVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1ExpressionableDeclarationPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1ExpressionableDeclarationPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1ExpressionableDeclarationPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1ExpressionableDeclarationPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1ExpressionableDeclarationPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1ExpressionableDeclarationPtr_t me);
    IEcoToolchainAST1ExpressionableDeclarationPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1ExpressionableDeclarationPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1VariableDeclaration */
    char_t* (ECOCALLMETHOD *get_IdentifierName)(/* in */ IEcoToolchainAST1ExpressionableDeclarationPtr_t me);

    /* IEcoToolchainAST1ExpressionableDeclaration */
    IEcoToolchainAST1Type* (ECOCALLMETHOD *get_Type)(/* in */ IEcoToolchainAST1ExpressionableDeclarationPtr_t me);

} IEcoToolchainAST1ExpressionableDeclarationVTbl, *IEcoToolchainAST1ExpressionableDeclarationVTblPtr;

interface IEcoToolchainAST1ExpressionableDeclaration {
    struct IEcoToolchainAST1ExpressionableDeclarationVTbl *pVTbl;
} IEcoToolchainAST1ExpressionableDeclaration;

#endif /* __I_ECO_TOOLCHAIN_AST_1_EXPRESSIONABLE_DECLARATION_H__ */

