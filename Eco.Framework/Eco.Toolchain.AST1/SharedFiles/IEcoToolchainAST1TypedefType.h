/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1TypedefType
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1TypedefType
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_TYPEDEF_TYPE_H__
#define __I_ECO_TOOLCHAIN_AST_1_TYPEDEF_TYPE_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1Type.h"
#include "IEcoToolchainAST1TypedefDeclaration.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1TypedefType IID = {950EC30B-18C9-4CA4-BB6D-63277A296555} */
#ifndef __IID_IEcoToolchainAST1TypedefType
static const UGUID IID_IEcoToolchainAST1TypedefType = {0x01, 0x10, {0x95, 0x0E, 0xC3, 0x0B, 0x18, 0xC9, 0x4C, 0xA4, 0xBB, 0x6D, 0x63, 0x27, 0x7A, 0x29, 0x65, 0x55} };
#endif /* __IID_IEcoToolchainAST1TypedefType */

typedef struct IEcoToolchainAST1TypedefType* IEcoToolchainAST1TypedefTypePtr_t;

typedef struct IEcoToolchainAST1TypedefTypeVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1TypedefTypePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1TypedefTypePtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1TypedefTypePtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1TypedefTypePtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1TypedefTypePtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1TypedefTypePtr_t me);
    IEcoToolchainAST1TypedefTypePtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1TypedefTypePtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Type */
    bool_t (ECOCALLMETHOD *IsConst)(/* in */ IEcoToolchainAST1TypedefTypePtr_t me);
    uint16_t (ECOCALLMETHOD *get_ClassTypeSpecifier)(/* in */ IEcoToolchainAST1TypedefTypePtr_t me);

    /* IEcoToolchainAST1TypedefType */
    char_t* (ECOCALLMETHOD *get_TypeName)(/* in */ IEcoToolchainAST1TypedefTypePtr_t me);
    IEcoToolchainAST1TypedefDeclaration* (ECOCALLMETHOD *get_Declaration)(/* in */ IEcoToolchainAST1TypedefTypePtr_t me);

} IEcoToolchainAST1TypedefTypeVTbl, *IEcoToolchainAST1TypedefTypeVTblPtr;

interface IEcoToolchainAST1TypedefType {
    struct IEcoToolchainAST1TypedefTypeVTbl *pVTbl;
} IEcoToolchainAST1TypedefType;

#endif /* __I_ECO_TOOLCHAIN_AST_1_TYPEDEF_TYPE_H__ */

