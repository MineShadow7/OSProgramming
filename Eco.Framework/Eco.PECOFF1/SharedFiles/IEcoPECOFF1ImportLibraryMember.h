/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoPECOFF1ImportLibraryMember
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoPECOFF1ImportLibraryMember
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

#ifndef __I_ECO_PE_COFF_1_IMPORT_OBJECT_HEADER_H__
#define __I_ECO_PE_COFF_1_IMPORT_OBJECT_HEADER_H__

#include "IEcoBase1.h"

typedef enum PECOFF1_IMPORT_OBJECT_TYPE {
    PECOFF1_IMPORT_OBJECT_CODE = 0,
    PECOFF1_IMPORT_OBJECT_DATA = 1,
    PECOFF1_IMPORT_OBJECT_CONST = 2
} PECOFF1_IMPORT_OBJECT_TYPE;

typedef enum PECOFF1_IMPORT_OBJECT_NAME_TYPE {
    PECOFF1_IMPORT_OBJECT_ORDINAL = 0,
    PECOFF1_IMPORT_OBJECT_NAME = 1,
    PECOFF1_IMPORT_OBJECT_NAME_NO_PREFIX = 2,
    PECOFF1_IMPORT_OBJECT_NAME_UNDECORATE = 3
} PECOFF1_IMPORT_OBJECT_NAME_TYPE;

typedef struct PECOFF1_IMPORT_OBJECT_HEADER_DESCRIPTOR {
    uint16_t Sig1;
    uint16_t Sig2;
    uint16_t Version;
    uint16_t Machine;
    uint32_t TimeDateStamp;
    uint32_t SizeOfData;

    union {
        uint16_t Ordinal;
        uint16_t Hint;
    } DUMMYUNIONNAME;

    uint16_t Type:2;
    uint16_t NameType:3;
    uint16_t Reserved:11;
} PECOFF1_IMPORT_OBJECT_HEADER_DESCRIPTOR;

/* IEcoPECOFF1ImportLibraryMember IID = {28F7BC95-BFDF-4243-B9F8-F3398DE02FF3} */
#ifndef __IID_IEcoPECOFF1ImportLibraryMember
static const UGUID IID_IEcoPECOFF1ImportLibraryMember = { 0x01, 0x10, {0x28, 0xF7, 0xBC, 0x95, 0xBF, 0xDF, 0x42, 0x43, 0xB9, 0xF8, 0xF3, 0x39, 0x8D, 0xE0, 0x2F, 0xF3} };
#endif /* __IID_IEcoPECOFF1ImportLibraryMember */

typedef struct IEcoPECOFF1ImportLibraryMember* IEcoPECOFF1ImportLibraryMemberPtr_t;

typedef struct IEcoPECOFF1ImportLibraryMemberVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoPECOFF1ImportLibraryMemberPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoPECOFF1ImportLibraryMemberPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoPECOFF1ImportLibraryMemberPtr_t me);

    /* IEcoPECOFF1ImportLibraryMember */
    PECOFF1_IMPORT_OBJECT_HEADER_DESCRIPTOR* (ECOCALLMETHOD *get_Descriptor)(/* in */ IEcoPECOFF1ImportLibraryMemberPtr_t me);
    void (ECOCALLMETHOD *set_Descriptor)(/* in */ IEcoPECOFF1ImportLibraryMemberPtr_t me, /* in */ PECOFF1_IMPORT_OBJECT_HEADER_DESCRIPTOR* descriptor);
    char_t* (ECOCALLMETHOD *get_ImportName)(/* in */ IEcoPECOFF1ImportLibraryMemberPtr_t me);
    void (ECOCALLMETHOD *set_ImportName)(/* in */ IEcoPECOFF1ImportLibraryMemberPtr_t me, /* in */ char_t* name);
    char_t* (ECOCALLMETHOD *get_LibraryName)(/* in */ IEcoPECOFF1ImportLibraryMemberPtr_t me);
    void (ECOCALLMETHOD *set_LibraryName)(/* in */ IEcoPECOFF1ImportLibraryMemberPtr_t me, /* in */ char_t* name);

} IEcoPECOFF1ImportLibraryMemberVTbl, *IEcoPECOFF1ImportLibraryMemberVTblPtr;

interface IEcoPECOFF1ImportLibraryMember {
    struct IEcoPECOFF1ImportLibraryMemberVTbl *pVTbl;
} IEcoPECOFF1ImportLibraryMember;

#endif /* __I_ECO_PE_COFF_1_IMPORT_LOOKUP_TABLE_H__ */
