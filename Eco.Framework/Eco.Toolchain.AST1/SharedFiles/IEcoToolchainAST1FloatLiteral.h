/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1FloatLiteral
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1FloatLiteral
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_FLOAT_LITERAL_H__
#define __I_ECO_TOOLCHAIN_AST_1_FLOAT_LITERAL_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1Expression.h"
#include "IEcoToolchainAST1SingleStatement.h"
#include "IEcoToolchainAST1Statement.h"
#include "IEcoToolchainAST1Literal.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1FloatLiteral IID = {86E98192-2759-4F47-ABCC-C68C7A456570} */
#ifndef __IID_IEcoToolchainAST1FloatLiteral
static const UGUID IID_IEcoToolchainAST1FloatLiteral = {0x01, 0x10, {0x86, 0xE9, 0x81, 0x92, 0x27, 0x59, 0x4F, 0x47, 0xAB, 0xCC, 0xC6, 0x8C, 0x7A, 0x45, 0x65, 0x70} };
#endif /* __IID_IEcoToolchainAST1FloatLiteral */

typedef struct IEcoToolchainAST1FloatLiteral* IEcoToolchainAST1FloatLiteralPtr_t;

typedef struct IEcoToolchainAST1FloatLiteralVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1FloatLiteralPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1FloatLiteralPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1FloatLiteralPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1FloatLiteralPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1FloatLiteralPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1FloatLiteralPtr_t me);
    IEcoToolchainAST1FloatLiteralPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1FloatLiteralPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Expression */
    IEcoToolchainAST1Type* (ECOCALLMETHOD *get_Type)(/* in */ IEcoToolchainAST1FloatLiteralPtr_t me);

    /* IEcoToolchainAST1Literal */
    char_t* (ECOCALLMETHOD *get_Value)(/* in */ IEcoToolchainAST1FloatLiteralPtr_t me);

} IEcoToolchainAST1FloatLiteralVTbl, *IEcoToolchainAST1FloatLiteralVTblPtr;

interface IEcoToolchainAST1FloatLiteral {
    struct IEcoToolchainAST1FloatLiteralVTbl *pVTbl;
} IEcoToolchainAST1FloatLiteral;

#endif /* __I_ECO_TOOLCHAIN_AST_1_FLOAT_LITERAL_H__ */

