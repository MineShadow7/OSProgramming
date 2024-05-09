/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1VariableDeclaration
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1VariableDeclaration
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_VARIABLE_DECLARATION_H__
#define __I_ECO_TOOLCHAIN_AST_1_VARIABLE_DECLARATION_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainLexicalAnalyzer1.h"
#include "IEcoToolchainAST1Expression.h"

/* IEcoToolchainAST1VariableDeclaration IID = {82AA8D91-4E04-44BD-B3DF-EA237CEC475D} */
#ifndef __IID_IEcoToolchainAST1VariableDeclaration
static const UGUID IID_IEcoToolchainAST1VariableDeclaration = {0x01, 0x10, {0x82, 0xAA, 0x8D, 0x91, 0x4E, 0x04, 0x44, 0xBD, 0xB3, 0xDF, 0xEA, 0x23, 0x7C, 0xEC, 0x47, 0x5D} };
#endif /* __IID_IEcoToolchainAST1VariableDeclaration */

typedef struct IEcoToolchainAST1VariableDeclaration* IEcoToolchainAST1VariableDeclarationPtr_t;

typedef struct IEcoToolchainAST1VariableDeclarationVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1VariableDeclarationPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1VariableDeclarationPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1VariableDeclarationPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1VariableDeclarationPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1VariableDeclarationPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1VariableDeclarationPtr_t me);
    IEcoToolchainAST1VariableDeclarationPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1VariableDeclarationPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Declaration */
    char_t* (ECOCALLMETHOD *get_IdentifierName)(/* in */ IEcoToolchainAST1VariableDeclarationPtr_t me);

    /* IEcoToolchainAST1ExpressionableDeclaration */
    IEcoToolchainAST1Type* (ECOCALLMETHOD *get_Type)(/* in */ IEcoToolchainAST1VariableDeclarationPtr_t me);

    /* IEcoToolchainAST1VariableDeclaration */
    IEcoToolchainAST1Expression* (ECOCALLMETHOD *get_Initializator)(/* in */ IEcoToolchainAST1VariableDeclarationPtr_t me);

} IEcoToolchainAST1VariableDeclarationVTbl, *IEcoToolchainAST1VariableDeclarationVTblPtr;

interface IEcoToolchainAST1VariableDeclaration {
    struct IEcoToolchainAST1VariableDeclarationVTbl *pVTbl;
} IEcoToolchainAST1VariableDeclaration;

#endif /* __I_ECO_TOOLCHAIN_AST_1_VARIABLE_DECLARATION_H__ */

