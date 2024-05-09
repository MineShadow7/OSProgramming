/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoPECOFF1FirstLinkerMember
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoPECOFF1FirstLinkerMember
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

#ifndef __I_ECO_PE_COFF_1_FIRST_LINKER_MEMBER_H__
#define __I_ECO_PE_COFF_1_FIRST_LINKER_MEMBER_H__

#include "IEcoBase1.h"
#include "IEcoList1.h"



typedef struct PECOFF1_FIRST_LINKER_MEMBER_OFFSET_REPRESENTER {
    uint32_t Offset;
    IEcoUnknown* ArchiveMemberHeader;
} PECOFF1_FIRST_LINKER_MEMBER_OFFSET_REPRESENTER;

/* IEcoPECOFF1FirstLinkerMember IID = {643D78E1-7D40-462C-AD1C-C95E234C0F76} */
#ifndef __IID_IEcoPECOFF1FirstLinkerMember
static const UGUID IID_IEcoPECOFF1FirstLinkerMember = { 0x01, 0x10, 0x64, 0x3D, 0x78, 0xE1, 0x7D, 0x40, 0x46, 0x2C, 0xAD, 0x1C, 0xC9, 0x5E, 0x23, 0x4C, 0x0F, 0x76 };
#endif /* __IID_IEcoPECOFF1FirstLinkerMember */

typedef struct IEcoPECOFF1FirstLinkerMemberVTbl {

    /* IEcoUnknown */
    int16_t (*QueryInterface )(/* in */ struct IEcoPECOFF1FirstLinkerMember* me, /* in */ const UGUID* riid, /* out */ void **ppv);
    uint32_t (*AddRef )(/* in */ struct IEcoPECOFF1FirstLinkerMember* me);
    uint32_t (*Release )(/* in */ struct IEcoPECOFF1FirstLinkerMember* me);

    /* IEcoPECOFF1FirstLinkerMember */
    uint32_t (*get_NumberOfSymbols)(/* in */ struct IEcoPECOFF1FirstLinkerMember* me);
    void (*set_NumberOfSymbols)(/* in */ struct IEcoPECOFF1FirstLinkerMember* me, /* in */ uint32_t number);
    IEcoList1* (*get_Offsets)(/* in */ struct IEcoPECOFF1FirstLinkerMember* me);
    void (*set_Offsets)(/* in */ struct IEcoPECOFF1FirstLinkerMember* me, /* in */ IEcoList1* offsets);
    IEcoList1* (*get_StringTable)(/* in */ struct IEcoPECOFF1FirstLinkerMember* me);
    void (*set_StringTable)(/* in */ struct IEcoPECOFF1FirstLinkerMember* me, /* in */ IEcoList1* entries);

} IEcoPECOFF1FirstLinkerMemberVTbl, *IEcoPECOFF1FirstLinkerMemberVTblPtr;

interface IEcoPECOFF1FirstLinkerMember {
    struct IEcoPECOFF1FirstLinkerMemberVTbl *pVTbl;
} IEcoPECOFF1FirstLinkerMember;

#endif /* __I_ECO_PE_COFF_1_FIRST_LINKER_MEMBER_H__ */
