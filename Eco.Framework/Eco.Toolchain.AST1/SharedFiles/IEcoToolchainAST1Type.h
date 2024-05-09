/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1Type
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1Type
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_TYPE_H__
#define __I_ECO_TOOLCHAIN_AST_1_TYPE_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1Type IID = {EFE01C87-3641-420F-8C24-DF2668126349} */
#ifndef __IID_IEcoToolchainAST1Type
static const UGUID IID_IEcoToolchainAST1Type = {0x01, 0x10, {0xEF, 0xE0, 0x1C, 0x87, 0x36, 0x41, 0x42, 0x0F, 0x8C, 0x24, 0xDF, 0x26, 0x68, 0x12, 0x63, 0x49} };
#endif /* __IID_IEcoToolchainAST1Type */

/* Определение спецификаторов типа */
enum tagTypeClassSpecifier {
    ECO_TOOLCHAIN_AST1_TYPE_CLASS_SPECIFIER_AUTO = 0,      /* auto */
    ECO_TOOLCHAIN_AST1_TYPE_CLASS_SPECIFIER_EXTERN,        /* extern */
    ECO_TOOLCHAIN_AST1_TYPE_CLASS_SPECIFIER_STATIC,        /* static */
    ECO_TOOLCHAIN_AST1_TYPE_CLASS_SPECIFIER_REGISTER,      /* register */
    ECO_TOOLCHAIN_AST1_TYPE_CLASS_SPECIFIER_TYPEDEF        /* typedef */
};

typedef struct IEcoToolchainAST1Type* IEcoToolchainAST1TypePtr_t;

typedef struct IEcoToolchainAST1TypeVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1TypePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1TypePtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1TypePtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1TypePtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1TypePtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1TypePtr_t me);
    IEcoToolchainAST1TypePtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1TypePtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Type */
    bool_t (ECOCALLMETHOD *IsConst)(/* in */ IEcoToolchainAST1TypePtr_t me);
    uint16_t (ECOCALLMETHOD *get_ClassTypeSpecifier)(/* in */ IEcoToolchainAST1TypePtr_t me);

} IEcoToolchainAST1TypeVTbl, * IEcoToolchainAST1TypeVTblPtr;

interface IEcoToolchainAST1Type {
    struct IEcoToolchainAST1TypeVTbl *pVTbl;
} IEcoToolchainAST1Type;

#endif /* __I_ECO_TOOLCHAIN_AST_1_TYPE_H__ */

