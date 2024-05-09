/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoCOFF1ArchiveMemberHeader
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoCOFF1ArchiveMemberHeader
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

#ifndef __I_ECO_COFF_1_ARCHIVE_MEMBER_HEADER_H__
#define __I_ECO_COFF_1_ARCHIVE_MEMBER_HEADER_H__

#include "IEcoBase1.h"
#include "IEcoCOFF1.h"
#include "IEcoList1.h"


typedef struct COFF1_ARCHIVE_MEMBER_HEADER_DESCRIPTOR {
    char_t Name[16];
    char_t Date[12];
    char_t UserID[6];
    char_t GroupID[6];
    char_t Mode[8];
    char_t Size[10];
    char_t EndOfHeader[2]; 
} COFF1_ARCHIVE_MEMBER_HEADER_DESCRIPTOR;

/* IEcoCOFF1ArchiveMemberHeader IID = {DF8F3D0F-5474-4EF4-863E-8F8CF4C92711} */
#ifndef __IID_IEcoCOFF1ArchiveMemberHeader
static const UGUID IID_IEcoCOFF1ArchiveMemberHeader = { 0x01, 0x10, {0xDF, 0x8F, 0x3D, 0x0F, 0x54, 0x74, 0x4E, 0xF4, 0x86, 0x3E, 0x8F, 0x8C, 0xF4, 0xC9, 0x27, 0x11} };
#endif /* __IID_IEcoCOFF1ArchiveMemberHeader */

typedef struct IEcoCOFF1ArchiveMemberHeader* IEcoCOFF1ArchiveMemberHeaderPtr_t;

typedef struct IEcoCOFF1ArchiveMemberHeaderVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoCOFF1ArchiveMemberHeaderPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoCOFF1ArchiveMemberHeaderPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoCOFF1ArchiveMemberHeaderPtr_t me);

    /* IEcoCOFF1ArchiveMemberHeader */
    COFF1_ARCHIVE_MEMBER_HEADER_DESCRIPTOR* (ECOCALLMETHOD *get_Descriptor)(/* in */ IEcoCOFF1ArchiveMemberHeaderPtr_t me);
    void (ECOCALLMETHOD *set_Descriptor)(/* in */ IEcoCOFF1ArchiveMemberHeaderPtr_t me, /* in */ COFF1_ARCHIVE_MEMBER_HEADER_DESCRIPTOR* descriptor);
    IEcoUnknown* (ECOCALLMETHOD *get_Content)(/* in */ IEcoCOFF1ArchiveMemberHeaderPtr_t me);
    void (ECOCALLMETHOD *set_Content)(/* in */ IEcoCOFF1ArchiveMemberHeaderPtr_t me, /* in */ IEcoUnknown* pIContent);
    uint32_t (ECOCALLMETHOD *get_Size)(/* in */ IEcoCOFF1ArchiveMemberHeaderPtr_t me);
    void (ECOCALLMETHOD *set_Size)(/* in */ IEcoCOFF1ArchiveMemberHeaderPtr_t me, /* in */ uint32_t size);
    uint32_t (ECOCALLMETHOD *get_HeaderOffset)(/* in */ IEcoCOFF1ArchiveMemberHeaderPtr_t me);
    void (ECOCALLMETHOD *set_HeaderOffset)(/* in */ IEcoCOFF1ArchiveMemberHeaderPtr_t me, /* in */ uint32_t offset);

} IEcoCOFF1ArchiveMemberHeaderVTbl, *IEcoCOFF1ArchiveMemberHeaderVTblPtr;

interface IEcoCOFF1ArchiveMemberHeader {
    struct IEcoCOFF1ArchiveMemberHeaderVTbl *pVTbl;
} IEcoCOFF1ArchiveMemberHeader;

#endif /* __I_ECO_COFF_1_ARCHIVE_MEMBER_HEADER_H__ */
