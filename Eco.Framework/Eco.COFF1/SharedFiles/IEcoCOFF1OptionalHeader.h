/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoCOFF1OptionalHeader
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoCOFF1OptionalHeader
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

#ifndef __I_ECO_COFF_1_OPTIONAL_HEADER_H__
#define __I_ECO_COFF_1_OPTIONAL_HEADER_H__

#include "IEcoBase1.h"

typedef struct COFF1_OPTIONAL_HEADER_DESCRIPTOR {
    uint16_t Magic;
    uint16_t Version;
    uint16_t Revision;
    uint32_t SizeOfCode;
    uint32_t SizeOfInitializedData;
    uint32_t SizeOfUninitializedData;
    uint32_t AddressOfEntryPoint;
    uint32_t BaseOfCode;
    uint32_t BaseOfData;
    uint32_t BaseOfBSS;
    uint32_t GeneralPurposeRegisterMask;
    uint32_t FloatingPointRegisterMask;
    uint32_t GlobalPointer;

} COFF1_OPTIONAL_HEADER_DESCRIPTOR;

/* IEcoCOFF1OptionalHeader IID = {BDF3DDFC-DF6F-4EFF-95CC-A02142A8EFC3} */
#ifndef __IID_IEcoCOFF1OptionalHeader
static const UGUID IID_IEcoCOFF1OptionalHeader = {0x01, 0x10, {0xBD, 0xF3, 0xDD, 0xFC, 0xDF, 0x6F, 0x4E, 0xFF, 0x95, 0xCC, 0xA0, 0x21, 0x42, 0xA8, 0xEF, 0xC3} };
#endif /* __IID_IEcoCOFF1OptionalHeader */

typedef struct IEcoCOFF1OptionalHeader* IEcoCOFF1OptionalHeaderPtr_t;

typedef struct IEcoCOFF1OptionalHeaderVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoCOFF1OptionalHeaderPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoCOFF1OptionalHeaderPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoCOFF1OptionalHeaderPtr_t me);

    /* IEcoCOFF1OptionalHeader */
    COFF1_OPTIONAL_HEADER_DESCRIPTOR* (ECOCALLMETHOD *get_Descriptor)(/* in */ IEcoCOFF1OptionalHeaderPtr_t me);
    void (ECOCALLMETHOD *set_Descriptor)(/* in */ IEcoCOFF1OptionalHeaderPtr_t me, /* in */ COFF1_OPTIONAL_HEADER_DESCRIPTOR* descriptor);

} IEcoCOFF1OptionalHeaderVTbl, *IEcoCOFF1OptionalHeaderVTblPtr;

interface IEcoCOFF1OptionalHeader {
    struct IEcoCOFF1OptionalHeaderVTbl *pVTbl;
} IEcoCOFF1OptionalHeader;


#endif /* __I_ECO_COFF_1_OPTIONAL_HEADER_H__ */
