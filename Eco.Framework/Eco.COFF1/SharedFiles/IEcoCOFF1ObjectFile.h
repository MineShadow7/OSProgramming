/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoCOFF1ObjectFile
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoCOFF1ObjectFile
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

#ifndef __I_ECO_COFF_1_OBJECT_FILE_H__
#define __I_ECO_COFF_1_OBJECT_FILE_H__

#include "IEcoBase1.h"
#include "IEcoCOFF1FileHeader.h"

/* IEcoCOFF1ObjectFile IID = {755079FE-49A0-4634-8A11-F915C941FFA3} */
#ifndef __IID_IEcoCOFF1ObjectFile
static const UGUID IID_IEcoCOFF1ObjectFile = { 0x01, 0x10, {0x75, 0x50, 0x79, 0xFE, 0x49, 0xA0, 0x46, 0x34, 0x8A, 0x11, 0xF9, 0x15, 0xC9, 0x41, 0xFF, 0xA3} };
#endif /* __IID_IEcoCOFF1ObjectFile */

typedef struct IEcoCOFF1ObjectFile* IEcoCOFF1ObjectFilePtr_t;

typedef struct IEcoCOFF1ObjectFileVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoCOFF1ObjectFilePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoCOFF1ObjectFilePtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoCOFF1ObjectFilePtr_t me);

    /* IEcoCOFF1ObjectFile */
    IEcoCOFF1FileHeader* (ECOCALLMETHOD *get_FileHeader)(/* in */ IEcoCOFF1ObjectFilePtr_t me);
    void (ECOCALLMETHOD *set_FileHeader)(/* in */ IEcoCOFF1ObjectFilePtr_t me, /* in */ IEcoCOFF1FileHeader* pIHeader);
    //IEcoPECOFF1COFFStandardFields* (ECOCALLMETHOD *get_COFFStandardFields)(/* in */ IEcoCOFF1ObjectFilePtr_t me);
    //void (ECOCALLMETHOD *set_COFFStandardFields)(/* in */ IEcoCOFF1ObjectFilePtr_t me, /* in */ IEcoPECOFF1COFFStandardFields* pIFields);
    //IEcoPECOFF1WindowsSpecificFields* (ECOCALLMETHOD *get_WindowsSpecificFields)(/* in */ IEcoCOFF1ObjectFilePtr_t me);
    //void (ECOCALLMETHOD *set_WindowsSpecificFields)(/* in */ IEcoCOFF1ObjectFilePtr_t me, /* in */ IEcoPECOFF1WindowsSpecificFields* pIFields);
    //IEcoPECOFF1HeaderDataDirectories* (ECOCALLMETHOD *get_HeaderDataDirectories)(/* in */ IEcoCOFF1ObjectFilePtr_t me);
    //void (ECOCALLMETHOD *set_HeaderDataDirectories)(/* in */ IEcoCOFF1ObjectFilePtr_t me, /* in */ IEcoPECOFF1HeaderDataDirectories* pIDirectories);
    //IEcoList1* (ECOCALLMETHOD *get_SectionHeaders)(/* in */ IEcoCOFF1ObjectFilePtr_t me);
    //void (ECOCALLMETHOD *set_SectionHeaders)(/* in */ IEcoCOFF1ObjectFilePtr_t me, /* in */ IEcoList1* pIHeaders);

} IEcoCOFF1ObjectFileVTbl, *IEcoCOFF1ObjectFileVTblPtr;

interface IEcoCOFF1ObjectFile {
    struct IEcoCOFF1ObjectFileVTbl *pVTbl;
} IEcoCOFF1ObjectFile;

#endif /* __I_ECO_COFF_1_OBJECT_FILE_H__ */
