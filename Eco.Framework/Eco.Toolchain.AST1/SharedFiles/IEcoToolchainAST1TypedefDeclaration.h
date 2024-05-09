/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1TypedefDeclaration
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1TypedefDeclaration
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_TYPEDEF_DECLARATION_H__
#define __I_ECO_TOOLCHAIN_AST_1_TYPEDEF_DECLARATION_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1Type.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1TypedefDeclaration IID = {82AA8D91-4E04-44BD-B3DF-EA237CEC0AAA} */
#ifndef __IID_IEcoToolchainAST1TypedefDeclaration
static const UGUID IID_IEcoToolchainAST1TypedefDeclaration = {0x01, 0x10, {0x82, 0xAA, 0x8D, 0x91, 0x4E, 0x04, 0x44, 0xBD, 0xB3, 0xDF, 0xEA, 0x23, 0x7C, 0xEC, 0x0A, 0xAA} };
#endif /* __IID_IEcoToolchainAST1TypedefDeclaration */

typedef struct IEcoToolchainAST1TypedefDeclaration* IEcoToolchainAST1TypedefDeclarationPtr_t;

typedef struct IEcoToolchainAST1TypedefDeclarationVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1TypedefDeclarationPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1TypedefDeclarationPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1TypedefDeclarationPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1TypedefDeclarationPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1TypedefDeclarationPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1TypedefDeclarationPtr_t me);
    IEcoToolchainAST1TypedefDeclarationPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1TypedefDeclarationPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Declaration */
    char_t* (ECOCALLMETHOD *get_IdentifierName)(/* in */ IEcoToolchainAST1TypedefDeclarationPtr_t me);

    /* IEcoToolchainAST1TypedefDeclaration */
    IEcoToolchainAST1Type* (ECOCALLMETHOD *get_SourceType)(/* in */ IEcoToolchainAST1TypedefDeclarationPtr_t me);

} IEcoToolchainAST1TypedefDeclarationVTbl, *IEcoToolchainAST1TypedefDeclarationVTblPtr;

interface IEcoToolchainAST1TypedefDeclaration {
    struct IEcoToolchainAST1TypedefDeclarationVTbl *pVTbl;
} IEcoToolchainAST1TypedefDeclaration;

#endif /* __I_ECO_TOOLCHAIN_AST_1_TYPEDEF_DECLARATION_H__ */

