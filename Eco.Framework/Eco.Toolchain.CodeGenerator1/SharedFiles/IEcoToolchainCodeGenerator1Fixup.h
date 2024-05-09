/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainCodeGenerator1Fixup
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainCodeGenerator1Fixup
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

#ifndef __I_ECO_TOOLCHAIN_CODE_GENERATOR_1_FIXUP_H__
#define __I_ECO_TOOLCHAIN_CODE_GENERATOR_1_FIXUP_H__

#include "IEcoBase1.h"

/* IEcoToolchainCodeGenerator1Fixup IID = {FA42CA52-DCE4-4EB0-A146-405EE63C363A} */
#ifndef __IID_IEcoToolchainCodeGenerator1Fixup
static const UGUID IID_IEcoToolchainCodeGenerator1Fixup = {0x01, 0x10, {0xFA, 0x42, 0xCA, 0x52, 0xDC, 0xE4, 0x4E, 0xB0, 0xA1, 0x46, 0x40, 0x5E, 0xE6, 0x3C, 0x36, 0x3A} };
#endif /* __IID_IEcoToolchainCodeGenerator1Fixup */

typedef struct IEcoToolchainCodeGenerator1Fixup* IEcoToolchainCodeGenerator1FixupPtr_t;

typedef struct IEcoToolchainCodeGenerator1FixupVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainCodeGenerator1FixupPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainCodeGenerator1FixupPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainCodeGenerator1FixupPtr_t me);

    /* IEcoToolchainCodeGenerator1Fixup */
    char_t* (ECOCALLMETHOD *get_Name)(/* in */ IEcoToolchainCodeGenerator1FixupPtr_t me);
    void (ECOCALLMETHOD *set_Name)(/* in */ IEcoToolchainCodeGenerator1FixupPtr_t me, /* in */ char_t* value);
    char_t (ECOCALLMETHOD *get_Flag)(/* in */ IEcoToolchainCodeGenerator1FixupPtr_t me);
    void (ECOCALLMETHOD *set_Flag)(/* in */ IEcoToolchainCodeGenerator1FixupPtr_t me, /* in */ char_t value);
    uint32_t (ECOCALLMETHOD *get_BaseAddress)(/* in */ IEcoToolchainCodeGenerator1FixupPtr_t me);
    void (ECOCALLMETHOD *set_BaseAddress)(/* in */ IEcoToolchainCodeGenerator1FixupPtr_t me, /* in */ uint32_t value);
    uint32_t (ECOCALLMETHOD *get_Offset)(/* in */ IEcoToolchainCodeGenerator1FixupPtr_t me);
    void (ECOCALLMETHOD *set_Offset)(/* in */ IEcoToolchainCodeGenerator1FixupPtr_t me, /* in */ uint32_t value);

} IEcoToolchainCodeGenerator1FixupVTbl, *IEcoToolchainCodeGenerator1FixupVTblPtr;

interface IEcoToolchainCodeGenerator1Fixup {
    struct IEcoToolchainCodeGenerator1FixupVTbl *pVTbl;
} IEcoToolchainCodeGenerator1Fixup;

#endif /* __I_ECO_TOOLCHAIN_CODE_GENERATOR_1_FIXUP_H__ */
