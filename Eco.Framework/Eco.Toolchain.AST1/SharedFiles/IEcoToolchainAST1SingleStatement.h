/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1SingleStatement
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1SingleStatement
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_SINGLE_STATMENT_H__
#define __I_ECO_TOOLCHAIN_AST_1_SINGLE_STATMENT_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1Type.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1SingleStatement IID = {937549A5-DFF7-41AE-AD21-166A74B0CC5A} */
#ifndef __IID_IEcoToolchainAST1SingleStatement
static const UGUID IID_IEcoToolchainAST1SingleStatement = {0x01, 0x10, {0x93, 0x75, 0x49, 0xA5, 0xDF, 0xF7, 0x41, 0xAE, 0xAD, 0x21, 0x16, 0x6A, 0x74, 0xB0, 0xCC, 0x5A} };
#endif /* __IID_IEcoToolchainAST1SingleStatement */

typedef struct IEcoToolchainAST1SingleStatement* IEcoToolchainAST1SingleStatementPtr_t;

typedef struct IEcoToolchainAST1SingleStatementVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1SingleStatementPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1SingleStatementPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1SingleStatementPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1SingleStatementPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1SingleStatementPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1SingleStatementPtr_t me);
    IEcoToolchainAST1SingleStatementPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1SingleStatementPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

} IEcoToolchainAST1SingleStatementVTbl, *IEcoToolchainAST1SingleStatementVTblPtr;

interface IEcoToolchainAST1SingleStatement {
    struct IEcoToolchainAST1SingleStatementVTbl *pVTbl;
} IEcoToolchainAST1SingleStatement;

#endif /* __I_ECO_TOOLCHAIN_AST_1_SINGLE_STATMENT_H__ */
