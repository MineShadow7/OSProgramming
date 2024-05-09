/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainLexicalAnalyzer1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainLexicalAnalyzer1
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

#ifndef __I_ECO_TOOLCHAIN_LEXICAL_ANALYZER_1_H__
#define __I_ECO_TOOLCHAIN_LEXICAL_ANALYZER_1_H__

#include "IEcoBase1.h"
#include "IEcoToolchainRL1.h"
#include "IEcoToolchainBNF1.h"
#include "IEcoToolchainLexicalAnalyzer1Token.h"
#include "IEcoToolchainLexicalAnalyzer1Scanner.h"

/* IEcoToolchainLexicalAnalyzer1 IID = {DFB72921-A0FF-4F1D-93C7-F321AEB315E4} */
#ifndef __IID_IEcoToolchainLexicalAnalyzer1
static const UGUID IID_IEcoToolchainLexicalAnalyzer1 = {0x01, 0x10, {0xDF, 0xB7, 0x29, 0x21, 0xA0, 0xFF, 0x4F, 0x1D, 0x93, 0xC7, 0xF3, 0x21, 0xAE, 0xB3, 0x15, 0xE4} };
#endif /* __IID_IEcoToolchainLexicalAnalyzer1 */

typedef struct IEcoToolchainLexicalAnalyzer1* IEcoToolchainLexicalAnalyzer1Ptr_t;

typedef struct IEcoToolchainLexicalAnalyzer1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainLexicalAnalyzer1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainLexicalAnalyzer1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainLexicalAnalyzer1Ptr_t me);

    /* IEcoToolchainLexicalAnalyzer1 */
    IEcoToolchainLexicalAnalyzer1ScannerPtr_t (ECOCALLMETHOD *new_FileScannerByFA)(/* in */ IEcoToolchainLexicalAnalyzer1Ptr_t me, /* in */ IEcoFSM1StateMachinePtr_t pIFA, /* in */ char_t* fileName);
    IEcoToolchainLexicalAnalyzer1ScannerPtr_t (ECOCALLMETHOD *new_MemoryScannerByFA)(/* in */ IEcoToolchainLexicalAnalyzer1Ptr_t me, /* in */ IEcoFSM1StateMachinePtr_t pIFA, /* in */ char_t* buffer, /* in */ int32_t size);
    IEcoToolchainLexicalAnalyzer1ScannerPtr_t (ECOCALLMETHOD *new_FileScannerByRG)(/* in */ IEcoToolchainLexicalAnalyzer1Ptr_t me, /* in */ IEcoToolchainRL1GrammarPtr_t pIGrammar, /* in */ char_t* fileName);
    IEcoToolchainLexicalAnalyzer1ScannerPtr_t (ECOCALLMETHOD *new_MemoryScannerByRG)(/* in */ IEcoToolchainLexicalAnalyzer1Ptr_t me, /* in */ IEcoToolchainRL1GrammarPtr_t pIGrammar, /* in */ char_t* buffer, /* in */ int32_t size);
    IEcoToolchainLexicalAnalyzer1ScannerPtr_t (ECOCALLMETHOD *new_FileScannerByRE)(/* in */ IEcoToolchainLexicalAnalyzer1Ptr_t me, /* in */ IEcoToolchainRL1ExpressionPtr_t pIExpression, /* in */ char_t* fileName);
    IEcoToolchainLexicalAnalyzer1ScannerPtr_t (ECOCALLMETHOD *new_MemoryScannerByRE)(/* in */ IEcoToolchainLexicalAnalyzer1Ptr_t me, /* in */ IEcoToolchainRL1ExpressionPtr_t pIExpression, /* in */ char_t* buffer, /* in */ int32_t size);
    IEcoToolchainLexicalAnalyzer1ScannerPtr_t (ECOCALLMETHOD *new_FileScannerByBNF)(/* in */ IEcoToolchainLexicalAnalyzer1Ptr_t me, /* in */ IEcoToolchainBNF1Ptr_t pIGrammar, /* in */ char_t* fileName);
    IEcoToolchainLexicalAnalyzer1ScannerPtr_t (ECOCALLMETHOD *new_MemoryScannerByBNF)(/* in */ IEcoToolchainLexicalAnalyzer1Ptr_t me, /* in */ IEcoToolchainBNF1Ptr_t pIGrammar, /* in */ char_t* buffer, /* in */ int32_t size);
    IEcoToolchainLexicalAnalyzer1ScannerPtr_t (ECOCALLMETHOD *new_FileScannerByDirectImpl)(/* in */ IEcoToolchainLexicalAnalyzer1Ptr_t me, /* in */ ECO_FUNC_RECOGNITION_INDIVIDUAL_TOKEN func, /* in */ char_t* fileName);
    IEcoToolchainLexicalAnalyzer1ScannerPtr_t (ECOCALLMETHOD *new_MemoryScannerByDirectImpl)(/* in */ IEcoToolchainLexicalAnalyzer1Ptr_t me, /* in */ ECO_FUNC_RECOGNITION_INDIVIDUAL_TOKEN func, /* in */ char_t* buffer, /* in */ int32_t size);


} IEcoToolchainLexicalAnalyzer1VTbl, *IEcoToolchainLexicalAnalyzer1VTblPtr;

interface IEcoToolchainLexicalAnalyzer1 {
    struct IEcoToolchainLexicalAnalyzer1VTbl *pVTbl;
} IEcoToolchainLexicalAnalyzer1;

#endif /* __I_ECO_TOOLCHAIN_LEXICAL_ANALYZER_1_H__ */
