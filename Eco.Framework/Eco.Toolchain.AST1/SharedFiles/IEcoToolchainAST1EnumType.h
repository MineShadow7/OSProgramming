/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1EnumType
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1EnumType
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_ENUM_TYPE_H__
#define __I_ECO_TOOLCHAIN_AST_1_ENUM_TYPE_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1Type.h"
#include "IEcoToolchainAST1EnumDeclaration.h"
#include "IEcoToolchainLexicalAnalyzer1.h"
#include "IEcoToolchainAST1NumberType.h"

/* IEcoToolchainAST1EnumType IID = {950EC30B-18C9-4CA4-BB6D-63277A29C538} */
#ifndef __IID_IEcoToolchainAST1EnumType
static const UGUID IID_IEcoToolchainAST1EnumType = {0x01, 0x10, {0x95, 0x0E, 0xC3, 0x0B, 0x18, 0xC9, 0x4C, 0xA4, 0xBB, 0x6D, 0x63, 0x27, 0x7A, 0x29, 0xC5, 0x38} };
#endif /* __IID_IEcoToolchainAST1EnumType */

typedef struct IEcoToolchainAST1EnumType* IEcoToolchainAST1EnumTypePtr_t;

typedef struct IEcoToolchainAST1EnumTypeVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1EnumTypePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1EnumTypePtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1EnumTypePtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1EnumTypePtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1EnumTypePtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1EnumTypePtr_t me);
    IEcoToolchainAST1EnumTypePtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1EnumTypePtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Type */
    bool_t (ECOCALLMETHOD *IsConst)(/* in */ IEcoToolchainAST1EnumTypePtr_t me);
    uint16_t (ECOCALLMETHOD *get_ClassTypeSpecifier)(/* in */ IEcoToolchainAST1EnumTypePtr_t me);

    /* IEcoToolchainAST1NumberType */
    bool_t (ECOCALLMETHOD *IsSigned)(/* in */ IEcoToolchainAST1EnumTypePtr_t me);
    uint32_t (ECOCALLMETHOD *get_Size)(/* in */ IEcoToolchainAST1EnumTypePtr_t me);
    int16_t (ECOCALLMETHOD *get_IntegralType)(/* in */ IEcoToolchainAST1EnumTypePtr_t me);

    /* IEcoToolchainAST1EnumType */
    IEcoToolchainAST1EnumDeclaration* (ECOCALLMETHOD *get_Declaration)(/* in */ IEcoToolchainAST1EnumTypePtr_t me);
    char_t* (ECOCALLMETHOD *get_TypeName)(/* in */ IEcoToolchainAST1EnumTypePtr_t me);
    int16_t (ECOCALLMETHOD *Declare)(/* in */ IEcoToolchainAST1EnumTypePtr_t me, IEcoToolchainAST1EnumDeclaration* pIDeclaration);

} IEcoToolchainAST1EnumTypeVTbl, *IEcoToolchainAST1EnumTypeVTblPtr;

interface IEcoToolchainAST1EnumType {
    struct IEcoToolchainAST1EnumTypeVTbl *pVTbl;
} IEcoToolchainAST1EnumType;

#endif /* __I_ECO_TOOLCHAIN_AST_1_ENUM_TYPE_H__ */

