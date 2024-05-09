/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoCOFF1FileHeader
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoCOFF1FileHeader
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

#ifndef __I_ECO_COFF_1_FILE_HEADER_H__
#define __I_ECO_COFF_1_FILE_HEADER_H__

#include "IEcoBase1.h"

/* File Header Magic Numbers */
#define COFF1_ALPHAMAGIC    0x0603
#define COFF1_ALPHAUMAGIC   0x0617

/* File Header Flags */
#define COFF1_F_RELFLG              0x0001
#define COFF1_F_EXEC                0x0002
#define COFF1_F_LNNO                0x0004
#define COFF1_F_LSYMS               0x0008
#define COFF1_F_NO_SHARED           0x0010
#define COFF1_F_NO_CALL_SHARED      0x0020
#define COFF1_F_LOMAP               0x0040
#define COFF1_F_AR16WR              0x0080
#define COFF1_F_AR32WR              0x0100
#define COFF1_F_AR32W               0x0200
#define COFF1_F_PATCH               0x0400
#define COFF1_F_NODF                0x0400
#define COFF1_F_MIPS_NO_SHARED      0x1000
#define COFF1_F_MIPS_SHARABLE       0x2000
#define COFF1_F_MIPS_CALL_SHARED    0x3000
#define COFF1_F_MIPS_NO_REORG       0x4000
#define COFF1_F_MIPS_NO_REMOVE      0x8000

typedef struct COFF1_FILE_HEADER_DESCRIPTOR {
    uint16_t Magic;
    uint16_t NumberOfSections;
    uint32_t TimeDateStamp;
    uint32_t PointerToSymbolTable;
    uint32_t NumberOfSymbols;
    uint16_t OptionalHeaderSize;
    uint16_t Flags;
} COFF1_FILE_HEADER_DESCRIPTOR;

/* IEcoCOFF1FileHeader IID = {E2C4CB3D-ACCD-4431-A0EA-F64AF769493E} */
#ifndef __IID_IEcoCOFF1FileHeader
static const UGUID IID_IEcoCOFF1FileHeader = { 0x01, 0x10, {0xE2, 0xC4, 0xCB, 0x3D, 0xAC, 0xCD, 0x44, 0x31, 0xA0, 0xEA, 0xF6, 0x4A, 0xF7, 0x69, 0x49, 0x3E} };
#endif /* __IID_IEcoCOFF1FileHeader */

typedef struct IEcoCOFF1FileHeader* IEcoCOFF1FileHeaderPtr_t;

typedef struct IEcoCOFF1FileHeaderVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoCOFF1FileHeaderPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoCOFF1FileHeaderPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoCOFF1FileHeaderPtr_t me);

    /* IEcoCOFF1FileHeader */
    COFF1_FILE_HEADER_DESCRIPTOR* (ECOCALLMETHOD *get_Descriptor)(/* in */ IEcoCOFF1FileHeaderPtr_t me);
    void (ECOCALLMETHOD *set_Descriptor)(/* in */ IEcoCOFF1FileHeaderPtr_t me, /* in */ COFF1_FILE_HEADER_DESCRIPTOR* descriptor);
    IEcoUnknown* (ECOCALLMETHOD *get_SymbolTable)(/* in */ IEcoCOFF1FileHeaderPtr_t me);
    void (ECOCALLMETHOD *set_SymbolTable)(/* in */ IEcoCOFF1FileHeaderPtr_t me, /* in */ IEcoUnknown* pISymbolTable);
} IEcoCOFF1FileHeaderVTbl, *IEcoCOFF1FileHeaderVTblPtr;

interface IEcoCOFF1FileHeader {
    struct IEcoCOFF1FileHeaderVTbl *pVTbl;
} IEcoCOFF1FileHeader;

#endif /* __I_ECO_COFF_1_FILE_HEADER_H__ */
