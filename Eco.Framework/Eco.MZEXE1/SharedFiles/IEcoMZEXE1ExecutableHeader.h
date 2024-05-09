/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoMZEXE1ExecutableHeader
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoMZEXE1ExecutableHeader
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

#ifndef __I_ECO_MZ_EXE_1_EXECUTABLE_HEADER_H__
#define __I_ECO_MZ_EXE_1_EXECUTABLE_HEADER_H__

#include "IEcoBase1.h"

typedef struct MZEXE1_EXECUTABLE_HEADER_DESCRIPTOR {
    uint16_t Magic;
    uint16_t BytesInLastPage;
    uint16_t PagesInFile;
    uint16_t NumberRelocations;
    uint16_t SizeHeaderInParagraphs;
    uint16_t MinExtraParagraphs;
    uint16_t MaxExtraParagraphs;
    uint16_t InitialSS;
    uint16_t InitialSP;
    uint16_t Checksum;
    uint16_t InitialIP;
    uint16_t InitialCS;
    uint16_t FileAddressRelocationTable;
    uint16_t OverlayNumber;

} MZEXE1_EXECUTABLE_HEADER_DESCRIPTOR;

/* IEcoMZEXE1ExecutableHeader IID = {897CD9DF-8355-4842-A42C-A1D81BFF8C85} */
#ifndef __IID_IEcoMZEXE1ExecutableHeader
static const UGUID IID_IEcoMZEXE1ExecutableHeader = { 0x01, 0x10, {0x89, 0x7C, 0xD9, 0xDF, 0x83, 0x55, 0x48, 0x42, 0xA4, 0x2C, 0xA1, 0xD8, 0x1B, 0xFF, 0x8C, 0x85} };
#endif /* __IID_IEcoMZEXE1ExecutableHeader */

typedef struct IEcoMZEXE1ExecutableHeader* IEcoMZEXE1ExecutableHeaderPtr_t;

typedef struct IEcoMZEXE1ExecutableHeaderVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoMZEXE1ExecutableHeaderPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoMZEXE1ExecutableHeaderPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoMZEXE1ExecutableHeaderPtr_t me);

    /* IEcoMZEXE1ExecutableHeader */
    MZEXE1_EXECUTABLE_HEADER_DESCRIPTOR* (ECOCALLMETHOD *get_Descriptor)(/* in */ IEcoMZEXE1ExecutableHeaderPtr_t me);
    void (ECOCALLMETHOD *set_Descriptor)(/* in */ IEcoMZEXE1ExecutableHeaderPtr_t me, /* in */ MZEXE1_EXECUTABLE_HEADER_DESCRIPTOR* descriptor);

} IEcoMZEXE1ExecutableHeaderVTbl, *IEcoMZEXE1ExecutableHeaderVTblPtr;

interface IEcoMZEXE1ExecutableHeader {
    struct IEcoMZEXE1ExecutableHeaderVTbl *pVTbl;
} IEcoMZEXE1ExecutableHeader;

#endif /* __I_ECO_MZ_EXE_1_EXECUTABLE_HEADER_H__ */
