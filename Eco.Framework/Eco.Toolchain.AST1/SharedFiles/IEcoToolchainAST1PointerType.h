/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1PointerType
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1PointerType
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_POINTER_TYPE_H__
#define __I_ECO_TOOLCHAIN_AST_1_POINTER_TYPE_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1Type.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1PointerType IID = {950EC30B-18C9-4CA4-BB6D-63277A29C111} */
#ifndef __IID_IEcoToolchainAST1PointerType
static const UGUID IID_IEcoToolchainAST1PointerType = {0x01, 0x10, {0x95, 0x0E, 0xC3, 0x0B, 0x18, 0xC9, 0x4C, 0xA4, 0xBB, 0x6D, 0x63, 0x27, 0x7A, 0x29, 0xC1, 0x11} };
#endif /* __IID_IEcoToolchainAST1PointerType */

typedef struct IEcoToolchainAST1PointerType* IEcoToolchainAST1PointerTypePtr_t;

typedef struct IEcoToolchainAST1PointerTypeVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1PointerTypePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1PointerTypePtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1PointerTypePtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1PointerTypePtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1PointerTypePtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1PointerTypePtr_t me);
    IEcoToolchainAST1PointerTypePtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1PointerTypePtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Type */
    bool_t (ECOCALLMETHOD *IsConst)(/* in */ IEcoToolchainAST1PointerTypePtr_t me);
    uint16_t (ECOCALLMETHOD *get_ClassTypeSpecifier)(/* in */ IEcoToolchainAST1PointerTypePtr_t me);

    /* IEcoToolchainAST1PointerType */
    IEcoToolchainAST1Type* (ECOCALLMETHOD *get_IntegralType)(/* in */ IEcoToolchainAST1PointerTypePtr_t me);

} IEcoToolchainAST1PointerTypeVTbl, *IEcoToolchainAST1PointerTypeVTblPtr;

interface IEcoToolchainAST1PointerType {
    struct IEcoToolchainAST1PointerTypeVTbl *pVTbl;
} IEcoToolchainAST1PointerType;

#endif /* __I_ECO_TOOLCHAIN_AST_1_POINTER_TYPE_H__ */

