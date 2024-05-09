/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoCOFF1ArchiveFile
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoCOFF1ArchiveFile
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

#ifndef __I_ECO_PE_COFF_1_ARCHIVE_FILE_H__
#define __I_ECO_PE_COFF_1_ARCHIVE_FILE_H__

#include "IEcoBase1.h"
#include "IEcoCOFF1.h"
#include "IEcoList1.h"


/* IEcoCOFF1ArchiveFile IID = {F2A3737F-6B68-4C37-B747-82AC95B84341} */
#ifndef __IID_IEcoCOFF1ArchiveFile
static const UGUID IID_IEcoCOFF1ArchiveFile = { 0x01, 0x10, {0xF2, 0xA3, 0x73, 0x7F, 0x6B, 0x68, 0x4C, 0x37, 0xB7, 0x47, 0x82, 0xAC, 0x95, 0xB8, 0x43, 0x41} };
#endif /* __IID_IEcoCOFF1ArchiveFile */

typedef struct IEcoCOFF1ArchiveFile* IEcoCOFF1ArchiveFilePtr_t;

typedef struct IEcoCOFF1ArchiveFileVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoCOFF1ArchiveFilePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoCOFF1ArchiveFilePtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoCOFF1ArchiveFilePtr_t me);

    /* IEcoCOFF1ArchiveFile */
    char_t* (ECOCALLMETHOD *get_Signature)(/* in */ IEcoCOFF1ArchiveFilePtr_t me);
    void (ECOCALLMETHOD *set_Signature)(/* in */ IEcoCOFF1ArchiveFilePtr_t me, /* in */ char_t* magic);
    IEcoList1* (ECOCALLMETHOD *get_MemberHeaders)(/* in */ IEcoCOFF1ArchiveFilePtr_t me);
    void (ECOCALLMETHOD *set_MemberHeaders)(/* in */ IEcoCOFF1ArchiveFilePtr_t me, /* in */ IEcoList1* pIMemberHeaders);

} IEcoCOFF1ArchiveFileVTbl, *IEcoCOFF1ArchiveFileVTblPtr;

interface IEcoCOFF1ArchiveFile {
    struct IEcoCOFF1ArchiveFileVTbl *pVTbl;
} IEcoCOFF1ArchiveFile;

#endif /* __I_ECO_PE_COFF_1_ARCHIVE_FILE_H__ */
