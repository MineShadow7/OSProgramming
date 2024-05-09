/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoPECOFF1ObjectFileMember
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoPECOFF1ObjectFileMember
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

#ifndef __I_ECO_PE_COFF_1_OBJECT_FILE_MEMBER_H__
#define __I_ECO_PE_COFF_1_OBJECT_FILE_MEMBER_H__

#include "IEcoBase1.h"
#include "IEcoPECOFF1ObjectFile.h"

typedef struct PECOFF1_OBJECT_HEADER_DESCRIPTOR {
    uint16_t Sig1;
    uint16_t Sig2;
    uint16_t Version;
    uint16_t Machine;
    uint32_t TimeDateStamp;
    byte_t   ClassID[16];
    uint32_t SizeOfData;
} PECOFF1_OBJECT_HEADER_DESCRIPTOR;

typedef struct PECOFF1_OBJECT_HEADER_V2_DESCRIPTOR {
    uint16_t Sig1;
    uint16_t Sig2;
    uint16_t Version;
    uint16_t Machine;
    uint32_t TimeDateStamp;
    byte_t   ClassID[16];
    uint32_t SizeOfData;
    uint32_t Flags;
    uint32_t MetaDataSize;
    uint32_t MetaDataOffset;
} PECOFF1_OBJECT_HEADER_V2_DESCRIPTOR;

/* IEcoPECOFF1ObjectFileMember IID = {F7429B05-FF27-45D3-B9FE-8BAAB0860844} */
#ifndef __IID_IEcoPECOFF1ObjectFileMember
static const UGUID IID_IEcoPECOFF1ObjectFileMember = { 0x01, 0x10, {0xF7, 0x42, 0x9B, 0x05, 0xFF, 0x27, 0x45, 0xD3, 0xB9, 0xFE, 0x8B, 0xAA, 0xB0, 0x86, 0x08, 0x44} };
#endif /* __IID_IEcoPECOFF1ObjectFileMember */

typedef struct IEcoPECOFF1ObjectFileMember* IEcoPECOFF1ObjectFileMemberPtr_t;

typedef struct IEcoPECOFF1ObjectFileMemberVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoPECOFF1ObjectFileMemberPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoPECOFF1ObjectFileMemberPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoPECOFF1ObjectFileMemberPtr_t me);

    /* IEcoPECOFF1ObjectFileMember */
    void* (ECOCALLMETHOD *get_Descriptor)(/* in */ IEcoPECOFF1ObjectFileMemberPtr_t me);
    void (ECOCALLMETHOD *set_Descriptor)(/* in */ IEcoPECOFF1ObjectFileMemberPtr_t me, /* in */ void* descriptor);
    IEcoPECOFF1ObjectFile* (ECOCALLMETHOD *get_ObjectFile)(/* in */ IEcoPECOFF1ObjectFileMemberPtr_t me);
    void (ECOCALLMETHOD *set_ObjectFile)(/* in */ IEcoPECOFF1ObjectFileMemberPtr_t me, /* in */ IEcoPECOFF1ObjectFile* pIObjectFile);

} IEcoPECOFF1ObjectFileMemberVTbl, *IEcoPECOFF1ObjectFileMemberVTblPtr;

interface IEcoPECOFF1ObjectFileMember {
    struct IEcoPECOFF1ObjectFileMemberVTbl *pVTbl;
} IEcoPECOFF1ObjectFileMember;

#endif /* __I_ECO_PE_COFF_1_OBJECT_FILE_MEMBER_H__ */
