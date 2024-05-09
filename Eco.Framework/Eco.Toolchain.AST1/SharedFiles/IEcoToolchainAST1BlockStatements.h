/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1BlockStatements
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1BlockStatements
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_BLOCK_STATEMENTS_H__
#define __I_ECO_TOOLCHAIN_AST_1_BLOCK_STATEMENTS_H__

#include "IEcoBase1.h"
#include "IEcoToolchainLexicalAnalyzer1.h"
#include "IEcoSystem1.h"
#include "IEcoToolchainAST1Statement.h"

/* IEcoToolchainAST1BlockBlockStatementss IID = {F0BC0E8A-A598-42E1-9676-801CA6B18301} */
#ifndef __IID_IEcoToolchainAST1BlockStatements
static const UGUID IID_IEcoToolchainAST1BlockStatements = {0x01, 0x10, {0xF0, 0xBC, 0x0E, 0x8A, 0xA5, 0x98, 0x42, 0xE1, 0x96, 0x76, 0x80, 0x1C, 0xA6, 0xB1, 0x83, 0x01} };
#endif /* __IID_IEcoToolchainAST1BlockStatements */

typedef struct IEcoToolchainAST1BlockStatements* IEcoToolchainAST1BlockStatementsPtr_t;

typedef struct IEcoToolchainAST1BlockStatementsVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1BlockStatementsPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1BlockStatementsPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1BlockStatementsPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1BlockStatementsPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1BlockStatementsPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1BlockStatementsPtr_t me);
    IEcoToolchainAST1BlockStatementsPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1BlockStatementsPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1BlockStatements */
    IEcoToolchainAST1Statement* (ECOCALLMETHOD *get_Statement)(/* in */ IEcoToolchainAST1BlockStatementsPtr_t me, uint32_t index);
    uint32_t (ECOCALLMETHOD *get_Count)(/* in */ IEcoToolchainAST1BlockStatementsPtr_t me);

} IEcoToolchainAST1BlockStatementsVTbl, *IEcoToolchainAST1BlockStatementsVTblPtr;

interface IEcoToolchainAST1BlockStatements {
    struct IEcoToolchainAST1BlockStatementsVTbl *pVTbl;
} IEcoToolchainAST1BlockStatements;

#endif /* __I_ECO_TOOLCHAIN_AST_1_BLOCK_STATEMENTS_H__ */

