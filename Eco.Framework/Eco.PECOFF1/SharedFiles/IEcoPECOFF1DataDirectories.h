/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoPECOFF1DataDirectories
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoPECOFF1DataDirectories
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

#ifndef __I_ECO_PE_COFF_1_DATA_DIRECTORIES_H__
#define __I_ECO_PE_COFF_1_DATA_DIRECTORIES_H__

#include "IEcoBase1.h"

typedef struct PECOFF1_IMAGE_DATA_DIRECTORY {
    uint32_t RVA;
    uint32_t Size;
} PECOFF1_IMAGE_DATA_DIRECTORY;

typedef struct PECOFF1_IMAGE_DATA_DIRECTORIES_DESCRIPTOR {
    PECOFF1_IMAGE_DATA_DIRECTORY ExportTable;
    PECOFF1_IMAGE_DATA_DIRECTORY ImportTable;
    PECOFF1_IMAGE_DATA_DIRECTORY ResourceTable;
    PECOFF1_IMAGE_DATA_DIRECTORY ExceptionTable;
    PECOFF1_IMAGE_DATA_DIRECTORY CertificateTable;
    PECOFF1_IMAGE_DATA_DIRECTORY BaseRelocationTable;
    PECOFF1_IMAGE_DATA_DIRECTORY Debug;
    PECOFF1_IMAGE_DATA_DIRECTORY Architecture;
    PECOFF1_IMAGE_DATA_DIRECTORY GlobalPtr;
    PECOFF1_IMAGE_DATA_DIRECTORY TLSTable;
    PECOFF1_IMAGE_DATA_DIRECTORY LoadConfigTable;
    PECOFF1_IMAGE_DATA_DIRECTORY BoundImport;
    PECOFF1_IMAGE_DATA_DIRECTORY IAT;
    PECOFF1_IMAGE_DATA_DIRECTORY DelayImportDescriptor;
    PECOFF1_IMAGE_DATA_DIRECTORY CLRRuntimeHeader;
    PECOFF1_IMAGE_DATA_DIRECTORY Reserved;
} PECOFF1_IMAGE_DATA_DIRECTORIES_DESCRIPTOR;

/* IEcoPECOFF1DataDirectories IID = {C8FCA66A-953E-4389-BD3C-A6AC36163CBB} */
#ifndef __IID_IEcoPECOFF1DataDirectories
static const UGUID IID_IEcoPECOFF1DataDirectories = { 0x01, 0x10, {0xC8, 0xFC, 0xA6, 0x6A, 0x95, 0x3E, 0x43, 0x89, 0xBD, 0x3C, 0xA6, 0xAC, 0x36, 0x16, 0x3C, 0xBB} };
#endif /* __IID_IEcoPECOFF1DataDirectories */

typedef struct IEcoPECOFF1DataDirectories* IEcoPECOFF1DataDirectoriesPtr_t;

typedef struct IEcoPECOFF1DataDirectoriesVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoPECOFF1DataDirectoriesPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoPECOFF1DataDirectoriesPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoPECOFF1DataDirectoriesPtr_t me);

    /* IEcoPECOFF1DataDirectories */
    PECOFF1_IMAGE_DATA_DIRECTORIES_DESCRIPTOR* (ECOCALLMETHOD *get_Descriptor)(/* in */ IEcoPECOFF1DataDirectoriesPtr_t me);
    void (ECOCALLMETHOD *set_Descriptor)(/* in */ IEcoPECOFF1DataDirectoriesPtr_t me, /* in */ PECOFF1_IMAGE_DATA_DIRECTORIES_DESCRIPTOR* descriptor);


} IEcoPECOFF1DataDirectoriesVTbl, *IEcoPECOFF1DataDirectoriesVTblPtr;

interface IEcoPECOFF1DataDirectories {
    struct IEcoPECOFF1DataDirectoriesVTbl *pVTbl;
} IEcoPECOFF1DataDirectories;

#endif /* __I_ECO_PE_COFF_1_DATA_DIRECTORIES_H__ */
