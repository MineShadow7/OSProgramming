/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1ForStatement
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1ForStatement
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_FOR_STATEMENT_H__
#define __I_ECO_TOOLCHAIN_AST_1_FOR_STATEMENT_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1Statement.h"
#include "IEcoToolchainAST1SingleStatement.h"
#include "IEcoToolchainAST1Expression.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1ForStatement IID = {985EF5C8-9E6A-4781-8C54-AE18C31C4FF5} */
#ifndef __IID_IEcoToolchainAST1ForStatement
static const UGUID IID_IEcoToolchainAST1ForStatement = {0x01, 0x10, {0x98, 0x5E, 0xF5, 0xC8, 0x9E, 0x6A, 0x47, 0x81, 0x8C, 0x54, 0xAE, 0x18, 0xC3, 0x1C, 0x4F, 0xF5} };
#endif /* __IID_IEcoToolchainAST1ForStatement */

typedef struct IEcoToolchainAST1ForStatement* IEcoToolchainAST1ForStatementPtr_t;

typedef struct IEcoToolchainAST1ForStatementVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1ForStatementPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1ForStatementPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1ForStatementPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1ForStatementPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1ForStatementPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1ForStatementPtr_t me);
    IEcoToolchainAST1ForStatementPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1ForStatementPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1ForStatement */
    IEcoToolchainAST1Expression* (ECOCALLMETHOD *get_InitExpression)(/* in */ IEcoToolchainAST1ForStatementPtr_t me);
    IEcoToolchainAST1Expression* (ECOCALLMETHOD *get_TestExpression)(/* in */ IEcoToolchainAST1ForStatementPtr_t me);
    IEcoToolchainAST1Expression* (ECOCALLMETHOD *get_IterExpression)(/* in */ IEcoToolchainAST1ForStatementPtr_t me);
    IEcoToolchainAST1Statement* (ECOCALLMETHOD *get_InternalStatement)(/* in */ IEcoToolchainAST1ForStatementPtr_t me);

} IEcoToolchainAST1ForStatementVTbl, *IEcoToolchainAST1ForStatementVTblPtr;

interface IEcoToolchainAST1ForStatement {
    struct IEcoToolchainAST1ForStatementVTbl *pVTbl;
} IEcoToolchainAST1ForStatement;

#endif /* __I_ECO_TOOLCHAIN_AST_1_FOR_STATEMENT_H__ */

