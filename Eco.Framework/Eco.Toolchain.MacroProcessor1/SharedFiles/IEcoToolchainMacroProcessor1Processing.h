/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainMacroProcessor1Processing
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию интерфейса IEcoToolchainMacroProcessor1Processing
 * </описание>
 *
 * <ссылка>
 * </ссылка>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __I_ECO_TOOLCHAIN_MACRO_PROCESSOR_1_PROCESSING_H__
#define __I_ECO_TOOLCHAIN_MACRO_PROCESSOR_1_PROCESSING_H__

#include "IEcoBase1.h"
#include "IEcoStack1.h"
#include "IEcoFSM1.h"
#include "IEcoToolchainMacroProcessor1Result.h"
#include "IEcoToolchainLexicalAnalyzer1Token.h"
#include "IEcoLog1.h"

/* IEcoToolchainMacroProcessor1Processing IID = {E660027B-F02F-4BB7-A28B-8ED45DF0E5EB} */
#ifndef __IID_IEcoToolchainMacroProcessor1Processing
static const UGUID IID_IEcoToolchainMacroProcessor1Processing = {0x01, 0x10, {0xE6, 0x60, 0x02, 0x7B, 0xF0, 0x2F, 0x4B, 0xB7, 0xA2, 0x8B, 0x8E, 0xD4, 0x5D, 0xF0, 0xE5, 0xEB} };
#endif /* __IID_IEcoToolchainMacroProcessor1Processing */

typedef struct IEcoToolchainMacroProcessor1Processing* IEcoToolchainMacroProcessor1ProcessingPtr_t;

typedef struct IEcoToolchainMacroProcessor1ProcessingVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainMacroProcessor1ProcessingPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainMacroProcessor1ProcessingPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainMacroProcessor1ProcessingPtr_t me);

    /* IEcoToolchainMacroProcessor1Processing */
    bool_t (ECOCALLMETHOD *IsExpand)(/* in */ IEcoToolchainMacroProcessor1ProcessingPtr_t me);
    IEcoToolchainMacroProcessor1Result* (ECOCALLMETHOD *InvokeByLexeme)(/* in */ IEcoToolchainMacroProcessor1ProcessingPtr_t me, /* in */ char_t* lexeme);
    IEcoToolchainMacroProcessor1Result* (ECOCALLMETHOD *InvokeByToken)(/* in */ IEcoToolchainMacroProcessor1ProcessingPtr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token);
	void (ECOCALLMETHOD *DisableProcessing)(/* in */ IEcoToolchainMacroProcessor1ProcessingPtr_t me);
	void (ECOCALLMETHOD *SetLogger)(/* in */ IEcoToolchainMacroProcessor1ProcessingPtr_t me, /* in */ IEcoLog1* logger);

} IEcoToolchainMacroProcessor1ProcessingVTbl, *IEcoToolchainMacroProcessor1ProcessingVTblPtr;

interface IEcoToolchainMacroProcessor1Processing {
    struct IEcoToolchainMacroProcessor1ProcessingVTbl *pVTbl;
} IEcoToolchainMacroProcessor1Processing;

#endif /* __I_ECO_TOOLCHAIN_MACRO_PROCESSOR_1_PROCESSING_H__ */
