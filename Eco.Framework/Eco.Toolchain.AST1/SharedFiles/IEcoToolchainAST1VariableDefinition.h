/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1VariableDefinition
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1VariableDefinition
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_VARIABLE_DEFINITION_H__
#define __I_ECO_TOOLCHAIN_AST_1_VARIABLE_DEFINITION_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1Statement.h"
#include "IEcoToolchainAST1SingleStatement.h"
#include "IEcoToolchainAST1Expression.h"
#include "IEcoToolchainLexicalAnalyzer1.h"
#include "IEcoToolchainAST1ExpressionableDeclaration.h"

/* IEcoToolchainAST1VariableDefinition IID = {985EF5C8-9E6A-4781-8C54-AE18C31C4ADB} */
#ifndef __IID_IEcoToolchainAST1VariableDefinition
static const UGUID IID_IEcoToolchainAST1VariableDefinition = {0x01, 0x10, {0x98, 0x5E, 0xF5, 0xC8, 0x9E, 0x6A, 0x47, 0x81, 0x8C, 0x54, 0xAE, 0x18, 0xC3, 0x1C, 0x4A, 0xDB} };
#endif /* __IID_IEcoToolchainAST1VariableDefinition */

typedef struct IEcoToolchainAST1VariableDefinition* IEcoToolchainAST1VariableDefinitionPtr_t;

typedef struct IEcoToolchainAST1VariableDefinitionVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1VariableDefinitionPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1VariableDefinitionPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1VariableDefinitionPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1VariableDefinitionPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1VariableDefinitionPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1VariableDefinitionPtr_t me);
    IEcoToolchainAST1VariableDefinitionPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1VariableDefinitionPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Expression */
    IEcoToolchainAST1Type* (ECOCALLMETHOD *get_Type)(/* in */ IEcoToolchainAST1VariableDefinitionPtr_t me);

    /* IEcoToolchainAST1VariableDefinition */
    char_t* (ECOCALLMETHOD *get_IdentifierName)(/* in */ IEcoToolchainAST1VariableDefinitionPtr_t me);
    IEcoToolchainAST1ExpressionableDeclaration* (ECOCALLMETHOD *get_Declaration)(/* in */ IEcoToolchainAST1VariableDefinitionPtr_t me);

} IEcoToolchainAST1VariableDefinitionVTbl, *IEcoToolchainAST1VariableDefinitionVTblPtr;

interface IEcoToolchainAST1VariableDefinition {
    struct IEcoToolchainAST1VariableDefinitionVTbl *pVTbl;
} IEcoToolchainAST1VariableDefinition;

#endif /* __I_ECO_TOOLCHAIN_AST_1_VARIABLE_DEFINITION_H__ */

