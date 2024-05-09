/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1GlobalScope
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1GlobalScope
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_GLOBAL_SCOPE_H__
#define __I_ECO_TOOLCHAIN_AST_1_GLOBAL_SCOPE_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1Scope.h"
#include "IEcoToolchainLexicalAnalyzer1.h"
#include "IEcoToolchainAST1FunctionDefinition.h"


/* IEcoToolchainAST1GlobalScope IID = {985EF5C8-9E6A-4781-8C54-AE18C31C4967} */
#ifndef __IID_IEcoToolchainAST1GlobalScope
static const UGUID IID_IEcoToolchainAST1GlobalScope = {0x01, 0x10, {0x98, 0x5E, 0xF5, 0xC8, 0x9E, 0x6A, 0x47, 0x81, 0x8C, 0x54, 0xAE, 0x18, 0xC3, 0x1C, 0x49, 0x67} };
#endif /* __IID_IEcoToolchainAST1GlobalScope */

typedef struct IEcoToolchainAST1GlobalScope* IEcoToolchainAST1GlobalScopePtr_t;

typedef struct IEcoToolchainAST1GlobalScopeVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me);
    IEcoToolchainAST1GlobalScopePtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Scope */
    IEcoToolchainAST1Scope* (ECOCALLMETHOD *get_ParentScope)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me);
    IEcoList1* (ECOCALLMETHOD *get_ChildScopes)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me);
    int16_t (ECOCALLMETHOD *add_ChildScope)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me, /* in */ struct IEcoToolchainAST1Scope* pIChildScope);
    IEcoToolchainAST1Declaration* (ECOCALLMETHOD *FindByIdentifier)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me, /* in */ char_t* name);
    IEcoToolchainAST1Declaration* (ECOCALLMETHOD *FindByIdentifierOnCurrentLevel)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me, /* in */ char_t* name);
    int16_t (ECOCALLMETHOD *RegistDeclaration)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me, /* in */ IEcoToolchainAST1Declaration* pIDeclaration);
    IEcoToolchainAST1StructOrUnionDeclaration* (ECOCALLMETHOD *FindStructDeclarationByIdentifier)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me, /* in */ char_t* name);
    IEcoToolchainAST1StructOrUnionDeclaration* (ECOCALLMETHOD *FindStructDeclarationByIdentifierOnCurrentLevel)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me, /* in */ char_t* name);
    IEcoToolchainAST1EnumDeclaration* (ECOCALLMETHOD *FindEnumDeclarationByIdentifier)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me, /* in */ char_t* name);
    IEcoToolchainAST1EnumDeclaration* (ECOCALLMETHOD *FindEnumDeclarationByIdentifierOnCurrentLevel)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me, /* in */ char_t* name);
    int16_t (ECOCALLMETHOD *RegistUndeclaredType)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me, /* in */ IEcoToolchainAST1StructOrUnionType* pIType);
    int16_t (ECOCALLMETHOD *RegistUndeclaredEnumType)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me, /* in */ IEcoToolchainAST1EnumType* pIType);
    int16_t (ECOCALLMETHOD *DeclareType)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me, /* in */ IEcoToolchainAST1StructOrUnionDeclaration* pIDeclaration);
    int16_t (ECOCALLMETHOD *DeclareEnumType)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me, /* in */ IEcoToolchainAST1EnumDeclaration* pIDeclaration);
    IEcoList1* (ECOCALLMETHOD *get_Declarations)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me);
    IEcoList1* (ECOCALLMETHOD *get_StructOrUnionDeclarations)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me);
    IEcoList1* (ECOCALLMETHOD *get_EnumDeclarations)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me);
    IEcoList1* (ECOCALLMETHOD *get_UndeclaredTypes)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me);
    IEcoList1* (ECOCALLMETHOD *get_UndeclaredEnumTypes)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me);

    /* IEcoToolchainAST1GlobalScope */
    IEcoToolchainAST1FunctionDefinition* (ECOCALLMETHOD *FindFunctionDefenitionByIdentifier)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me, /* in */ char_t* name);
    int16_t (ECOCALLMETHOD *RegistFunctionDefinition)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me, /* in */ IEcoToolchainAST1FunctionDefinition* pIDefinition);
    IEcoList1* (ECOCALLMETHOD *get_FunctionDefinitions)(/* in */ IEcoToolchainAST1GlobalScopePtr_t me);

} IEcoToolchainAST1GlobalScopeVTbl, *IEcoToolchainAST1GlobalScopeVTblPtr;

interface IEcoToolchainAST1GlobalScope {
    struct IEcoToolchainAST1GlobalScopeVTbl *pVTbl;
} IEcoToolchainAST1GlobalScope;

#endif /* __I_ECO_TOOLCHAIN_AST_1_GLOBAL_SCOPE_H__ */

