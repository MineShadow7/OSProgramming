/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1FunctionType
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1FunctionType
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_FUNCTION_TYPE_H__
#define __I_ECO_TOOLCHAIN_AST_1_FUNCTION_TYPE_H__

#include "IEcoBase1.h"
#include "IEcoToolchainLexicalAnalyzer1.h"
#include "IEcoSystem1.h"
#include "IEcoToolchainAST1Type.h"
#include "IEcoToolchainAST1BlockDeclarations.h"
#include "IEcoToolchainAST1Scope.h"

/* IEcoToolchainAST1BlockFunctionType IID = {F0BC0E8A-A598-42E1-9676-801CA6B1F55F} */
#ifndef __IID_IEcoToolchainAST1FunctionType
static const UGUID IID_IEcoToolchainAST1FunctionType = {0x01, 0x10, {0xF0, 0xBC, 0x0E, 0x8A, 0xA5, 0x98, 0x42, 0xE1, 0x96, 0x76, 0x80, 0x1C, 0xA6, 0xB1, 0xF5, 0x5F} };
#endif /* __IID_IEcoToolchainAST1FunctionType */

typedef struct IEcoToolchainAST1FunctionType* IEcoToolchainAST1FunctionTypePtr_t;

typedef struct IEcoToolchainAST1FunctionTypeVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1FunctionTypePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1FunctionTypePtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1FunctionTypePtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1FunctionTypePtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1FunctionTypePtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1FunctionTypePtr_t me);
    IEcoToolchainAST1FunctionTypePtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1FunctionTypePtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Type */
    bool_t (ECOCALLMETHOD *IsConst)(/* in */ IEcoToolchainAST1FunctionTypePtr_t me);
    uint16_t (ECOCALLMETHOD *get_ClassTypeSpecifier)(/* in */ IEcoToolchainAST1FunctionTypePtr_t me);

    /* IEcoToolchainAST1FunctionType */
    IEcoToolchainAST1Type* (ECOCALLMETHOD *get_ReturnType)(/* in */ IEcoToolchainAST1FunctionTypePtr_t me);
    IEcoToolchainAST1BlockDeclarations* (ECOCALLMETHOD *get_Params)(/* in */ IEcoToolchainAST1FunctionTypePtr_t me);
    IEcoToolchainAST1Scope* (ECOCALLMETHOD *get_Scope)(/* in */ IEcoToolchainAST1FunctionTypePtr_t me);
    bool_t (ECOCALLMETHOD *isVariadic)(/* in */ IEcoToolchainAST1FunctionTypePtr_t me);

} IEcoToolchainAST1FunctionTypeVTbl, *IEcoToolchainAST1FunctionTypeVTblPtr;

interface IEcoToolchainAST1FunctionType {
    struct IEcoToolchainAST1FunctionTypeVTbl *pVTbl;
} IEcoToolchainAST1FunctionType;

#endif /* __I_ECO_TOOLCHAIN_AST_1_FUNCTION_TYPE_H__ */

