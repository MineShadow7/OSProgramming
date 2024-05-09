/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1MemberSelection
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1MemberSelection
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_MEMBER_SELECTION_H__
#define __I_ECO_TOOLCHAIN_AST_1_MEMBER_SELECTION_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1Expression.h"
#include "IEcoToolchainAST1SingleStatement.h"
#include "IEcoToolchainAST1Statement.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1MemberSelection IID = {02D70CE4-24FF-4A08-9FBB-601C91E64E76} */
#ifndef __IID_IEcoToolchainAST1MemberSelection
static const UGUID IID_IEcoToolchainAST1MemberSelection = {0x01, 0x10, {0x02, 0xD7, 0x0C, 0xE4, 0x24, 0xFF, 0x4A, 0x08, 0x9F, 0xBB, 0x60, 0x1C, 0x91, 0xE6, 0x4E, 0x76} };
#endif /* __IID_IEcoToolchainAST1MemberSelection */

typedef struct IEcoToolchainAST1MemberSelection* IEcoToolchainAST1MemberSelectionPtr_t;

typedef struct IEcoToolchainAST1MemberSelectionVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1MemberSelectionPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1MemberSelectionPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1MemberSelectionPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1MemberSelectionPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1MemberSelectionPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1MemberSelectionPtr_t me);
    IEcoToolchainAST1MemberSelectionPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1MemberSelectionPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Expression */
    IEcoToolchainAST1Type* (ECOCALLMETHOD *get_Type)(/* in */ IEcoToolchainAST1MemberSelectionPtr_t me);

    /* IEcoToolchainAST1MemberSelection */
    IEcoToolchainAST1Expression* (ECOCALLMETHOD *get_SourceExpression)(/* in */ IEcoToolchainAST1MemberSelectionPtr_t me);
    IEcoToolchainAST1VariableDefinition* (ECOCALLMETHOD *get_InternalExpression)(/* in */ IEcoToolchainAST1MemberSelectionPtr_t me);
    bool_t (ECOCALLMETHOD *isDirect)(/* in */ IEcoToolchainAST1MemberSelectionPtr_t me);

} IEcoToolchainAST1MemberSelectionVTbl, *IEcoToolchainAST1MemberSelectionVTblPtr;

interface IEcoToolchainAST1MemberSelection {
    struct IEcoToolchainAST1MemberSelectionVTbl *pVTbl;
} IEcoToolchainAST1MemberSelection;

#endif /* __I_ECO_TOOLCHAIN_AST_1_MEMBER_SELECTION_H__ */

