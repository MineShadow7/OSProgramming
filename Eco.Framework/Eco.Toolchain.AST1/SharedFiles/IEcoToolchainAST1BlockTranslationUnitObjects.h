/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1BlockTranslationUnitObjects
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1BlockTranslationUnitObjects
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_BLOCK_TRANSLATION_UNIT_OBJECTS_H__
#define __I_ECO_TOOLCHAIN_AST_1_BLOCK_TRANSLATION_UNIT_OBJECTS_H__

#include "IEcoBase1.h"
#include "IEcoToolchainLexicalAnalyzer1.h"
#include "IEcoSystem1.h"
#include "IEcoToolchainAST1TranslationUnitObject.h"

/* IEcoToolchainAST1BlockBlockTranslationUnitObjectss IID = {F0BC0E8A-A598-42E1-9676-801CA6BFFFAA} */
#ifndef __IID_IEcoToolchainAST1BlockTranslationUnitObjects
static const UGUID IID_IEcoToolchainAST1BlockTranslationUnitObjects = {0x01, 0x10, {0xF0, 0xBC, 0x0E, 0x8A, 0xA5, 0x98, 0x42, 0xE1, 0x96, 0x76, 0x80, 0x1C, 0xA6, 0xBF, 0xFF, 0xAA} };
#endif /* __IID_IEcoToolchainAST1BlockTranslationUnitObjects */

typedef struct IEcoToolchainAST1BlockTranslationUnitObjects* IEcoToolchainAST1BlockTranslationUnitObjectsPtr_t;

typedef struct IEcoToolchainAST1BlockTranslationUnitObjectsVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1BlockTranslationUnitObjectsPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1BlockTranslationUnitObjectsPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1BlockTranslationUnitObjectsPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1BlockTranslationUnitObjectsPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1BlockTranslationUnitObjectsPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1BlockTranslationUnitObjectsPtr_t me);
    IEcoToolchainAST1BlockTranslationUnitObjectsPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1BlockTranslationUnitObjectsPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1BlockTranslationUnitObjects */
    IEcoToolchainAST1TranslationUnitObject* (ECOCALLMETHOD *get_Object)(/* in */ IEcoToolchainAST1BlockTranslationUnitObjectsPtr_t me, uint32_t index);
    uint32_t (ECOCALLMETHOD *get_Count)(/* in */ IEcoToolchainAST1BlockTranslationUnitObjectsPtr_t me);

} IEcoToolchainAST1BlockTranslationUnitObjectsVTbl, *IEcoToolchainAST1BlockTranslationUnitObjectsVTblPtr;

interface IEcoToolchainAST1BlockTranslationUnitObjects {
    struct IEcoToolchainAST1BlockTranslationUnitObjectsVTbl *pVTbl;
} IEcoToolchainAST1BlockTranslationUnitObjects;

#endif /* __I_ECO_TOOLCHAIN_AST_1_BLOCK_TRANSLATION_UNIT_OBJECTS_H__ */

