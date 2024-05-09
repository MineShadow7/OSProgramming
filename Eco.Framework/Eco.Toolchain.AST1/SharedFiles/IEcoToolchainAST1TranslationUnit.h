/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1TranslationUnit
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1TranslationUnit
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_TRANSLATION_UNIT_H__
#define __I_ECO_TOOLCHAIN_AST_1_TRANSLATION_UNIT_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1SyntaxObject.h"
#include "IEcoToolchainLexicalAnalyzer1.h"
#include "IEcoToolchainAST1GlobalScope.h"
#include "IEcoToolchainAST1BlockTranslationUnitObjects.h"

/* IEcoToolchainAST1TranslationUnit IID = {82AA8D91-4E04-44BD-B3DF-EA237CEC6ABA} */
#ifndef __IID_IEcoToolchainAST1TranslationUnit
static const UGUID IID_IEcoToolchainAST1TranslationUnit = {0x01, 0x10, {0x82, 0xAA, 0x8D, 0x91, 0x4E, 0x04, 0x44, 0xBD, 0xB3, 0xDF, 0xEA, 0x23, 0x7C, 0xEC, 0x6A, 0xBA} };
#endif /* __IID_IEcoToolchainAST1TranslationUnit */

typedef struct IEcoToolchainAST1TranslationUnit* IEcoToolchainAST1TranslationUnitPtr_t;

typedef struct IEcoToolchainAST1TranslationUnitVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1TranslationUnitPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1TranslationUnitPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1TranslationUnitPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1TranslationUnitPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1TranslationUnitPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1TranslationUnitPtr_t me);
    IEcoToolchainAST1TranslationUnitPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1TranslationUnitPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

    /* IEcoToolchainAST1Declaration */
    IEcoToolchainAST1GlobalScope* (ECOCALLMETHOD *get_Scope)(/* in */ IEcoToolchainAST1TranslationUnitPtr_t me);
    IEcoToolchainAST1BlockTranslationUnitObjects* (ECOCALLMETHOD *getObjects)(/* in */ IEcoToolchainAST1TranslationUnitPtr_t me);

} IEcoToolchainAST1TranslationUnitVTbl, *IEcoToolchainAST1TranslationUnitVTblPtr;

interface IEcoToolchainAST1TranslationUnit {
    struct IEcoToolchainAST1TranslationUnitVTbl *pVTbl;
} IEcoToolchainAST1TranslationUnit;

#endif /* __I_ECO_TOOLCHAIN_AST_1_TRANSLATION_UNIT_H__ */

