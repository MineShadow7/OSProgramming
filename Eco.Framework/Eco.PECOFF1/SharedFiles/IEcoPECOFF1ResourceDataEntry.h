/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoPECOFF1ResourceDataEntry
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoPECOFF1ResourceDataEntry
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

#ifndef __I_ECO_PE_COFF_1_RESOURCE_DATA_ENTRY_H__
#define __I_ECO_PE_COFF_1_RESOURCE_DATA_ENTRY_H__

#include "IEcoBase1.h"

/* IEcoPECOFF1ResourceDataEntry IID = {F9860030-4D0D-4B52-B415-DAA70F2FFC6B} */
#ifndef __IID_IEcoPECOFF1ResourceDataEntry
static const UGUID IID_IEcoPECOFF1ResourceDataEntry = { 0x01, 0x10, {0xF9, 0x86, 0x00, 0x30, 0x4D, 0x0D, 0x4B, 0x52, 0xB4, 0x15, 0xDA, 0xA7, 0x0F, 0x2F, 0xFC, 0x6B} };
#endif /* __IID_IEcoPECOFF1ResourceDataEntry */

typedef struct IEcoPECOFF1ResourceDataEntry* IEcoPECOFF1ResourceDataEntryPtr_t;

typedef struct IEcoPECOFF1ResourceDataEntryVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoPECOFF1ResourceDataEntryPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoPECOFF1ResourceDataEntryPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoPECOFF1ResourceDataEntryPtr_t me);

    /* IEcoPECOFF1ResourceDataEntry */
    uint32_t (ECOCALLMETHOD *get_DataRVA)(/* in */ IEcoPECOFF1ResourceDataEntryPtr_t me);
    void (ECOCALLMETHOD *set_DataRVA)(/* in */ IEcoPECOFF1ResourceDataEntryPtr_t me, /* in */ uint32_t address);
    uint32_t (ECOCALLMETHOD *get_Size)(/* in */ IEcoPECOFF1ResourceDataEntryPtr_t me);
    void (ECOCALLMETHOD *set_Size)(/* in */ IEcoPECOFF1ResourceDataEntryPtr_t me, /* in */ uint32_t size);
    uint32_t (ECOCALLMETHOD *get_Codepage)(/* in */ IEcoPECOFF1ResourceDataEntryPtr_t me);
    void (ECOCALLMETHOD *set_Codepage)(/* in */ IEcoPECOFF1ResourceDataEntryPtr_t me, /* in */ uint32_t codepage);
    uint32_t (ECOCALLMETHOD *get_Reserved)(/* in */ IEcoPECOFF1ResourceDataEntryPtr_t me);
    void (ECOCALLMETHOD *set_Reserved)(/* in */ IEcoPECOFF1ResourceDataEntryPtr_t me, /* in */ uint32_t dd);

    byte_t* (ECOCALLMETHOD *get_Data)(/* in */ IEcoPECOFF1ResourceDataEntryPtr_t me);
    void (ECOCALLMETHOD *set_Data)(/* in */ IEcoPECOFF1ResourceDataEntryPtr_t me, /* in */ byte_t* buffer);

} IEcoPECOFF1ResourceDataEntryVTbl, *IEcoPECOFF1ResourceDataEntryVTblPtr;

interface IEcoPECOFF1ResourceDataEntry {
    struct IEcoPECOFF1ResourceDataEntryVTbl *pVTbl;
} IEcoPECOFF1ResourceDataEntry;

#endif /* __I_ECO_PE_COFF_1_RESOURCE_DATA_ENTRY_H__ */
