/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1TranslationUnitObject
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1TranslationUnitObject
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_TRANSLATION_UNIT_OBJECT_H__
#define __I_ECO_TOOLCHAIN_AST_1_TRANSLATION_UNIT_OBJECT_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1TranslationUnitObject IID = {82AA8D91-4E04-44BD-B3DF-EA237CE94876} */
#ifndef __IID_IEcoToolchainAST1TranslationUnitObject
static const UGUID IID_IEcoToolchainAST1TranslationUnitObject = {0x01, 0x10, {0x82, 0xAA, 0x8D, 0x91, 0x4E, 0x04, 0x44, 0xBD, 0xB3, 0xDF, 0xEA, 0x23, 0x7C, 0xE9, 0x48, 0x76} };
#endif /* __IID_IEcoToolchainAST1TranslationUnitObject */

typedef struct IEcoToolchainAST1TranslationUnitObject* IEcoToolchainAST1TranslationUnitObjectPtr_t;

typedef struct IEcoToolchainAST1TranslationUnitObjectVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1TranslationUnitObjectPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1TranslationUnitObjectPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1TranslationUnitObjectPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1TranslationUnitObjectPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1TranslationUnitObjectPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1TranslationUnitObjectPtr_t me);
    IEcoToolchainAST1TranslationUnitObjectPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1TranslationUnitObjectPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

} IEcoToolchainAST1TranslationUnitObjectVTbl, *IEcoToolchainAST1TranslationUnitObjectVTblPtr;

interface IEcoToolchainAST1TranslationUnitObject {
    struct IEcoToolchainAST1TranslationUnitObjectVTbl *pVTbl;
} IEcoToolchainAST1TranslationUnitObject;

#endif /* __I_ECO_TOOLCHAIN_AST_1_TRANSLATION_UNIT_OBJECT_H__ */

