/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoCOFF1SectionHeader
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoCOFF1SectionHeader
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

#ifndef __I_ECO_COFF_1_SECTION_HEADER_H__
#define __I_ECO_COFF_1_SECTION_HEADER_H__

#include "IEcoBase1.h"
#include "IEcoList1.h"

/* Section Header Constants for Section Names */
#define COFF1_TEXT          ".text"
#define COFF1_INIT          ".init"
#define COFF1_FINI          ".fini"
#define COFF1_RCONST        ".rconst"
#define COFF1_RDATA         ".rdata"
#define COFF1_DATA          ".data"
#define COFF1_LITA          ".lita"
#define COFF1_LIT8          ".lit8"
#define COFF1_LIT4          ".lit4"
#define COFF1_SDATA         ".sdata"
#define COFF1_BSS           ".bss"
#define COFF1_SBSS          ".sbss"
#define COFF1_UCODE         ".ucode"
#define COFF1_GOT           ".got"
#define COFF1_DYNAMIC       ".dynamic"
#define COFF1_DYNSYM        ".dynsym"
#define COFF1_REL_DYN       ".rel.dyn"
#define COFF1_DYNSTR        ".dynstr"
#define COFF1_HASH          ".hash"
#define COFF1_MSYM          ".msym"
#define COFF1_CONFLICT      ".conflict"
#define COFF1_REGINFO       ".reginfo"
#define COFF1_XDATA         ".xdata"
#define COFF1_PDATA         ".pdata"

typedef struct COFF1_SECTION_HEADER_DESCRIPTOR {
    char_t SectionName[8];
    uint32_t PhysicalAddress;
    uint32_t VirtualAddress;
    uint32_t SectionSize;
    uint32_t PointerToRawData;
    uint32_t PointerToRelocations;
    uint32_t PointerToLinenumbers;
    uint16_t NumberOfRelocations;
    uint16_t NumberOfLinenumbers;
    uint32_t Flags;

} COFF1_SECTION_HEADER_DESCRIPTOR;

/* IEcoCOFF1SectionHeader IID = {8F79E9B9-5B8E-4B98-A5CF-700EB4D4B4D1} */
#ifndef __IID_IEcoCOFF1SectionHeader
static const UGUID IID_IEcoCOFF1SectionHeader = { 0x01, 0x10, {0x8F, 0x79, 0xE9, 0xB9, 0x5B, 0x8E, 0x4B, 0x98, 0xA5, 0xCF, 0x70, 0x0E, 0xB4, 0xD4, 0xB4, 0xD1} };
#endif /* __IID_IEcoCOFF1SectionHeader */

typedef struct IEcoCOFF1SectionHeader* IEcoCOFF1SectionHeaderPtr_t;

typedef struct IEcoCOFF1SectionHeaderVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoCOFF1SectionHeaderPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoCOFF1SectionHeaderPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoCOFF1SectionHeaderPtr_t me);

    /* IEcoCOFF1SectionHeader */
    COFF1_SECTION_HEADER_DESCRIPTOR* (ECOCALLMETHOD *get_Descriptor)(/* in */ IEcoCOFF1SectionHeaderPtr_t me);
    void (ECOCALLMETHOD *set_Descriptor)(/* in */ IEcoCOFF1SectionHeaderPtr_t me, /* in */ COFF1_SECTION_HEADER_DESCRIPTOR* descriptor);
    IEcoUnknown* (ECOCALLMETHOD *get_RawData)(/* in */ IEcoCOFF1SectionHeaderPtr_t me);
    void (ECOCALLMETHOD *set_RawData)(/* in */ IEcoCOFF1SectionHeaderPtr_t me, /* in */ IEcoUnknown* pIRawData);
    IEcoList1* (ECOCALLMETHOD *get_Relocations)(/* in */ IEcoCOFF1SectionHeaderPtr_t me);
    void (ECOCALLMETHOD *set_Relocations)(/* in */ IEcoCOFF1SectionHeaderPtr_t me, /* in */ IEcoList1* pIRelocations);

} IEcoCOFF1SectionHeaderVTbl, *IEcoCOFF1SectionHeaderVTblPtr;

interface IEcoCOFF1SectionHeader {
    struct IEcoCOFF1SectionHeaderVTbl *pVTbl;
} IEcoCOFF1SectionHeader;

#endif /* __I_ECO_COFF_1_SECTION_HEADER_H__ */
