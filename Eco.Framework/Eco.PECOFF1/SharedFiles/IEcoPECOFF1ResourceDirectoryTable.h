/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoPECOFF1ResourceDirectoryTable
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoPECOFF1ResourceDirectoryTable
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

#ifndef __I_ECO_PE_COFF_1_RESOURCE_DIRECTORY_TABLE_H__
#define __I_ECO_PE_COFF_1_RESOURCE_DIRECTORY_TABLE_H__

#include "IEcoBase1.h"
#include "IEcoList1.h"

/* IEcoPECOFF1ResourceDirectoryTable IID = {3836D674-C9A2-4315-A99B-70FA23583140} */
#ifndef __IID_IEcoPECOFF1ResourceDirectoryTable
static const UGUID IID_IEcoPECOFF1ResourceDirectoryTable = { 0x01, 0x10, {0x38, 0x36, 0xD6, 0x74, 0xC9, 0xA2, 0x43, 0x15, 0xA9, 0x9B, 0x70, 0xFA, 0x23, 0x58, 0x31, 0x40} };
#endif /* __IID_IEcoPECOFF1ResourceDirectoryTable */

typedef struct IEcoPECOFF1ResourceDirectoryTable* IEcoPECOFF1ResourceDirectoryTablePtr_t;

typedef struct IEcoPECOFF1ResourceDirectoryTableVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoPECOFF1ResourceDirectoryTablePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoPECOFF1ResourceDirectoryTablePtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoPECOFF1ResourceDirectoryTablePtr_t me);

    /* IEcoPECOFF1ResourceDirectoryTable */
    uint32_t (ECOCALLMETHOD *get_Characteristics)(/* in */ IEcoPECOFF1ResourceDirectoryTablePtr_t me);
    void (ECOCALLMETHOD *set_Characteristics)(/* in */ IEcoPECOFF1ResourceDirectoryTablePtr_t me, /* in */ uint32_t flags);
    uint32_t (ECOCALLMETHOD *get_TimeDateStamp)(/* in */ IEcoPECOFF1ResourceDirectoryTablePtr_t me);
    void (ECOCALLMETHOD *set_TimeDateStamp)(/* in */ IEcoPECOFF1ResourceDirectoryTablePtr_t me, /* in */ uint32_t stamp);
    uint16_t (ECOCALLMETHOD *get_MajorVersion)(/* in */ IEcoPECOFF1ResourceDirectoryTablePtr_t me);
    void (ECOCALLMETHOD *set_MajorVersion)(/* in */ IEcoPECOFF1ResourceDirectoryTablePtr_t me, /* in */ uint16_t version);
    uint16_t (ECOCALLMETHOD *get_MinorVersion)(/* in */ IEcoPECOFF1ResourceDirectoryTablePtr_t me);
    void (ECOCALLMETHOD *set_MinorVersion)(/* in */ IEcoPECOFF1ResourceDirectoryTablePtr_t me, /* in */ uint16_t version);
    IEcoList1* (ECOCALLMETHOD *get_NumberOfNameEntries)(/* in */ IEcoPECOFF1ResourceDirectoryTablePtr_t me);
    void (ECOCALLMETHOD *set_NumberOfNameEntries)(/* in */ IEcoPECOFF1ResourceDirectoryTablePtr_t me, /* in */ IEcoList1* entries);
    IEcoList1* (ECOCALLMETHOD *get_NumberOfIDEntries)(/* in */ IEcoPECOFF1ResourceDirectoryTablePtr_t me);
    void (ECOCALLMETHOD *set_NumberOfIDEntries)(/* in */ IEcoPECOFF1ResourceDirectoryTablePtr_t me, /* in */ IEcoList1* entries);
} IEcoPECOFF1ResourceDirectoryTableVTbl, *IEcoPECOFF1ResourceDirectoryTableVTblPtr;

interface IEcoPECOFF1ResourceDirectoryTable {
    struct IEcoPECOFF1ResourceDirectoryTableVTbl *pVTbl;
} IEcoPECOFF1ResourceDirectoryTable;

#endif /* __I_ECO_PE_COFF_1_RESOURCE_DIRECTORY_TABLE_H__ */
