/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1NumberType
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1NumberType
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_NUMBER_TYPE_H__
#define __I_ECO_TOOLCHAIN_AST_1_NUMBER_TYPE_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1Type.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1NumberType IID = {950EC30B-18C9-4CA4-BB6D-63277A29C13F} */
#ifndef __IID_IEcoToolchainAST1NumberType
static const UGUID IID_IEcoToolchainAST1NumberType = {0x01, 0x10, {0x95, 0x0E, 0xC3, 0x0B, 0x18, 0xC9, 0x4C, 0xA4, 0xBB, 0x6D, 0x63, 0x27, 0x7A, 0x29, 0xC1, 0x3F} };
#endif /* __IID_IEcoToolchainAST1NumberType */

enum tagPrimitiveType {
    ECO_TOOLCHAIN_AST1_TYPE_VOID = 1,   /* void */
    ECO_TOOLCHAIN_AST1_TYPE_CHAR,       /* char */
    ECO_TOOLCHAIN_AST1_TYPE_SHORT,      /* short */
    ECO_TOOLCHAIN_AST1_TYPE_INT,        /* int */
    ECO_TOOLCHAIN_AST1_TYPE_LONG,       /* long */
    ECO_TOOLCHAIN_AST1_TYPE_LONG_LONG,  /* long long */
    ECO_TOOLCHAIN_AST1_TYPE_FLOAT,      /* float */
    ECO_TOOLCHAIN_AST1_TYPE_DOUBLE,     /* double */
    ECO_TOOLCHAIN_AST1_TYPE_LONG_DOUBLE /* long double */
};

typedef struct IEcoToolchainAST1NumberType* IEcoToolchainAST1NumberTypePtr_t;

typedef struct IEcoToolchainAST1NumberTypeVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1NumberTypePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1NumberTypePtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1NumberTypePtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1NumberTypePtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1NumberTypePtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1NumberTypePtr_t me);
    IEcoToolchainAST1NumberTypePtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1NumberTypePtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Type */
    bool_t (ECOCALLMETHOD *IsConst)(/* in */ IEcoToolchainAST1NumberTypePtr_t me);
    uint16_t (ECOCALLMETHOD *get_ClassTypeSpecifier)(/* in */ IEcoToolchainAST1NumberTypePtr_t me);

    /* IEcoToolchainAST1NumberType */
    bool_t (ECOCALLMETHOD *IsSigned)(/* in */ IEcoToolchainAST1NumberTypePtr_t me);
    uint32_t (ECOCALLMETHOD *get_Size)(/* in */ IEcoToolchainAST1NumberTypePtr_t me);
    int16_t (ECOCALLMETHOD *get_IntegralType)(/* in */ IEcoToolchainAST1NumberTypePtr_t me);

} IEcoToolchainAST1NumberTypeVTbl, *IEcoToolchainAST1NumberTypeVTblPtr;

interface IEcoToolchainAST1NumberType {
    struct IEcoToolchainAST1NumberTypeVTbl *pVTbl;
} IEcoToolchainAST1NumberType;

#endif /* __I_ECO_TOOLCHAIN_AST_1_NUMBER_TYPE_H__ */

