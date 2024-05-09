/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1DoWhileStatement
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1DoWhileStatement
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_DOWHILE_STATEMENT_H__
#define __I_ECO_TOOLCHAIN_AST_1_DOWHILE_STATEMENT_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1Statement.h"
#include "IEcoToolchainAST1SingleStatement.h"
#include "IEcoToolchainAST1Expression.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1DoWhileStatement IID = {985EF5C8-9E6A-4781-8C54-AE18C31C4054} */
#ifndef __IID_IEcoToolchainAST1DoWhileStatement
static const UGUID IID_IEcoToolchainAST1DoWhileStatement = {0x01, 0x10, {0x98, 0x5E, 0xF5, 0xC8, 0x9E, 0x6A, 0x47, 0x81, 0x8C, 0x54, 0xAE, 0x18, 0xC3, 0x1C, 0x40, 0x54} };
#endif /* __IID_IEcoToolchainAST1DoWhileStatement */

typedef struct IEcoToolchainAST1DoWhileStatement* IEcoToolchainAST1DoWhileStatementPtr_t;

typedef struct IEcoToolchainAST1DoWhileStatementVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1DoWhileStatementPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1DoWhileStatementPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1DoWhileStatementPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1DoWhileStatementPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1DoWhileStatementPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1DoWhileStatementPtr_t me);
    IEcoToolchainAST1DoWhileStatementPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1DoWhileStatementPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1DoWhileStatement */
    IEcoToolchainAST1Expression* (ECOCALLMETHOD *get_TestExpression)(/* in */ IEcoToolchainAST1DoWhileStatementPtr_t me);
    IEcoToolchainAST1Statement* (ECOCALLMETHOD *get_InternalStatement)(/* in */ IEcoToolchainAST1DoWhileStatementPtr_t me);

} IEcoToolchainAST1DoWhileStatementVTbl, *IEcoToolchainAST1DoWhileStatementVTblPtr;

interface IEcoToolchainAST1DoWhileStatement {
    struct IEcoToolchainAST1DoWhileStatementVTbl *pVTbl;
} IEcoToolchainAST1DoWhileStatement;

#endif /* __I_ECO_TOOLCHAIN_AST_1_DOWHILE_STATEMENT_H__ */

