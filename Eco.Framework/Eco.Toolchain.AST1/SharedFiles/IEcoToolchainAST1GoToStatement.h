/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1GoToStatement
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1GoToStatement
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_GOTO_STATEMENT_H__
#define __I_ECO_TOOLCHAIN_AST_1_GOTO_STATEMENT_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1Statement.h"
#include "IEcoToolchainAST1SingleStatement.h"
#include "IEcoToolchainAST1Expression.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1GoToStatement IID = {985EF5C8-9E6A-4781-8C54-AE18C31C4DA3} */
#ifndef __IID_IEcoToolchainAST1GoToStatement
static const UGUID IID_IEcoToolchainAST1GoToStatement = {0x01, 0x10, {0x98, 0x5E, 0xF5, 0xC8, 0x9E, 0x6A, 0x47, 0x81, 0x8C, 0x54, 0xAE, 0x18, 0xC3, 0x1C, 0x4D, 0xA3} };
#endif /* __IID_IEcoToolchainAST1GoToStatement */

typedef struct IEcoToolchainAST1GoToStatement* IEcoToolchainAST1GoToStatementPtr_t;

typedef struct IEcoToolchainAST1GoToStatementVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1GoToStatementPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1GoToStatementPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1GoToStatementPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1GoToStatementPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1GoToStatementPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1GoToStatementPtr_t me);
    IEcoToolchainAST1GoToStatementPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1GoToStatementPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1GoToStatement */
    char_t* (ECOCALLMETHOD *get_LabelName)(/* in */ IEcoToolchainAST1GoToStatementPtr_t me);

} IEcoToolchainAST1GoToStatementVTbl, *IEcoToolchainAST1GoToStatementVTblPtr;

interface IEcoToolchainAST1GoToStatement {
    struct IEcoToolchainAST1GoToStatementVTbl *pVTbl;
} IEcoToolchainAST1GoToStatement;

#endif /* __I_ECO_TOOLCHAIN_AST_1_GOTO_STATEMENT_H__ */

