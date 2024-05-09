/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoCOFF1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoCOFF1
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

#ifndef __I_ECO_COFF_1_H__
#define __I_ECO_COFF_1_H__

#include "IEcoBase1.h"
#include "IEcoCOFF1ObjectFile.h"
#include "IEcoCOFF1OptionalHeader.h"
#include "IEcoCOFF1SectionHeader.h"
#include "IEcoCOFF1RelocationTableEntry.h"
#include "IEcoCOFF1ArchiveFile.h"
#include "IEcoCOFF1ArchiveMemberHeader.h"


/* IEcoCOFF1 IID = {BDF3DDFC-DF6F-4EFF-95CC-A02142A8EFC3} */
#ifndef __IID_IEcoCOFF1
static const UGUID IID_IEcoCOFF1 = {0x01, 0x10, {0xBD, 0xF3, 0xDD, 0xFC, 0xDF, 0x6F, 0x4E, 0xFF, 0x95, 0xCC, 0xA0, 0x21, 0x42, 0xA8, 0xEF, 0xC3} };
#endif /* __IID_IEcoCOFF1 */

typedef struct IEcoCOFF1* IEcoCOFF1Ptr_t;

typedef struct IEcoCOFF1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoCOFF1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoCOFF1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoCOFF1Ptr_t me);

    /* IEcoCOFF1 */
    IEcoCOFF1ObjectFile* (ECOCALLMETHOD *readObjectFile)(/* in */ IEcoCOFF1Ptr_t me, /* in */ char_t* fileName);
    int16_t (ECOCALLMETHOD *writeObjectFile)(/* in */ IEcoCOFF1Ptr_t me, /* in */ IEcoCOFF1ObjectFile* pIObjectFile, /* in */ char_t* fileName);
    IEcoCOFF1ArchiveFile* (ECOCALLMETHOD *readArchiveFile)(/* in */ IEcoCOFF1Ptr_t me, /* in */ char_t* fileName);
    int16_t (ECOCALLMETHOD *writeArchiveFile)(/* in */ IEcoCOFF1Ptr_t me, /* in */ IEcoCOFF1ArchiveFile* pIArchiveFile, /* in */ char_t* fileName);

    IEcoCOFF1ObjectFile* (ECOCALLMETHOD *createObjectFile)(/* in */ IEcoCOFF1Ptr_t me);
    IEcoCOFF1ArchiveFile* (ECOCALLMETHOD *createArchiveFile)(/* in */ IEcoCOFF1Ptr_t me);
    IEcoCOFF1FileHeader* (ECOCALLMETHOD *createFileHeader)(/* in */ IEcoCOFF1Ptr_t me);
    IEcoCOFF1OptionalHeader* (ECOCALLMETHOD *createOptionalHeader)(/* in */ IEcoCOFF1Ptr_t me);
    IEcoCOFF1SectionHeader* (ECOCALLMETHOD *createSectionHeader)(/* in */ IEcoCOFF1Ptr_t me);
    IEcoCOFF1RelocationTableEntry* (ECOCALLMETHOD *createRelocationTableEntry)(/* in */ IEcoCOFF1Ptr_t me);
    IEcoCOFF1ArchiveMemberHeader* (ECOCALLMETHOD *createArchiveMemberHeader)(/* in */ IEcoCOFF1Ptr_t me);

} IEcoCOFF1VTbl, *IEcoCOFF1VTblPtr;

interface IEcoCOFF1 {
    struct IEcoCOFF1VTbl *pVTbl;
} IEcoCOFF1;


#endif /* __I_ECO_COFF_1_H__ */
