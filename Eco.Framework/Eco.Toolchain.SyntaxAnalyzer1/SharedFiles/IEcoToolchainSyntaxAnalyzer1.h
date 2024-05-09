/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainSyntaxAnalyzer1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainSyntaxAnalyzer1
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

#ifndef __I_ECO_TOOLCHAIN_SYNTAX_ANALYZER_1_H__
#define __I_ECO_TOOLCHAIN_SYNTAX_ANALYZER_1_H__

#include "IEcoBase1.h"
#include "IEcoToolchainSyntaxAnalyzer1Parser.h"

/* IEcoToolchainSyntaxAnalyzer1 IID = {223B5731-DC7A-4109-A426-AA10962400AB} */
#ifndef __IID_IEcoToolchainSyntaxAnalyzer1
static const UGUID IID_IEcoToolchainSyntaxAnalyzer1 = {0x01, 0x10, {0x22, 0x3B, 0x57, 0x31, 0xDC, 0x7A, 0x41, 0x09, 0xA4, 0x26, 0xAA, 0x10, 0x96, 0x24, 0x00, 0xAB} };
#endif /* __IID_IEcoToolchainSyntaxAnalyzer1 */

typedef struct IEcoToolchainSyntaxAnalyzer1* IEcoToolchainSyntaxAnalyzer1Ptr_t;

typedef struct IEcoToolchainSyntaxAnalyzer1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainSyntaxAnalyzer1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainSyntaxAnalyzer1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainSyntaxAnalyzer1Ptr_t me);

    /* IEcoToolchainSyntaxAnalyzer1 */
    int16_t (ECOCALLMETHOD *RegisterAlgorithm)(/* in */ IEcoToolchainSyntaxAnalyzer1Ptr_t me, /*in*/ const UGUID* rcid, /*in*/ char_t* algmName);
    void (ECOCALLMETHOD *set_DefaultAlgorithm)(/* in */ IEcoToolchainSyntaxAnalyzer1Ptr_t me, /*in*/ char_t* algmName);
    char_t* (ECOCALLMETHOD *get_DefaultAlgorithm)(/* in */ IEcoToolchainSyntaxAnalyzer1Ptr_t me);
    IEcoToolchainSyntaxAnalyzer1Parser* (ECOCALLMETHOD *get_Parser)(/* in */ IEcoToolchainSyntaxAnalyzer1Ptr_t me, /* in */ IEcoToolchainBNF1* pIGrammar, /* in */ char_t* algmName /* 0 - алгоритм по умолчанию */);

} IEcoToolchainSyntaxAnalyzer1VTbl, *IEcoToolchainSyntaxAnalyzer1VTblPtr;

interface IEcoToolchainSyntaxAnalyzer1 {
    struct IEcoToolchainSyntaxAnalyzer1VTbl *pVTbl;
} IEcoToolchainSyntaxAnalyzer1;

#endif /* __I_ECO_TOOLCHAIN_SYNTAX_ANALYZER_1_H__ */
