/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoPECOFF1ImportDirectoryEntry
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoPECOFF1ImportDirectoryEntry
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

#ifndef __I_ECO_PE_COFF_1_IMPORT_DIRECTORY_TABLE_H__
#define __I_ECO_PE_COFF_1_IMPORT_DIRECTORY_TABLE_H__

#include "IEcoBase1.h"
#include "IEcoList1.h"


typedef struct PECOFF1_IMPORT_DIRECTORY_ENTRY_DESCRIPTOR {
    uint32_t ImportLookupTableRVA;
    uint32_t TimeDateStamp;
    uint32_t FowarderChain;
    uint32_t NameRVA;
    uint32_t ImportAddressTableRVA;
} PECOFF1_IMPORT_DIRECTORY_ENTRY_DESCRIPTOR;

/* IEcoPECOFF1ImportDirectoryEntry IID = {70E40436-188D-44E1-9EE9-8362770213FB} */
#ifndef __IID_IEcoPECOFF1ImportDirectoryEntry
static const UGUID IID_IEcoPECOFF1ImportDirectoryEntry = { 0x01, 0x10, {0x70, 0xE4, 0x04, 0x36, 0x18, 0x8D, 0x44, 0xE1, 0x9E, 0xE9, 0x83, 0x62, 0x77, 0x02, 0x13, 0xFB} };
#endif /* __IID_IEcoPECOFF1ImportDirectoryEntry */

typedef struct IEcoPECOFF1ImportDirectoryEntry* IEcoPECOFF1ImportDirectoryEntryPtr_t;

typedef struct IEcoPECOFF1ImportDirectoryEntryVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoPECOFF1ImportDirectoryEntryPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoPECOFF1ImportDirectoryEntryPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoPECOFF1ImportDirectoryEntryPtr_t me);

    /* IEcoPECOFF1ImportDirectoryEntry */
    PECOFF1_IMPORT_DIRECTORY_ENTRY_DESCRIPTOR* (ECOCALLMETHOD *get_Descriptor)(/* in */ IEcoPECOFF1ImportDirectoryEntryPtr_t me);
    void (ECOCALLMETHOD *set_Descriptor)(/* in */ IEcoPECOFF1ImportDirectoryEntryPtr_t me, /* in */ PECOFF1_IMPORT_DIRECTORY_ENTRY_DESCRIPTOR* descriptor);
    char_t* (ECOCALLMETHOD *get_Name)(/* in */ IEcoPECOFF1ImportDirectoryEntryPtr_t me);
    void (ECOCALLMETHOD *set_Name)(/* in */ IEcoPECOFF1ImportDirectoryEntryPtr_t me, /* in */ char_t* name);
    IEcoList1* (ECOCALLMETHOD *get_ImportLookupTable)(/* in */ IEcoPECOFF1ImportDirectoryEntryPtr_t me);
    void (ECOCALLMETHOD *set_ImportLookupTable)(/* in */ IEcoPECOFF1ImportDirectoryEntryPtr_t me, /* in */ IEcoList1* entries);

} IEcoPECOFF1ImportDirectoryEntryVTbl, *IEcoPECOFF1ImportDirectoryEntryVTblPtr;

interface IEcoPECOFF1ImportDirectoryEntry {
    struct IEcoPECOFF1ImportDirectoryEntryVTbl *pVTbl;
} IEcoPECOFF1ImportDirectoryEntry;

#endif /* __I_ECO_PE_COFF_1_IMPORT_DIRECTORY_TABLE_H__ */
