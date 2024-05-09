/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoPECOFF1DebugSymbolInformation
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoPECOFF1DebugSymbolInformation
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

#ifndef __I_ECO_PE_COFF_1_DEBUG_SYMBOL_INFORMATION_H__
#define __I_ECO_PE_COFF_1_DEBUG_SYMBOL_INFORMATION_H__

#include "IEcoBase1.h"
#include "IEcoList1.h"

/* Base Relocation Types */
#define PECOFF1_IMAGE_REL_BASED_ABSOLUTE        0x0
#define PECOFF1_IMAGE_REL_BASED_HIGH            0x1
#define PECOFF1_IMAGE_REL_BASED_LOW             0x2
#define PECOFF1_IMAGE_REL_BASED_HIGHLOW         0x3
#define PECOFF1_IMAGE_REL_BASED_HIGHADJ         0x4
#define PECOFF1_IMAGE_REL_BASED_MIPS_JMPADDR    0x5
#define PECOFF1_IMAGE_REL_BASED_ARM_MOV32       0x5
#define PECOFF1_IMAGE_REL_BASED_RISCV_HIGH20    0x5
#define PECOFF1_IMAGE_REL_BASED_THUMB_MOV32     0x7
#define PECOFF1_IMAGE_REL_BASED_RISCV_LOW12I    0x7
#define PECOFF1_IMAGE_REL_BASED_RISCV_LOW12S    0x8
#define PECOFF1_IMAGE_REL_BASED_MIPS_JMPADDR16  0x9
#define PECOFF1_IMAGE_REL_BASED_DIR64           0xA

typedef struct PECOFF1_IMAGE_BLOCK_SIZE_FIELD {
    uint16_t Offset:12;
    uint16_t Type:4;
} PECOFF1_IMAGE_BLOCK_SIZE_FIELD;

/* IEcoPECOFF1DebugSymbolInformation IID = {5528B3FE-D774-4AD0-AFB9-17FB5C58D0CC} */
#ifndef __IID_IEcoPECOFF1DebugSymbolInformation
static const UGUID IID_IEcoPECOFF1DebugSymbolInformation = { 0x01, 0x10, {0x55, 0x28, 0xB3, 0xFE, 0xD7, 0x74, 0x4A, 0xD0, 0xAF, 0xB9, 0x17, 0xFB, 0x5C, 0x58, 0xD0, 0xCC} };
#endif /* __IID_IEcoPECOFF1DebugSymbolInformation */

typedef struct IEcoPECOFF1DebugSymbolInformation* IEcoPECOFF1DebugSymbolInformationPtr_t;

typedef struct IEcoPECOFF1DebugSymbolInformationVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoPECOFF1DebugSymbolInformationPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoPECOFF1DebugSymbolInformationPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoPECOFF1DebugSymbolInformationPtr_t me);

    /* IEcoPECOFF1DebugSymbolInformation */
    uint32_t (ECOCALLMETHOD *get_PageRVA)(/* in */ IEcoPECOFF1DebugSymbolInformationPtr_t me);
    void (ECOCALLMETHOD *set_PageRVA)(/* in */ IEcoPECOFF1DebugSymbolInformationPtr_t me, /* in */ uint32_t page);
    uint32_t (ECOCALLMETHOD *get_BlockSize)(/* in */ IEcoPECOFF1DebugSymbolInformationPtr_t me);
    void (ECOCALLMETHOD *set_BlockSize)(/* in */ IEcoPECOFF1DebugSymbolInformationPtr_t me, /* in */ uint32_t size);
    IEcoList1* (ECOCALLMETHOD *get_FieldEntries)(/* in */ IEcoPECOFF1DebugSymbolInformationPtr_t me);
    void (ECOCALLMETHOD *set_FieldEntries)(/* in */ IEcoPECOFF1DebugSymbolInformationPtr_t me, /* in */ IEcoList1* entries);
} IEcoPECOFF1DebugSymbolInformationVTbl, *IEcoPECOFF1DebugSymbolInformationVTblPtr;

interface IEcoPECOFF1DebugSymbolInformation {
    struct IEcoPECOFF1DebugSymbolInformationVTbl *pVTbl;
} IEcoPECOFF1DebugSymbolInformation;

#endif /* __I_ECO_PE_COFF_1_DEBUG_SYMBOL_INFORMATION_H__ */
