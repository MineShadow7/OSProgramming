/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1ArrayType
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1ArrayType
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_ARRAYTYPE_H__
#define __I_ECO_TOOLCHAIN_AST_1_ARRAYTYPE_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1Type.h"
#include "IEcoToolchainLexicalAnalyzer1.h"
#include "IEcoToolchainAST1Expression.h"

/* IEcoToolchainAST1ArrayType IID = {950EC30B-18C9-4CA4-BB6D-63277A29C740} */
#ifndef __IID_IEcoToolchainAST1ArrayType
static const UGUID IID_IEcoToolchainAST1ArrayType =  { 0x01, 0x10, {0x95, 0x0E, 0xC3, 0x0B, 0x18, 0xC9, 0x4C, 0xA4, 0xBB, 0x6D, 0x63, 0x27, 0x7A, 0x29, 0xC7, 0x40 } };
#endif /* __IID_IEcoToolchainAST1ArrayType */

typedef struct IEcoToolchainAST1ArrayType* IEcoToolchainAST1ArrayTypePtr_t;

typedef struct IEcoToolchainAST1ArrayTypeVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1ArrayTypePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1ArrayTypePtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1ArrayTypePtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1ArrayTypePtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1ArrayTypePtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1ArrayTypePtr_t me);
    IEcoToolchainAST1ArrayTypePtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1ArrayTypePtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Type */
    bool_t (ECOCALLMETHOD *IsConst)(/* in */ IEcoToolchainAST1ArrayTypePtr_t me);
    uint16_t (ECOCALLMETHOD *get_ClassTypeSpecifier)(/* in */ IEcoToolchainAST1ArrayTypePtr_t me);

    /* IEcoToolchainAST1ArrayType */
    IEcoToolchainAST1Type* (ECOCALLMETHOD *get_IntegralType)(/* in */ IEcoToolchainAST1ArrayTypePtr_t me);
    IEcoToolchainAST1Expression* (ECOCALLMETHOD *get_CountExpression)(/* in */ IEcoToolchainAST1ArrayTypePtr_t me);

} IEcoToolchainAST1ArrayTypeVTbl, *IEcoToolchainAST1ArrayTypeVTblPtr;

interface IEcoToolchainAST1ArrayType {
    struct IEcoToolchainAST1ArrayTypeVTbl *pVTbl;
} IEcoToolchainAST1ArrayType;

#endif /* __I_ECO_TOOLCHAIN_AST_1_ARRAYTYPE_H__ */

