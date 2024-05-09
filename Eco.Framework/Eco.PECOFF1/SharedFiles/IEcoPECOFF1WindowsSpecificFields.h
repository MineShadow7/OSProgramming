/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoPECOFF1WindowsSpecificFields
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoPECOFF1WindowsSpecificFields
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

#ifndef __I_ECO_PE_COFF_1_WINDOWS_SPECIFIC_FIELDS_H__
#define __I_ECO_PE_COFF_1_WINDOWS_SPECIFIC_FIELDS_H__

#include "IEcoBase1.h"

typedef struct PECOFF1_WINDOWS_SPECIFIC_FIELDS_DESCRIPTOR {
    uint32_t ImageBase;
    uint32_t SectionAlignment;
    uint32_t FileAlignment;
    uint16_t MajorOperatingSystemVersion;
    uint16_t MinorOperatingSystemVersion;
    uint16_t MajorImageVersion;
    uint16_t MinorImageVersion;
    uint16_t MajorSubsystemVersion;
    uint16_t MinorSubsystemVersion;
    uint32_t Reserved;
    uint32_t SizeOfImage;
    uint32_t SizeOfHeaders;
    uint32_t CheckSum;
    uint16_t Subsystem;
    uint16_t DLLCharacteristics;
    uint32_t SizeOfStackReserve;
    uint32_t SizeOfStackCommit;
    uint32_t SizeOfHeapReserve;
    uint32_t SizeOfHeapCommit;
    uint32_t LoaderFlags;
    uint32_t NumberOfRvaAndSizes;
} PECOFF1_WINDOWS_SPECIFIC_FIELDS_DESCRIPTOR;

/* IEcoPECOFF1WindowsSpecificFields IID = {D8C5A9B8-B4FB-4F7B-89A0-830D20513359} */
#ifndef __IID_IEcoPECOFF1WindowsSpecificFields
static const UGUID IID_IEcoPECOFF1WindowsSpecificFields = { 0x01, 0x10, {0xD8, 0xC5, 0xA9, 0xB8, 0xB4, 0xFB, 0x4F, 0x7B, 0x89, 0xA0, 0x83, 0x0D, 0x20, 0x51, 0x33, 0x59} };
#endif /* __IID_IEcoPECOFF1WindowsSpecificFields */

typedef struct IEcoPECOFF1WindowsSpecificFields* IEcoPECOFF1WindowsSpecificFieldsPtr_t;

typedef struct IEcoPECOFF1WindowsSpecificFieldsVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoPECOFF1WindowsSpecificFieldsPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoPECOFF1WindowsSpecificFieldsPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoPECOFF1WindowsSpecificFieldsPtr_t me);

    /* IEcoPECOFF1WindowsSpecificFields */
    PECOFF1_WINDOWS_SPECIFIC_FIELDS_DESCRIPTOR* (ECOCALLMETHOD *get_Descriptor)(/* in */ IEcoPECOFF1WindowsSpecificFieldsPtr_t me);
    void (ECOCALLMETHOD *set_Descriptor)(/* in */ IEcoPECOFF1WindowsSpecificFieldsPtr_t me, /* in */ PECOFF1_WINDOWS_SPECIFIC_FIELDS_DESCRIPTOR* descriptor);

} IEcoPECOFF1WindowsSpecificFieldsVTbl, *IEcoPECOFF1WindowsSpecificFieldsVTblPtr;

interface IEcoPECOFF1WindowsSpecificFields {
    struct IEcoPECOFF1WindowsSpecificFieldsVTbl *pVTbl;
} IEcoPECOFF1WindowsSpecificFields;

#endif /* __I_ECO_PE_COFF_1_WINDOWS_SPECIFIC_FIELDS_H__ */
