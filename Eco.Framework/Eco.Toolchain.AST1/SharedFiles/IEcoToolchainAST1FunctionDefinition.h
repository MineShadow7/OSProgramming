/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1FunctionDefinition
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1FunctionDefinition
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_FUNCTION_DEFINITION_H__
#define __I_ECO_TOOLCHAIN_AST_1_FUNCTION_DEFINITION_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainLexicalAnalyzer1.h"
#include "IEcoToolchainAST1FunctionDeclaration.h"
#include "IEcoToolchainAST1CompoundStatement.h"
#include "IEcoToolchainAST1Scope.h"

/* IEcoToolchainAST1FunctionDefinition IID = {82AA8D91-4E04-44BD-B3DF-EA237CE56834} */
#ifndef __IID_IEcoToolchainAST1FunctionDefinition
static const UGUID IID_IEcoToolchainAST1FunctionDefinition = {0x01, 0x10, {0x82, 0xAA, 0x8D, 0x91, 0x4E, 0x04, 0x44, 0xBD, 0xB3, 0xDF, 0xEA, 0x23, 0x7C, 0xE5, 0x68, 0x34} };
#endif /* __IID_IEcoToolchainAST1FunctionDefinition */

typedef struct IEcoToolchainAST1FunctionDefinition* IEcoToolchainAST1FunctionDefinitionPtr_t;

typedef struct IEcoToolchainAST1FunctionDefinitionVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1FunctionDefinitionPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1FunctionDefinitionPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1FunctionDefinitionPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1FunctionDefinitionPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1FunctionDefinitionPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1FunctionDefinitionPtr_t me);
    IEcoToolchainAST1FunctionDefinitionPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1FunctionDefinitionPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1FunctionDefinition */
    IEcoToolchainAST1FunctionDeclaration* (ECOCALLMETHOD *get_Declaration)(/* in */ IEcoToolchainAST1FunctionDefinitionPtr_t me);
    IEcoToolchainAST1CompoundStatement* (ECOCALLMETHOD *get_Body)(/* in */ IEcoToolchainAST1FunctionDefinitionPtr_t me);

} IEcoToolchainAST1FunctionDefinitionVTbl, *IEcoToolchainAST1FunctionDefinitionVTblPtr;

interface IEcoToolchainAST1FunctionDefinition {
    struct IEcoToolchainAST1FunctionDefinitionVTbl *pVTbl;
} IEcoToolchainAST1FunctionDefinition;

#endif /* __I_ECO_TOOLCHAIN_AST_1_FUNCTION_DEFINITION_H__ */

