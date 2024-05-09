/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1BlockTypes
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1BlockTypes
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_BLOCK_TYPES_H__
#define __I_ECO_TOOLCHAIN_AST_1_BLOCK_TYPES_H__

#include "IEcoBase1.h"
#include "IEcoToolchainLexicalAnalyzer1.h"
#include "IEcoSystem1.h"
#include "IEcoToolchainAST1Type.h"

/* IEcoToolchainAST1BlockBlockTypess IID = {F0BC0E8A-A598-42E1-9676-801CA6B1F808} */
#ifndef __IID_IEcoToolchainAST1BlockTypes
static const UGUID IID_IEcoToolchainAST1BlockTypes = {0x01, 0x10, {0xF0, 0xBC, 0x0E, 0x8A, 0xA5, 0x98, 0x42, 0xE1, 0x96, 0x76, 0x80, 0x1C, 0xA6, 0xB1, 0xF8, 0x08} };
#endif /* __IID_IEcoToolchainAST1BlockTypes */

typedef struct IEcoToolchainAST1BlockTypes* IEcoToolchainAST1BlockTypesPtr_t;

typedef struct IEcoToolchainAST1BlockTypesVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1BlockTypesPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1BlockTypesPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1BlockTypesPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1BlockTypesPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1BlockTypesPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1BlockTypesPtr_t me);
    IEcoToolchainAST1BlockTypesPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1BlockTypesPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1BlockTypes */
    IEcoToolchainAST1Type* (ECOCALLMETHOD *get_Type)(/* in */ IEcoToolchainAST1BlockTypesPtr_t me, uint32_t index);
    uint32_t (ECOCALLMETHOD *get_Count)(/* in */ IEcoToolchainAST1BlockTypesPtr_t me);
    bool_t (ECOCALLMETHOD *IsVariadic)(/* in */ IEcoToolchainAST1BlockTypesPtr_t me);

} IEcoToolchainAST1BlockTypesVTbl, *IEcoToolchainAST1BlockTypesVTblPtr;

interface IEcoToolchainAST1BlockTypes {
    struct IEcoToolchainAST1BlockTypesVTbl *pVTbl;
} IEcoToolchainAST1BlockTypes;

#endif /* __I_ECO_TOOLCHAIN_AST_1_BLOCK_TYPES_H__ */

