/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1StringLiteral
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1StringLiteral
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_STRING_LITERAL_H__
#define __I_ECO_TOOLCHAIN_AST_1_STRING_LITERAL_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1Expression.h"
#include "IEcoToolchainAST1SingleStatement.h"
#include "IEcoToolchainAST1Statement.h"
#include "IEcoToolchainAST1Literal.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1StringLiteral IID = {86E98192-2759-4F47-ABCC-C68C7A456AD4} */
#ifndef __IID_IEcoToolchainAST1StringLiteral
static const UGUID IID_IEcoToolchainAST1StringLiteral = {0x01, 0x10, {0x86, 0xE9, 0x81, 0x92, 0x27, 0x59, 0x4F, 0x47, 0xAB, 0xCC, 0xC6, 0x8C, 0x7A, 0x45, 0x6A, 0xD4} };
#endif /* __IID_IEcoToolchainAST1StringLiteral */

typedef struct IEcoToolchainAST1StringLiteral* IEcoToolchainAST1StringLiteralPtr_t;

typedef struct IEcoToolchainAST1StringLiteralVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1StringLiteralPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1StringLiteralPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1StringLiteralPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1StringLiteralPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1StringLiteralPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1StringLiteralPtr_t me);
    IEcoToolchainAST1StringLiteralPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1StringLiteralPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Expression */
    IEcoToolchainAST1Type* (ECOCALLMETHOD *get_Type)(/* in */ IEcoToolchainAST1StringLiteralPtr_t me);

    /* IEcoToolchainAST1Literal */
    char_t* (ECOCALLMETHOD *get_Value)(/* in */ IEcoToolchainAST1StringLiteralPtr_t me);

} IEcoToolchainAST1StringLiteralVTbl, *IEcoToolchainAST1StringLiteralVTblPtr;

interface IEcoToolchainAST1StringLiteral {
    struct IEcoToolchainAST1StringLiteralVTbl *pVTbl;
} IEcoToolchainAST1StringLiteral;

#endif /* __I_ECO_TOOLCHAIN_AST_1_STRING_LITERAL_H__ */

