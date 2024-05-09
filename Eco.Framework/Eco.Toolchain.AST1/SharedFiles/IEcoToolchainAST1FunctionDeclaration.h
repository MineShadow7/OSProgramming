/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1FunctionDeclaration
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1FunctionDeclaration
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_FUNCTION_DECLARATION_H__
#define __I_ECO_TOOLCHAIN_AST_1_FUNCTION_DECLARATION_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainLexicalAnalyzer1.h"
#include "IEcoToolchainAST1FunctionType.h"
#include "IEcoToolchainAST1BlockDeclarations.h"
#include "IEcoToolchainAST1Scope.h"

/* IEcoToolchainAST1FunctionDeclaration IID = {82AA8D91-4E04-44BD-B3DF-EA237CEC656D} */
#ifndef __IID_IEcoToolchainAST1FunctionDeclaration
static const UGUID IID_IEcoToolchainAST1FunctionDeclaration = {0x01, 0x10, {0x82, 0xAA, 0x8D, 0x91, 0x4E, 0x04, 0x44, 0xBD, 0xB3, 0xDF, 0xEA, 0x23, 0x7C, 0xEC, 0x65, 0x6D} };
#endif /* __IID_IEcoToolchainAST1FunctionDeclaration */

typedef struct IEcoToolchainAST1FunctionDeclaration* IEcoToolchainAST1FunctionDeclarationPtr_t;

typedef struct IEcoToolchainAST1FunctionDeclarationVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1FunctionDeclarationPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1FunctionDeclarationPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1FunctionDeclarationPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1FunctionDeclarationPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1FunctionDeclarationPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1FunctionDeclarationPtr_t me);
    IEcoToolchainAST1FunctionDeclarationPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1FunctionDeclarationPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Declaration */
    char_t* (ECOCALLMETHOD *get_IdentifierName)(/* in */ IEcoToolchainAST1FunctionDeclarationPtr_t me);

    /* IEcoToolchainAST1ExpressionableDeclaration */
    IEcoToolchainAST1FunctionType* (ECOCALLMETHOD *get_Type)(/* in */ IEcoToolchainAST1FunctionDeclarationPtr_t me);

    /* IEcoToolchainAST1FunctionDeclaration */
    IEcoToolchainAST1BlockDeclarations* (ECOCALLMETHOD *get_Params)(/* in */ IEcoToolchainAST1FunctionDeclarationPtr_t me);
    IEcoToolchainAST1Type* (ECOCALLMETHOD *get_ReturnType)(/* in */ IEcoToolchainAST1FunctionDeclarationPtr_t me);

} IEcoToolchainAST1FunctionDeclarationVTbl, *IEcoToolchainAST1FunctionDeclarationVTblPtr;

interface IEcoToolchainAST1FunctionDeclaration {
    struct IEcoToolchainAST1FunctionDeclarationVTbl *pVTbl;
} IEcoToolchainAST1FunctionDeclaration;

#endif /* __I_ECO_TOOLCHAIN_AST_1_FUNCTION_DECLARATION_H__ */

