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
static const UGUID IID_IEcoPECOFF1FirstLinkerMember = { 0x01, 0x10, {0x64, 0x3D, 0x78, 0xE1, 0x7D, 0x40, 0x46, 0x2C, 0xAD, 0x1C, 0xC9, 0x5E, 0x23, 0x4C, 0x0F, 0x76} };
#endif /* __IID_IEcoPECOFF1FirstLinkerMember */

typedef struct IEcoPECOFF1FirstLinkerMember* IEcoPECOFF1FirstLinkerMemberPtr_t;

typedef struct IEcoPECOFF1FirstLinkerMemberVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoPECOFF1FirstLinkerMemberPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoPECOFF1FirstLinkerMemberPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoPECOFF1FirstLinkerMemberPtr_t me);

    /* IEcoPECOFF1FirstLinkerMember */
    uint32_t (ECOCALLMETHOD *get_NumberOfSymbols)(/* in */ IEcoPECOFF1FirstLinkerMemberPtr_t me);
    void (ECOCALLMETHOD *set_NumberOfSymbols)(/* in */ IEcoPECOFF1FirstLinkerMemberPtr_t me, /* in */ uint32_t number);
    IEcoList1* (ECOCALLMETHOD *get_Offsets)(/* in */ IEcoPECOFF1FirstLinkerMemberPtr_t me);
    void (ECOCALLMETHOD *set_Offsets)(/* in */ IEcoPECOFF1FirstLinkerMemberPtr_t me, /* in */ IEcoList1* offsets);
    IEcoList1* (ECOCALLMETHOD *get_StringTable)(/* in */ IEcoPECOFF1FirstLinkerMemberPtr_t me);
    void (ECOCALLMETHOD *set_StringTable)(/* in */ IEcoPECOFF1FirstLinkerMemberPtr_t me, /* in */ IEcoList1* entries);

} IEcoPECOFF1FirstLinkerMemberVTbl, *IEcoPECOFF1FirstLinkerMemberVTblPtr;

interface IEcoPECOFF1FirstLinkerMember {
    struct IEcoPECOFF1FirstLinkerMemberVTbl *pVTbl;
} IEcoPECOFF1FirstLinkerMember;

#endif /* __I_ECO_PE_COFF_1_FIRST_LINKER_MEMBER_H__ */
