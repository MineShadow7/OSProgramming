/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoPECOFF1ImageFile
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoPECOFF1ImageFile
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

#ifndef __I_ECO_PE_COFF_1_IMAGE_FILE_H__
#define __I_ECO_PE_COFF_1_IMAGE_FILE_H__

#include "IEcoBase1.h"
#include "IEcoCOFF1.h"
#include "IEcoMZEXE1.h"
#include "IEcoList1.h"
#include "IEcoPECOFF1WindowsSpecificFields.h"
#include "IEcoPECOFF1DataDirectories.h"

/* IEcoPECOFF1ImageFile IID = {A3BDB241-9335-43CC-90F1-AB5CA698E632} */
#ifndef __IID_IEcoPECOFF1ImageFile
static const UGUID IID_IEcoPECOFF1ImageFile = { 0x01, 0x10, {0xA3, 0xBD, 0xB2, 0x41, 0x93, 0x35, 0x43, 0xCC, 0x90, 0xF1, 0xAB, 0x5C, 0xA6, 0x98, 0xE6, 0x32} };
#endif /* __IID_IEcoPECOFF1ImageFile */

typedef struct IEcoPECOFF1ImageFile* IEcoPECOFF1ImageFilePtr_t;

typedef struct IEcoPECOFF1ImageFileVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoPECOFF1ImageFilePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoPECOFF1ImageFilePtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoPECOFF1ImageFilePtr_t me);

    /* IEcoPECOFF1ImageFile */
    IEcoMZEXE1ImageFile* (ECOCALLMETHOD *get_MSDOSStub)(/* in */ IEcoPECOFF1ImageFilePtr_t me);
    void (ECOCALLMETHOD *set_MSDOSStub)(/* in */ IEcoPECOFF1ImageFilePtr_t me, /* in */ IEcoMZEXE1ImageFile* pIImageFile);
    uint32_t (ECOCALLMETHOD *get_Signature)(/* in */ IEcoPECOFF1ImageFilePtr_t me);
    void (ECOCALLMETHOD *set_Signature)(/* in */ IEcoPECOFF1ImageFilePtr_t me, /* in */ uint32_t magic);
    IEcoCOFF1FileHeader* (ECOCALLMETHOD *get_FileHeader)(/* in */ IEcoPECOFF1ImageFilePtr_t me);
    void (ECOCALLMETHOD *set_FileHeader)(/* in */ IEcoPECOFF1ImageFilePtr_t me, /* in */ IEcoCOFF1FileHeader* pIFileHeader);
    IEcoCOFF1OptionalHeader* (ECOCALLMETHOD *get_OptionalHeader)(/* in */ IEcoPECOFF1ImageFilePtr_t me);
    void (ECOCALLMETHOD *set_OptionalHeader)(/* in */ IEcoPECOFF1ImageFilePtr_t me, /* in */ IEcoCOFF1OptionalHeader* pIOptionalHeader);
    IEcoList1* (ECOCALLMETHOD *get_SectionHeaders)(/* in */ IEcoPECOFF1ImageFilePtr_t me);
    void (ECOCALLMETHOD *set_SectionHeaders)(/* in */ IEcoPECOFF1ImageFilePtr_t me, /* in */ IEcoList1* pIHeaders);
    IEcoPECOFF1WindowsSpecificFields* (ECOCALLMETHOD *get_WindowsSpecificFields)(/* in */ IEcoPECOFF1ImageFilePtr_t me);
    void (ECOCALLMETHOD *set_WindowsSpecificFields)(/* in */ IEcoPECOFF1ImageFilePtr_t me, /* in */ IEcoPECOFF1WindowsSpecificFields* pIFields);
    IEcoPECOFF1DataDirectories* (ECOCALLMETHOD *get_DataDirectories)(/* in */ IEcoPECOFF1ImageFilePtr_t me);
    void (ECOCALLMETHOD *set_DataDirectories)(/* in */ IEcoPECOFF1ImageFilePtr_t me, /* in */ IEcoPECOFF1DataDirectories* pIDirectories);

} IEcoPECOFF1ImageFileVTbl, *IEcoPECOFF1ImageFileVTblPtr;

interface IEcoPECOFF1ImageFile {
    struct IEcoPECOFF1ImageFileVTbl *pVTbl;
} IEcoPECOFF1ImageFile;

#endif /* __I_ECO_PE_COFF_1_IMAGE_FILE_H__ */
