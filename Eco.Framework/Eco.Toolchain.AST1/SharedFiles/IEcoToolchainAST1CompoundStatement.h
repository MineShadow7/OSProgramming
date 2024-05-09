/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1CompoundStatement
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1CompoundStatement
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_COMPOUND_STATEMENT_H__
#define __I_ECO_TOOLCHAIN_AST_1_COMPOUND_STATEMENT_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1BlockDeclarations.h"
#include "IEcoToolchainAST1BlockStatements.h"
#include "IEcoToolchainAST1Scope.h"

/* IEcoToolchainAST1CompoundStatement IID = {985EF5C8-9E6A-4781-8C54-AE18C31C4443} */
#ifndef __IID_IEcoToolchainAST1CompoundStatement
static const UGUID IID_IEcoToolchainAST1CompoundStatement = {0x01, 0x10, {0x98, 0x5E, 0xF5, 0xC8, 0x9E, 0x6A, 0x47, 0x81, 0x8C, 0x54, 0xAE, 0x18, 0xC3, 0x1C, 0x44, 0x43} };
#endif /* __IID_IEcoToolchainAST1CompoundStatement */

typedef struct IEcoToolchainAST1CompoundStatement* IEcoToolchainAST1CompoundStatementPtr_t;

typedef struct IEcoToolchainAST1CompoundStatementVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1CompoundStatementPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1CompoundStatementPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1CompoundStatementPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1CompoundStatementPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1CompoundStatementPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1CompoundStatementPtr_t me);
    IEcoToolchainAST1CompoundStatementPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1CompoundStatementPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1CompoundStatement */
    IEcoToolchainAST1BlockDeclarations* (ECOCALLMETHOD *get_BlockDeclarations)(/* in */ IEcoToolchainAST1CompoundStatementPtr_t me);
    IEcoToolchainAST1BlockStatements* (ECOCALLMETHOD *get_BlockStatements)(/* in */ IEcoToolchainAST1CompoundStatementPtr_t me);
    IEcoToolchainAST1Scope* (ECOCALLMETHOD *get_Scope)(/* in */ IEcoToolchainAST1CompoundStatementPtr_t me);

} IEcoToolchainAST1CompoundStatementVTbl, *IEcoToolchainAST1CompoundStatementVTblPtr;

interface IEcoToolchainAST1CompoundStatement {
    struct IEcoToolchainAST1CompoundStatementVTbl *pVTbl;
} IEcoToolchainAST1CompoundStatement;

#endif /* __I_ECO_TOOLCHAIN_AST_1_COMPOUND_STATEMENT_H__ */

