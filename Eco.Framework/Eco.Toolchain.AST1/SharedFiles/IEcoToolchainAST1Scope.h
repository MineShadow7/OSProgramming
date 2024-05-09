/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1Scope
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1Scope
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_SCOPE_H__
#define __I_ECO_TOOLCHAIN_AST_1_SCOPE_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainLexicalAnalyzer1.h"
#include "IEcoToolchainAST1Declaration.h"
#include "IEcoToolchainAST1StructOrUnionDeclaration.h"
#include "IEcoToolchainAST1StructOrUnionType.h"
#include "IEcoToolchainAST1EnumDeclaration.h"
#include "IEcoToolchainAST1EnumType.h"


/* IEcoToolchainAST1Scope IID = {EFE01C87-3641-420F-8C24-DF2668126111} */
#ifndef __IID_IEcoToolchainAST1Scope
static const UGUID IID_IEcoToolchainAST1Scope = {0x01, 0x10, {0xEF, 0xE0, 0x1C, 0x87, 0x36, 0x41, 0x42, 0x0F, 0x8C, 0x24, 0xDF, 0x26, 0x68, 0x12, 0x61, 0x11} };
#endif /* __IID_IEcoToolchainAST1Scope */

typedef struct IEcoToolchainAST1Scope* IEcoToolchainAST1ScopePtr_t;

typedef struct IEcoToolchainAST1ScopeVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1ScopePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1ScopePtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1ScopePtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1ScopePtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1ScopePtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1ScopePtr_t me);
    IEcoToolchainAST1ScopePtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1ScopePtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Scope */
    IEcoToolchainAST1ScopePtr_t (ECOCALLMETHOD *get_ParentScope)(/* in */ IEcoToolchainAST1ScopePtr_t me);
    IEcoList1* (ECOCALLMETHOD *get_ChildScopes)(/* in */ IEcoToolchainAST1ScopePtr_t me);
    int16_t (ECOCALLMETHOD *add_ChildScope)(/* in */ IEcoToolchainAST1ScopePtr_t me, /* in */ IEcoToolchainAST1ScopePtr_t pIChildScope);
    IEcoToolchainAST1Declaration* (ECOCALLMETHOD *FindByIdentifier)(/* in */ IEcoToolchainAST1ScopePtr_t me, /* in */ char_t* name);
    IEcoToolchainAST1Declaration* (ECOCALLMETHOD *FindByIdentifierOnCurrentLevel)(/* in */ IEcoToolchainAST1ScopePtr_t me, /* in */ char_t* name);
    int16_t (ECOCALLMETHOD *RegistDeclaration)(/* in */ IEcoToolchainAST1ScopePtr_t me, /* in */ IEcoToolchainAST1Declaration* pIDeclaration);
    struct IEcoToolchainAST1StructOrUnionDeclaration* (ECOCALLMETHOD *FindStructDeclarationByIdentifier)(/* in */ IEcoToolchainAST1ScopePtr_t me, /* in */ char_t* name);
    struct IEcoToolchainAST1StructOrUnionDeclaration* (ECOCALLMETHOD *FindStructDeclarationByIdentifierOnCurrentLevel)(/* in */ IEcoToolchainAST1ScopePtr_t me, /* in */ char_t* name);
    struct IEcoToolchainAST1EnumDeclaration* (ECOCALLMETHOD *FindEnumDeclarationByIdentifier)(/* in */ IEcoToolchainAST1ScopePtr_t me, /* in */ char_t* name);
    struct IEcoToolchainAST1EnumDeclaration* (ECOCALLMETHOD *FindEnumDeclarationByIdentifierOnCurrentLevel)(/* in */ IEcoToolchainAST1ScopePtr_t me, /* in */ char_t* name);
    int16_t (ECOCALLMETHOD *RegistUndeclaredType)(/* in */ IEcoToolchainAST1ScopePtr_t me, /* in */ struct IEcoToolchainAST1StructOrUnionType* pIType);
    int16_t (ECOCALLMETHOD *RegistUndeclaredEnumType)(/* in */ IEcoToolchainAST1ScopePtr_t me, /* in */ struct IEcoToolchainAST1EnumType* pIType);
    int16_t (ECOCALLMETHOD *DeclareType)(/* in */ IEcoToolchainAST1ScopePtr_t me, /* in */ struct IEcoToolchainAST1StructOrUnionDeclaration* pIDeclaration);
    int16_t (ECOCALLMETHOD *DeclareEnumType)(/* in */ IEcoToolchainAST1ScopePtr_t me, /* in */ struct IEcoToolchainAST1EnumDeclaration* pIDeclaration);
    IEcoList1* (ECOCALLMETHOD *get_Declarations)(/* in */ IEcoToolchainAST1ScopePtr_t me);
    IEcoList1* (ECOCALLMETHOD *get_StructOrUnionDeclarations)(/* in */ IEcoToolchainAST1ScopePtr_t me);
    IEcoList1* (ECOCALLMETHOD *get_EnumDeclarations)(/* in */ IEcoToolchainAST1ScopePtr_t me);
    IEcoList1* (ECOCALLMETHOD *get_UndeclaredTypes)(/* in */ IEcoToolchainAST1ScopePtr_t me);
    IEcoList1* (ECOCALLMETHOD *get_UndeclaredEnumTypes)(/* in */ IEcoToolchainAST1ScopePtr_t me);

} IEcoToolchainAST1ScopeVTbl, *IEcoToolchainAST1ScopeVTblPtr;

interface IEcoToolchainAST1Scope {
    struct IEcoToolchainAST1ScopeVTbl *pVTbl;
} IEcoToolchainAST1Scope;

#endif /* __I_ECO_TOOLCHAIN_AST_1_SCOPE_H__ */

