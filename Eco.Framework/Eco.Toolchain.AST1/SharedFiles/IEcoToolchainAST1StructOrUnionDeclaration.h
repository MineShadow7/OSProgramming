/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1StructOrUnionDeclaration
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1StructOrUnionDeclaration
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_STRUCT_OR_UNION_DECLARATION_H__
#define __I_ECO_TOOLCHAIN_AST_1_STRUCT_OR_UNION_DECLARATION_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainLexicalAnalyzer1.h"
#include "IEcoToolchainAST1VariableDefinition.h"
#include "IEcoToolchainAST1BlockDeclarations.h"
#include "IEcoToolchainAST1BlockExpressions.h"
#include "IEcoToolchainAST1Scope.h"
#include "IEcoToolchainAST1Expression.h"

/* IEcoToolchainAST1StructOrUnionDeclaration IID = {82AA8D91-4E04-44BD-B3DF-EA237CEC4610} */
#ifndef __IID_IEcoToolchainAST1StructOrUnionDeclaration
static const UGUID IID_IEcoToolchainAST1StructOrUnionDeclaration = {0x01, 0x10, {0x82, 0xAA, 0x8D, 0x91, 0x4E, 0x04, 0x44, 0xBD, 0xB3, 0xDF, 0xEA, 0x23, 0x7C, 0xEC, 0x46, 0x10} };
#endif /* __IID_IEcoToolchainAST1StructOrUnionDeclaration */

/* Определение спецификаторов типа */
enum tagStructOrUnionSpecifier {
    ECO_TOOLCHAIN_AST1_STRUCT_TYPE = 0,      /* struct */
    ECO_TOOLCHAIN_AST1_UNION_TYPE            /* union */
};

typedef struct IEcoToolchainAST1StructOrUnionDeclaration* IEcoToolchainAST1StructOrUnionDeclarationPtr_t;

typedef struct IEcoToolchainAST1StructOrUnionDeclarationVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1StructOrUnionDeclarationPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1StructOrUnionDeclarationPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1StructOrUnionDeclarationPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1StructOrUnionDeclarationPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1StructOrUnionDeclarationPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1StructOrUnionDeclarationPtr_t me);
    IEcoToolchainAST1StructOrUnionDeclarationPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1StructOrUnionDeclarationPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Declaration */
    char_t* (ECOCALLMETHOD *get_IdentifierName)(/* in */ IEcoToolchainAST1StructOrUnionDeclarationPtr_t me);

    /* IEcoToolchainAST1StructOrUnionDeclaration */
    IEcoToolchainAST1BlockDeclarations* (ECOCALLMETHOD *get_Params)(/* in */ IEcoToolchainAST1StructOrUnionDeclarationPtr_t me);
    uint16_t (ECOCALLMETHOD *get_StructOrUnionType)(/* in */ IEcoToolchainAST1StructOrUnionDeclarationPtr_t me);
    struct IEcoToolchainAST1Scope* (ECOCALLMETHOD *get_Scope)(/* in */ IEcoToolchainAST1StructOrUnionDeclarationPtr_t me);
    IEcoToolchainAST1BlockExpressions* (ECOCALLMETHOD *get_Sizes)(/* in */ IEcoToolchainAST1StructOrUnionDeclarationPtr_t me);

} IEcoToolchainAST1StructOrUnionDeclarationVTbl, *IEcoToolchainAST1StructOrUnionDeclarationVTblPtr;

interface IEcoToolchainAST1StructOrUnionDeclaration {
    struct IEcoToolchainAST1StructOrUnionDeclarationVTbl *pVTbl;
} IEcoToolchainAST1StructOrUnionDeclaration;

#endif /* __I_ECO_TOOLCHAIN_AST_1_STRUCT_OR_UNION_DECLARATION_H__ */

