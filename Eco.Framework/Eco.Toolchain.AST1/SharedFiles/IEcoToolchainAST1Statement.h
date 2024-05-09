/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1Statement
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1Statement
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_STATEMENT_H__
#define __I_ECO_TOOLCHAIN_AST_1_STATEMENT_H__

#include "IEcoBase1.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1Statement IID = {F0BC0E8A-A598-42E1-9676-801CA6B18A25} */
#ifndef __IID_IEcoToolchainAST1Statement
static const UGUID IID_IEcoToolchainAST1Statement = {0x01, 0x10, {0xF0, 0xBC, 0x0E, 0x8A, 0xA5, 0x98, 0x42, 0xE1, 0x96, 0x76, 0x80, 0x1C, 0xA6, 0xB1, 0x8A, 0x25} };
#endif /* __IID_IEcoToolchainAST1Statement */

typedef struct IEcoToolchainAST1Statement* IEcoToolchainAST1StatementPtr_t;

typedef struct IEcoToolchainAST1StatementVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1StatementPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1StatementPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1StatementPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1StatementPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1StatementPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1StatementPtr_t me);
    IEcoToolchainAST1StatementPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1StatementPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

} IEcoToolchainAST1StatementVTbl, *IEcoToolchainAST1StatementVTblPtr;

interface IEcoToolchainAST1Statement {
    struct IEcoToolchainAST1StatementVTbl *pVTbl;
} IEcoToolchainAST1Statement;

#endif /* __I_ECO_TOOLCHAIN_AST_1_STATEMENT_H__ */

