/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoPECOFF1ImportLookupTable
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoPECOFF1ImportLookupTable
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

#ifndef __I_ECO_PE_COFF_1_IMPORT_LOOKUP_TABLE_H__
#define __I_ECO_PE_COFF_1_IMPORT_LOOKUP_TABLE_H__

#include "IEcoBase1.h"

typedef struct PECOFF1_IMPORT_LOOKUP_ENTRY_DESCRIPTOR {
    uint32_t Lookup:31;     // Ordinal Number or Hint/Name Table RVA
    uint32_t Flag:1;        // Ordinal/Name Flag
} PECOFF1_IMPORT_LOOKUP_ENTRY_DESCRIPTOR;

/* IEcoPECOFF1ImportLookupTable IID = {A7994B05-02D4-4426-9084-8F52F9951D6E} */
#ifndef __IID_IEcoPECOFF1ImportLookupTable
static const UGUID IID_IEcoPECOFF1ImportLookupTable = { 0x01, 0x10, {0xA7, 0x99, 0x4B, 0x05, 0x02, 0xD4, 0x44, 0x26, 0x90, 0x84, 0x8F, 0x52, 0xF9, 0x95, 0x1D, 0x6E} };
#endif /* __IID_IEcoPECOFF1ImportLookupTable */

typedef struct IEcoPECOFF1ImportLookupTable* IEcoPECOFF1ImportLookupTablePtr_t;

typedef struct IEcoPECOFF1ImportLookupTableVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoPECOFF1ImportLookupTablePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoPECOFF1ImportLookupTablePtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoPECOFF1ImportLookupTablePtr_t me);

    /* IEcoPECOFF1ImportLookupTable */
    PECOFF1_IMPORT_LOOKUP_ENTRY_DESCRIPTOR* (ECOCALLMETHOD *get_Descriptor)(/* in */ IEcoPECOFF1ImportLookupTablePtr_t me);
    void (ECOCALLMETHOD *set_Descriptor)(/* in */ IEcoPECOFF1ImportLookupTablePtr_t me, /* in */ PECOFF1_IMPORT_LOOKUP_ENTRY_DESCRIPTOR* descriptor);
    uint16_t (ECOCALLMETHOD *get_Hint)(/* in */ IEcoPECOFF1ImportLookupTablePtr_t me);
    void (ECOCALLMETHOD *set_Hint)(/* in */ IEcoPECOFF1ImportLookupTablePtr_t me, /* in */ uint16_t hint);
    char_t* (ECOCALLMETHOD *get_Name)(/* in */ IEcoPECOFF1ImportLookupTablePtr_t me);
    void (ECOCALLMETHOD *set_Name)(/* in */ IEcoPECOFF1ImportLookupTablePtr_t me, /* in */ char_t* name);

} IEcoPECOFF1ImportLookupTableVTbl, *IEcoPECOFF1ImportLookupTableVTblPtr;

interface IEcoPECOFF1ImportLookupTable {
    struct IEcoPECOFF1ImportLookupTableVTbl *pVTbl;
} IEcoPECOFF1ImportLookupTable;

#endif /* __I_ECO_PE_COFF_1_IMPORT_LOOKUP_TABLE_H__ */
