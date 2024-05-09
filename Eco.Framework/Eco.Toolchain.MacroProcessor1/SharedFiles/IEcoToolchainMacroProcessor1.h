/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainMacroProcessor1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainMacroProcessor1
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

#ifndef __I_ECO_TOOLCHAIN_MACRO_PROCESSOR_1_H__
#define __I_ECO_TOOLCHAIN_MACRO_PROCESSOR_1_H__

#include "IEcoBase1.h"
#include "IEcoToolchainLexicalAnalyzer1Token.h"
#include "IEcoToolchainMacroProcessor1Processing.h"
#include "IEcoLog1.h"

/* IEcoToolchainMacroProcessor1 IID = {A4DEB381-3FF8-45C6-85FC-7D51335A37B3} */
#ifndef __IID_IEcoToolchainMacroProcessor1
static const UGUID IID_IEcoToolchainMacroProcessor1 = {0x01, 0x10, {0xA4, 0xDE, 0xB3, 0x81, 0x3F, 0xF8, 0x45, 0xC6, 0x85, 0xFC, 0x7D, 0x51, 0x33, 0x5A, 0x37, 0xB3} };
#endif /* __IID_IEcoToolchainMacroProcessor1 */

typedef struct IEcoToolchainMacroProcessor1* IEcoToolchainMacroProcessor1Ptr_t;

typedef struct IEcoToolchainMacroProcessor1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainMacroProcessor1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainMacroProcessor1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainMacroProcessor1Ptr_t me);

    /* IEcoToolchainMacroProcessor1 */
    int16_t (ECOCALLMETHOD *set_InvocationCommand)(/* in */ IEcoToolchainMacroProcessor1Ptr_t me, /* in */ uint16_t command, /* in */ char_t* directive /*, patern */);
    int16_t (ECOCALLMETHOD *set_DeletitionCommandByString)(/* in */ IEcoToolchainMacroProcessor1Ptr_t me, /* in */ char_t* string);
    int16_t (ECOCALLMETHOD *set_DeletitionCommandBySymbol)(/* in */ IEcoToolchainMacroProcessor1Ptr_t me, /* in */ char_t symbol);
    int16_t (ECOCALLMETHOD *set_DeletitionCommandByTokenId)(/* in */ IEcoToolchainMacroProcessor1Ptr_t me, /* in */ uint16_t id);
    int16_t (ECOCALLMETHOD *Predefine)(/* in */ IEcoToolchainMacroProcessor1Ptr_t me, /* in */ char_t* name, /* in */ char_t* definition);
    int16_t (ECOCALLMETHOD *Undefine)(/* in */ IEcoToolchainMacroProcessor1Ptr_t me, /* in */ char_t* name);
    bool_t (ECOCALLMETHOD *IsDefined)(/* in */ IEcoToolchainMacroProcessor1Ptr_t me, /* in */ char_t* name);
	char_t* (ECOCALLMETHOD *GetMacroValue)(/* in */ IEcoToolchainMacroProcessor1Ptr_t me, /* in */ char_t* name);
	void (ECOCALLMETHOD *LogMacroTable)(/* in */ IEcoToolchainMacroProcessor1Ptr_t me, /* in */ IEcoLog1* logger);
    IEcoToolchainMacroProcessor1Processing* (ECOCALLMETHOD *get_Processing)(/* in */ IEcoToolchainMacroProcessor1Ptr_t me);

} IEcoToolchainMacroProcessor1VTbl, *IEcoToolchainMacroProcessor1VTblPtr;

interface IEcoToolchainMacroProcessor1 {
    struct IEcoToolchainMacroProcessor1VTbl *pVTbl;
} IEcoToolchainMacroProcessor1;

#endif /* __I_ECO_TOOLCHAIN_MACRO_PROCESSOR_1_H__ */
