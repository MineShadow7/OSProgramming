/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1Literal
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1Literal
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_LITERAL_H__
#define __I_ECO_TOOLCHAIN_AST_1_LITERAL_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1Type.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1Literal IID = {49BA0D4B-4C5A-42FF-856C-3E6176D91D50} */
#ifndef __IID_IEcoToolchainAST1Literal
static const UGUID IID_IEcoToolchainAST1Literal = {0x01, 0x10, {0x49, 0xBA, 0x0D, 0x4B, 0x4C, 0x5A, 0x42, 0xFF, 0x85, 0x6C, 0x3E, 0x61, 0x76, 0xD9, 0x1D, 0x50} };
#endif /* __IID_IEcoToolchainAST1Literal */

typedef struct IEcoToolchainAST1Literal* IEcoToolchainAST1LiteralPtr_t;

typedef struct IEcoToolchainAST1LiteralVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1LiteralPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1LiteralPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1LiteralPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1LiteralPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1LiteralPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1LiteralPtr_t me);
    IEcoToolchainAST1LiteralPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1LiteralPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Expression */
    IEcoToolchainAST1Type* (ECOCALLMETHOD *get_Type)(/* in */ IEcoToolchainAST1LiteralPtr_t me);

    /* IEcoToolchainAST1Literal */
    char_t* (ECOCALLMETHOD *get_Value)(/* in */ IEcoToolchainAST1LiteralPtr_t me);

} IEcoToolchainAST1LiteralVTbl, *IEcoToolchainAST1LiteralVTblPtr;

interface IEcoToolchainAST1Literal {
    struct IEcoToolchainAST1LiteralVTbl *pVTbl;
} IEcoToolchainAST1Literal;

#endif /* __I_ECO_TOOLCHAIN_AST_1_LITERAL_H__ */

