/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1StructOrUnionType
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1StructOrUnionType
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_STRUCT_OR_UNION_TYPE_H__
#define __I_ECO_TOOLCHAIN_AST_1_STRUCT_OR_UNION_TYPE_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainAST1Type.h"
#include "IEcoToolchainAST1StructOrUnionDeclaration.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1StructOrUnionType IID = {950EC30B-18C9-4CA4-BB6D-63277A29CD76} */
#ifndef __IID_IEcoToolchainAST1StructOrUnionType
static const UGUID IID_IEcoToolchainAST1StructOrUnionType = {0x01, 0x10, {0x95, 0x0E, 0xC3, 0x0B, 0x18, 0xC9, 0x4C, 0xA4, 0xBB, 0x6D, 0x63, 0x27, 0x7A, 0x29, 0xCD, 0x76} };
#endif /* __IID_IEcoToolchainAST1StructOrUnionType */

typedef struct IEcoToolchainAST1StructOrUnionType* IEcoToolchainAST1StructOrUnionTypePtr_t;

typedef struct IEcoToolchainAST1StructOrUnionTypeVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1StructOrUnionTypePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1StructOrUnionTypePtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1StructOrUnionTypePtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1StructOrUnionTypePtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1StructOrUnionTypePtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1StructOrUnionTypePtr_t me);
    IEcoToolchainAST1StructOrUnionTypePtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1StructOrUnionTypePtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Type */
    bool_t (ECOCALLMETHOD *IsConst)(/* in */ IEcoToolchainAST1StructOrUnionTypePtr_t me);
    uint16_t (ECOCALLMETHOD *get_ClassTypeSpecifier)(/* in */ IEcoToolchainAST1StructOrUnionTypePtr_t me);

    /* IEcoToolchainAST1StructOrUnionType */
    IEcoToolchainAST1BlockDeclarations* (ECOCALLMETHOD *get_Params)(/* in */ IEcoToolchainAST1StructOrUnionTypePtr_t me);
    char_t* (ECOCALLMETHOD *get_TypeName)(/* in */ IEcoToolchainAST1StructOrUnionTypePtr_t me);
    IEcoToolchainAST1StructOrUnionDeclaration* (ECOCALLMETHOD *get_Declaration)(/* in */ IEcoToolchainAST1StructOrUnionTypePtr_t me);
    int16_t (ECOCALLMETHOD *Declare)(/* in */ IEcoToolchainAST1StructOrUnionTypePtr_t me, IEcoToolchainAST1StructOrUnionDeclaration* pIDeclaration);
    uint16_t (ECOCALLMETHOD *get_StructOrUnionType)(/* in */ IEcoToolchainAST1StructOrUnionTypePtr_t me);

} IEcoToolchainAST1StructOrUnionTypeVTbl, *IEcoToolchainAST1StructOrUnionTypeVTblPtr;

interface IEcoToolchainAST1StructOrUnionType {
    struct IEcoToolchainAST1StructOrUnionTypeVTbl *pVTbl;
} IEcoToolchainAST1StructOrUnionType;

#endif /* __I_ECO_TOOLCHAIN_AST_1_STRUCT_OR_UNION_TYPE_H__ */

