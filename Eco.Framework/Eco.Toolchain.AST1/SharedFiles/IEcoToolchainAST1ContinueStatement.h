/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1ContinueStatement
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1ContinueStatement
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_CONTINUE_STATEMENT_H__
#define __I_ECO_TOOLCHAIN_AST_1_CONTINUE_STATEMENT_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1Statement.h"
#include "IEcoToolchainAST1SingleStatement.h"
#include "IEcoToolchainAST1Expression.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1ContinueStatement IID = {985EF5C8-9E6A-4781-8C54-AE18C31C4462} */
#ifndef __IID_IEcoToolchainAST1ContinueStatement
static const UGUID IID_IEcoToolchainAST1ContinueStatement = {0x01, 0x10, {0x98, 0x5E, 0xF5, 0xC8, 0x9E, 0x6A, 0x47, 0x81, 0x8C, 0x54, 0xAE, 0x18, 0xC3, 0x1C, 0x44, 0x62} };
#endif /* __IID_IEcoToolchainAST1ContinueStatement */

typedef struct IEcoToolchainAST1ContinueStatement* IEcoToolchainAST1ContinueStatementPtr_t;

typedef struct IEcoToolchainAST1ContinueStatementVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1ContinueStatementPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1ContinueStatementPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1ContinueStatementPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1ContinueStatementPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1ContinueStatementPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1ContinueStatementPtr_t me);
    IEcoToolchainAST1ContinueStatementPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1ContinueStatementPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

} IEcoToolchainAST1ContinueStatementVTbl, *IEcoToolchainAST1ContinueStatementVTblPtr;

interface IEcoToolchainAST1ContinueStatement {
    struct IEcoToolchainAST1ContinueStatementVTbl *pVTbl;
} IEcoToolchainAST1ContinueStatement;

#endif /* __I_ECO_TOOLCHAIN_AST_1_CONTINUE_STATEMENT_H__ */

