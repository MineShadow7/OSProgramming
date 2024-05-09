/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoMZEXE1RelocationEntry
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoMZEXE1RelocationEntry
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

#ifndef __I_ECO_MZ_EXE_1_RELOCATION_ENTRY_H__
#define __I_ECO_MZ_EXE_1_RELOCATION_ENTRY_H__

#include "IEcoBase1.h"

typedef struct MZEXE1_RELOCATION_ENTRY_DESCRIPTOR {
    uint16_t offset;
    uint16_t segment;
} MZEXE1_RELOCATION_ENTRY_DESCRIPTOR;

/* IEcoMZEXE1RelocationEntry IID = {6619E97F-23C4-431D-87AB-304A328ABAC1} */
#ifndef __IID_IEcoMZEXE1RelocationEntry
static const UGUID IID_IEcoMZEXE1RelocationEntry = { 0x01, 0x10, {0x66, 0x19, 0xE9, 0x7F, 0x23, 0xC4, 0x43, 0x1D, 0x87, 0xAB, 0x30, 0x4A, 0x32, 0x8A, 0xBA, 0xC1} };
#endif /* __IID_IEcoMZEXE1RelocationEntry */

typedef struct IEcoMZEXE1RelocationEntry* IEcoMZEXE1RelocationEntryPtr_t;

typedef struct IEcoMZEXE1RelocationEntryVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoMZEXE1RelocationEntryPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoMZEXE1RelocationEntryPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoMZEXE1RelocationEntryPtr_t me);

    /* IEcoMZEXE1RelocationEntry */
    MZEXE1_RELOCATION_ENTRY_DESCRIPTOR* (ECOCALLMETHOD *get_Descriptor)(/* in */ IEcoMZEXE1RelocationEntryPtr_t me);
    void (ECOCALLMETHOD *set_Descriptor)(/* in */ IEcoMZEXE1RelocationEntryPtr_t me, /* in */ MZEXE1_RELOCATION_ENTRY_DESCRIPTOR* descriptor);

} IEcoMZEXE1RelocationEntryVTbl, *IEcoMZEXE1RelocationEntryVTblPtr;

interface IEcoMZEXE1RelocationEntry {
    struct IEcoMZEXE1RelocationEntryVTbl *pVTbl;
} IEcoMZEXE1RelocationEntry;

#endif /* __I_ECO_MZ_EXE_1_RELOCATION_ENTRY_H__ */
