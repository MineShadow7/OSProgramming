/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1CaseStatement
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1CaseStatement
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_CASE_STATEMENT_H__
#define __I_ECO_TOOLCHAIN_AST_1_CASE_STATEMENT_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1Statement.h"
#include "IEcoToolchainAST1SingleStatement.h"
#include "IEcoToolchainAST1Expression.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1CaseStatement IID = {985EF5C8-9E6A-4781-8C54-AE18C31C4EAA} */
#ifndef __IID_IEcoToolchainAST1CaseStatement
static const UGUID IID_IEcoToolchainAST1CaseStatement = {0x01, 0x10, {0x98, 0x5E, 0xF5, 0xC8, 0x9E, 0x6A, 0x47, 0x81, 0x8C, 0x54, 0xAE, 0x18, 0xC3, 0x1C, 0x4E, 0xAA} };
#endif /* __IID_IEcoToolchainAST1CaseStatement */

typedef struct IEcoToolchainAST1CaseStatement* IEcoToolchainAST1CaseStatementPtr_t;

typedef struct IEcoToolchainAST1CaseStatementVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1CaseStatementPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1CaseStatementPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1CaseStatementPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1CaseStatementPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1CaseStatementPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1CaseStatementPtr_t me);
    IEcoToolchainAST1CaseStatementPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1CaseStatementPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1CaseStatement */
    IEcoToolchainAST1Expression* (ECOCALLMETHOD *get_Expression)(/* in */ IEcoToolchainAST1CaseStatementPtr_t me);
    IEcoToolchainAST1Statement* (ECOCALLMETHOD *get_Statement)(/* in */ IEcoToolchainAST1CaseStatementPtr_t me);

} IEcoToolchainAST1CaseStatementVTbl, *IEcoToolchainAST1CaseStatementVTblPtr;

interface IEcoToolchainAST1CaseStatement {
    struct IEcoToolchainAST1CaseStatementVTbl *pVTbl;
} IEcoToolchainAST1CaseStatement;

#endif /* __I_ECO_TOOLCHAIN_AST_1_CASE_STATEMENT_H__ */

