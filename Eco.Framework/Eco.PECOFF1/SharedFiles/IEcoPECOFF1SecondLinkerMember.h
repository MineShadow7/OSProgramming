/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoPECOFF1SecondLinkerMember
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoPECOFF1SecondLinkerMember
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

#ifndef __I_ECO_PE_COFF_1_SECOND_LINKER_MEMBER_H__
#define __I_ECO_PE_COFF_1_SECOND_LINKER_MEMBER_H__

#include "IEcoBase1.h"
#include "IEcoList1.h"


/* IEcoPECOFF1SecondLinkerMember IID = {48DC167F-24C1-4C26-A3A3-914A9A518334} */
#ifndef __IID_IEcoPECOFF1SecondLinkerMember
static const UGUID IID_IEcoPECOFF1SecondLinkerMember = { 0x01, 0x10, {0x48, 0xDC, 0x16, 0x7F, 0x24, 0xC1, 0x4C, 0x26, 0xA3, 0xA3, 0x91, 0x4A, 0x9A, 0x51, 0x83, 0x34} };
#endif /* __IID_IEcoPECOFF1SecondLinkerMember */

typedef struct IEcoPECOFF1SecondLinkerMember* IEcoPECOFF1SecondLinkerMemberPtr_t;

typedef struct IEcoPECOFF1SecondLinkerMemberVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoPECOFF1SecondLinkerMemberPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoPECOFF1SecondLinkerMemberPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoPECOFF1SecondLinkerMemberPtr_t me);

    /* IEcoPECOFF1SecondLinkerMember */
    uint32_t (ECOCALLMETHOD *get_NumberOfMembers)(/* in */ IEcoPECOFF1SecondLinkerMemberPtr_t me);
    void (ECOCALLMETHOD *set_NumberOfMembers)(/* in */ IEcoPECOFF1SecondLinkerMemberPtr_t me, /* in */ uint32_t number);
    IEcoList1* (ECOCALLMETHOD *get_Offsets)(/* in */ IEcoPECOFF1SecondLinkerMemberPtr_t me);
    void (ECOCALLMETHOD *set_Offsets)(/* in */ IEcoPECOFF1SecondLinkerMemberPtr_t me, /* in */ IEcoList1* offsets);
    uint32_t (ECOCALLMETHOD *get_NumberOfSymbols)(/* in */ IEcoPECOFF1SecondLinkerMemberPtr_t me);
    void (ECOCALLMETHOD *set_NumberOfSymbols)(/* in */ IEcoPECOFF1SecondLinkerMemberPtr_t me, /* in */ uint32_t number);
    IEcoList1* (ECOCALLMETHOD *get_Indices)(/* in */ IEcoPECOFF1SecondLinkerMemberPtr_t me);
    void (ECOCALLMETHOD *set_Indices)(/* in */ IEcoPECOFF1SecondLinkerMemberPtr_t me, /* in */ IEcoList1* indices);
    IEcoList1* (ECOCALLMETHOD *get_StringTable)(/* in */ IEcoPECOFF1SecondLinkerMemberPtr_t me);
    void (ECOCALLMETHOD *set_StringTable)(/* in */ IEcoPECOFF1SecondLinkerMemberPtr_t me, /* in */ IEcoList1* entries);

} IEcoPECOFF1SecondLinkerMemberVTbl, *IEcoPECOFF1SecondLinkerMemberVTblPtr;

interface IEcoPECOFF1SecondLinkerMember {
    struct IEcoPECOFF1SecondLinkerMemberVTbl *pVTbl;
} IEcoPECOFF1SecondLinkerMember;

#endif /* __I_ECO_PE_COFF_1_SECOND_LINKER_MEMBER_H__ */
