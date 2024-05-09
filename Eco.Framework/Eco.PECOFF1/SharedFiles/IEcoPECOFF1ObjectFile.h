/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoPECOFF1ObjectFile
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoPECOFF1ObjectFile
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

#ifndef __I_ECO_PE_COFF_1_OBJECT_FILE_H__
#define __I_ECO_PE_COFF_1_OBJECT_FILE_H__

#include "IEcoBase1.h"
#include "IEcoCOFF1.h"
#include "IEcoList1.h"


/* IEcoPECOFF1ObjectFile IID = {E187FED9-B542-47E7-8199-F963EF20B820} */
#ifndef __IID_IEcoPECOFF1ObjectFile
static const UGUID IID_IEcoPECOFF1ObjectFile = { 0x01, 0x10, {0xE1, 0x87, 0xFE, 0xD9, 0xB5, 0x42, 0x47, 0xE7, 0x81, 0x99, 0xF9, 0x63, 0xEF, 0x20, 0xB8, 0x20} };
#endif /* __IID_IEcoPECOFF1ObjectFile */

typedef struct IEcoPECOFF1ObjectFile* IEcoPECOFF1ObjectFilePtr_t;

typedef struct IEcoPECOFF1ObjectFileVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoPECOFF1ObjectFilePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoPECOFF1ObjectFilePtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoPECOFF1ObjectFilePtr_t me);

    /* IEcoPECOFF1ObjectFile */
    IEcoCOFF1FileHeader* (ECOCALLMETHOD *get_FileHeader)(/* in */ IEcoPECOFF1ObjectFilePtr_t me);
    void (ECOCALLMETHOD *set_FileHeader)(/* in */ IEcoPECOFF1ObjectFilePtr_t me, /* in */ IEcoCOFF1FileHeader* pIFileHeader);
    IEcoList1* (ECOCALLMETHOD *get_SectionHeaders)(/* in */ IEcoPECOFF1ObjectFilePtr_t me);
    void (ECOCALLMETHOD *set_SectionHeaders)(/* in */ IEcoPECOFF1ObjectFilePtr_t me, /* in */ IEcoList1* pIHeaders);
    //IEcoPECOFF1COFFStandardFields* (ECOCALLMETHOD *get_COFFStandardFields)(/* in */ struct IEcoPECOFF1Module* me);
    //void (ECOCALLMETHOD *set_COFFStandardFields)(/* in */ struct IEcoPECOFF1Module* me, /* in */ IEcoPECOFF1COFFStandardFields* pIFields);
    //IEcoPECOFF1WindowsSpecificFields* (ECOCALLMETHOD *get_WindowsSpecificFields)(/* in */ struct IEcoPECOFF1Module* me);
    //void (ECOCALLMETHOD *set_WindowsSpecificFields)(/* in */ struct IEcoPECOFF1Module* me, /* in */ IEcoPECOFF1WindowsSpecificFields* pIFields);
    //IEcoPECOFF1HeaderDataDirectories* (ECOCALLMETHOD *get_HeaderDataDirectories)(/* in */ struct IEcoPECOFF1Module* me);
    //void (ECOCALLMETHOD *set_HeaderDataDirectories)(/* in */ struct IEcoPECOFF1Module* me, /* in */ IEcoPECOFF1HeaderDataDirectories* pIDirectories);
    //void (ECOCALLMETHOD *set_SectionHeaders)(/* in */ struct IEcoPECOFF1Module* me, /* in */ IEcoList1* pIHeaders);

} IEcoPECOFF1ObjectFileVTbl, *IEcoPECOFF1ObjectFileVTblPtr;

interface IEcoPECOFF1ObjectFile {
    struct IEcoPECOFF1ObjectFileVTbl *pVTbl;
} IEcoPECOFF1ObjectFile;

#endif /* __I_ECO_PE_COFF_1_OBJECT_FILE_H__ */
