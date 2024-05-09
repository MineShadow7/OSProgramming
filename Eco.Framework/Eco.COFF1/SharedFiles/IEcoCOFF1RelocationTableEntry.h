/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoCOFF1RelocationTableEntry
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoCOFF1RelocationTableEntry
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

#ifndef __I_ECO_COFF_1_RELOCATION_TABLE_ENTRY_H__
#define __I_ECO_COFF_1_RELOCATION_TABLE_ENTRY_H__

#include "IEcoBase1.h"

typedef struct COFF1_RELOCATION_TABLE_ENTRY_DESCRIPTOR {
    uint32_t VirtualAddress;
    uint32_t SymbolTableIndex;
    uint16_t Type;
} COFF1_RELOCATION_TABLE_ENTRY_DESCRIPTOR;

/* IEcoCOFF1RelocationTableEntry IID = {CDBD2DF8-0D61-49AE-9601-1E2718D4C5D3} */
#ifndef __IID_IEcoCOFF1RelocationTableEntry
static const UGUID IID_IEcoCOFF1RelocationTableEntry = {0x01, 0x10, {0xCD, 0xBD, 0x2D, 0xF8, 0x0D, 0x61, 0x49, 0xAE, 0x96, 0x01, 0x1E, 0x27, 0x18, 0xD4, 0xC5, 0xD3} };
#endif /* __IID_IEcoCOFF1RelocationTableEntry */

typedef struct IEcoCOFF1RelocationTableEntry* IEcoCOFF1RelocationTableEntryPtr_t;

typedef struct IEcoCOFF1RelocationTableEntryVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoCOFF1RelocationTableEntryPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoCOFF1RelocationTableEntryPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoCOFF1RelocationTableEntryPtr_t me);

    /* IEcoCOFF1RelocationTableEntry */
    COFF1_RELOCATION_TABLE_ENTRY_DESCRIPTOR* (ECOCALLMETHOD *get_Descriptor)(/* in */ IEcoCOFF1RelocationTableEntryPtr_t me);
    void (ECOCALLMETHOD *set_Descriptor)(/* in */ IEcoCOFF1RelocationTableEntryPtr_t me, /* in */ COFF1_RELOCATION_TABLE_ENTRY_DESCRIPTOR* descriptor);

} IEcoCOFF1RelocationTableEntryVTbl, *IEcoCOFF1RelocationTableEntryVTblPtr;

interface IEcoCOFF1RelocationTableEntry {
    struct IEcoCOFF1RelocationTableEntryVTbl *pVTbl;
} IEcoCOFF1RelocationTableEntry;

#endif /* __I_ECO_COFF_1_RELOCATION_TABLE_ENTRY_H__ */
