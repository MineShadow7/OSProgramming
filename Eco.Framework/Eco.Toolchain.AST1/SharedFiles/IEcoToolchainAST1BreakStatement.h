/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1BreakStatement
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1BreakStatement
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_BREAK_STATEMENT_H__
#define __I_ECO_TOOLCHAIN_AST_1_BREAK_STATEMENT_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1Statement.h"
#include "IEcoToolchainAST1SingleStatement.h"
#include "IEcoToolchainAST1Expression.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1BreakStatement IID = {985EF5C8-9E6A-4781-8C54-AE18C31C4332} */
#ifndef __IID_IEcoToolchainAST1BreakStatement
static const UGUID IID_IEcoToolchainAST1BreakStatement = {0x01, 0x10, {0x98, 0x5E, 0xF5, 0xC8, 0x9E, 0x6A, 0x47, 0x81, 0x8C, 0x54, 0xAE, 0x18, 0xC3, 0x1C, 0x43, 0x32} };
#endif /* __IID_IEcoToolchainAST1BreakStatement */

typedef struct IEcoToolchainAST1BreakStatement* IEcoToolchainAST1BreakStatementPtr_t;

typedef struct IEcoToolchainAST1BreakStatementVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1BreakStatementPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1BreakStatementPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1BreakStatementPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1BreakStatementPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1BreakStatementPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1BreakStatementPtr_t me);
    IEcoToolchainAST1BreakStatementPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1BreakStatementPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

} IEcoToolchainAST1BreakStatementVTbl, *IEcoToolchainAST1BreakStatementVTblPtr;

interface IEcoToolchainAST1BreakStatement {
    struct IEcoToolchainAST1BreakStatementVTbl *pVTbl;
} IEcoToolchainAST1BreakStatement;

#endif /* __I_ECO_TOOLCHAIN_AST_1_BREAK_STATEMENT_H__ */

