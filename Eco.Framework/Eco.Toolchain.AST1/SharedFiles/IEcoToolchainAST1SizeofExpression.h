/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1SizeofExpression
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1SizeofExpression
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_SIZEOF_EXPRESSION_H__
#define __I_ECO_TOOLCHAIN_AST_1_SIZEOF_EXPRESSION_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1Statement.h"
#include "IEcoToolchainAST1SingleStatement.h"
#include "IEcoToolchainAST1Expression.h"
#include "IEcoToolchainLexicalAnalyzer1.h"
#include "IEcoToolchainAST1VariableDefinition.h"

/* IEcoToolchainAST1SizeofExpression IID = {985EF5C8-9E6A-4781-8C54-AE18C31C4AD1} */
#ifndef __IID_IEcoToolchainAST1SizeofExpression
static const UGUID IID_IEcoToolchainAST1SizeofExpression = {0x01, 0x10, {0x98, 0x5E, 0xF5, 0xC8, 0x9E, 0x6A, 0x47, 0x81, 0x8C, 0x54, 0xAE, 0x18, 0xC3, 0x1C, 0x4A, 0xD1} };
#endif /* __IID_IEcoToolchainAST1SizeofExpression */

typedef struct IEcoToolchainAST1SizeofExpression* IEcoToolchainAST1SizeofExpressionPtr_t;

typedef struct IEcoToolchainAST1SizeofExpressionVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1SizeofExpressionPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1SizeofExpressionPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1SizeofExpressionPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1SizeofExpressionPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1SizeofExpressionPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1SizeofExpressionPtr_t me);
    IEcoToolchainAST1SizeofExpressionPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1SizeofExpressionPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Expression */
    IEcoToolchainAST1Type* (ECOCALLMETHOD *get_Type)(/* in */ IEcoToolchainAST1SizeofExpressionPtr_t me);

    /* IEcoToolchainAST1SizeofExpression */
    IEcoToolchainAST1Expression* (ECOCALLMETHOD *get_InternalExpression)(/* in */ IEcoToolchainAST1SizeofExpressionPtr_t me);

} IEcoToolchainAST1SizeofExpressionVTbl, *IEcoToolchainAST1SizeofExpressionVTblPtr;

interface IEcoToolchainAST1SizeofExpression {
    struct IEcoToolchainAST1SizeofExpressionVTbl *pVTbl;
} IEcoToolchainAST1SizeofExpression;

#endif /* __I_ECO_TOOLCHAIN_AST_1_SIZEOF_EXPRESSION_H__ */

