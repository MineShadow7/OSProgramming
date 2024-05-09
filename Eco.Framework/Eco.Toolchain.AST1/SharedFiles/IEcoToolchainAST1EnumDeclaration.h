/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1EnumDeclaration
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1EnumDeclaration
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_ENUM_DECLARATION_H__
#define __I_ECO_TOOLCHAIN_AST_1_ENUM_DECLARATION_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainLexicalAnalyzer1.h"
#include "IEcoToolchainAST1VariableDefinition.h"
#include "IEcoToolchainAST1BlockDeclarations.h"
#include "IEcoToolchainAST1BlockExpressions.h"
#include "IEcoToolchainAST1Scope.h"
#include "IEcoToolchainAST1Expression.h"

/* IEcoToolchainAST1EnumDeclaration IID = {82AA8D91-4E04-44BD-B3DF-EA237CEC4458} */
#ifndef __IID_IEcoToolchainAST1EnumDeclaration
static const UGUID IID_IEcoToolchainAST1EnumDeclaration = {0x01, 0x10, {0x82, 0xAA, 0x8D, 0x91, 0x4E, 0x04, 0x44, 0xBD, 0xB3, 0xDF, 0xEA, 0x23, 0x7C, 0xEC, 0x44, 0x58} };
#endif /* __IID_IEcoToolchainAST1EnumDeclaration */

typedef struct IEcoToolchainAST1EnumDeclaration* IEcoToolchainAST1EnumDeclarationPtr_t;

typedef struct IEcoToolchainAST1EnumDeclarationVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1EnumDeclarationPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1EnumDeclarationPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1EnumDeclarationPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1EnumDeclarationPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1EnumDeclarationPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1EnumDeclarationPtr_t me);
    IEcoToolchainAST1EnumDeclarationPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1EnumDeclarationPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Declaration */
    char_t* (ECOCALLMETHOD *get_IdentifierName)(/* in */ IEcoToolchainAST1EnumDeclarationPtr_t me);

    /* IEcoToolchainAST1EnumDeclaration */
    IEcoToolchainAST1BlockDeclarations* (ECOCALLMETHOD *get_Declarations)(/* in */ IEcoToolchainAST1EnumDeclarationPtr_t me);
    struct IEcoToolchainAST1Scope* (ECOCALLMETHOD *get_Scope)(/* in */ IEcoToolchainAST1EnumDeclarationPtr_t me);

} IEcoToolchainAST1EnumDeclarationVTbl, *IEcoToolchainAST1EnumDeclarationVTblPtr;

interface IEcoToolchainAST1EnumDeclaration {
    struct IEcoToolchainAST1EnumDeclarationVTbl *pVTbl;
} IEcoToolchainAST1EnumDeclaration;

#endif /* __I_ECO_TOOLCHAIN_AST_1_ENUM_DECLARATION_H__ */

