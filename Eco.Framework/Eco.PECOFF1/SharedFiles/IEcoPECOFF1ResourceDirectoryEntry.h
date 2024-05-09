/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoPECOFF1ResourceDirectoryEntry
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoPECOFF1ResourceDirectoryEntry
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

#ifndef __I_ECO_PE_COFF_1_RESOURCE_DIRECTORY_ENTRY_H__
#define __I_ECO_PE_COFF_1_RESOURCE_DIRECTORY_ENTRY_H__

#include "IEcoBase1.h"
#include "IEcoPECOFF1ResourceDataEntry.h"
#include "IEcoPECOFF1ResourceDirectoryTable.h"

/* IEcoPECOFF1ResourceDirectoryEntry IID = {303F4938-739A-4A2B-8C5A-86AEDB59C497} */
#ifndef __IID_IEcoPECOFF1ResourceDirectoryEntry
static const UGUID IID_IEcoPECOFF1ResourceDirectoryEntry = { 0x01, 0x10, {0x30, 0x3F, 0x49, 0x38, 0x73, 0x9A, 0x4A, 0x2B, 0x8C, 0x5A, 0x86, 0xAE, 0xDB, 0x59, 0xC4, 0x97} };
#endif /* __IID_IEcoPECOFF1ResourceDirectoryEntry */

typedef struct IEcoPECOFF1ResourceDirectoryEntry* IEcoPECOFF1ResourceDirectoryEntryPtr_t;

typedef struct IEcoPECOFF1ResourceDirectoryEntryVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoPECOFF1ResourceDirectoryEntryPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoPECOFF1ResourceDirectoryEntryPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoPECOFF1ResourceDirectoryEntryPtr_t me);

    /* IEcoPECOFF1ResourceDirectoryEntry */
    uint32_t (ECOCALLMETHOD *get_NameRVA)(/* in */ IEcoPECOFF1ResourceDirectoryEntryPtr_t me);
    void (ECOCALLMETHOD *set_NameRVA)(/* in */ IEcoPECOFF1ResourceDirectoryEntryPtr_t me, /* in */ uint32_t address);
    uint32_t (ECOCALLMETHOD *get_IntegerID)(/* in */ IEcoPECOFF1ResourceDirectoryEntryPtr_t me);
    void (ECOCALLMETHOD *set_IntegerID)(/* in */ IEcoPECOFF1ResourceDirectoryEntryPtr_t me, /* in */ uint32_t ID);
    IEcoPECOFF1ResourceDataEntry* (ECOCALLMETHOD *get_DataEntryRVA)(/* in */ IEcoPECOFF1ResourceDirectoryEntryPtr_t me);
    void (ECOCALLMETHOD *set_DataEntryRVA)(/* in */ IEcoPECOFF1ResourceDirectoryEntryPtr_t me, /* in */ IEcoPECOFF1ResourceDataEntry* entry);
    IEcoPECOFF1ResourceDirectoryTable* (ECOCALLMETHOD *get_SubdirectoryRVA)(/* in */ IEcoPECOFF1ResourceDirectoryEntryPtr_t me);
    void (ECOCALLMETHOD *set_SubdirectoryRVA)(/* in */ IEcoPECOFF1ResourceDirectoryEntryPtr_t me, /* in */ IEcoPECOFF1ResourceDirectoryTable* table);

} IEcoPECOFF1ResourceDirectoryEntryVTbl, *IEcoPECOFF1ResourceDirectoryEntryVTblPtr;

interface IEcoPECOFF1ResourceDirectoryEntry {
    struct IEcoPECOFF1ResourceDirectoryEntryVTbl *pVTbl;
} IEcoPECOFF1ResourceDirectoryEntry;

#endif /* __I_ECO_PE_COFF_1_RESOURCE_DIRECTORY_ENTRY_H__ */
