/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoPECOFF1BaseRelocationBlock
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoPECOFF1BaseRelocationBlock
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

#ifndef __I_ECO_PE_COFF_1_BASE_RELOCATION_BLOCK_H__
#define __I_ECO_PE_COFF_1_BASE_RELOCATION_BLOCK_H__

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

/* IEcoPECOFF1BaseRelocationBlock IID = {BEF7BDC9-C2FA-417B-A63D-DA418C8F00C9} */
#ifndef __IID_IEcoPECOFF1BaseRelocationBlock
static const UGUID IID_IEcoPECOFF1BaseRelocationBlock = { 0x01, 0x10, {0xBE, 0xF7, 0xBD, 0xC9, 0xC2, 0xFA, 0x41, 0x7B, 0xA6, 0x3D, 0xDA, 0x41, 0x8C, 0x8F, 0x00, 0xC9} };
#endif /* __IID_IEcoPECOFF1BaseRelocationBlock */

typedef struct IEcoPECOFF1BaseRelocationBlock* IEcoPECOFF1BaseRelocationBlockPtr_t;

typedef struct IEcoPECOFF1BaseRelocationBlockVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoPECOFF1BaseRelocationBlockPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoPECOFF1BaseRelocationBlockPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoPECOFF1BaseRelocationBlockPtr_t me);

    /* IEcoPECOFF1BaseRelocationBlock */
    uint32_t (ECOCALLMETHOD *get_PageRVA)(/* in */ IEcoPECOFF1BaseRelocationBlockPtr_t me);
    void (ECOCALLMETHOD *set_PageRVA)(/* in */ IEcoPECOFF1BaseRelocationBlockPtr_t me, /* in */ uint32_t page);
    uint32_t (ECOCALLMETHOD *get_BlockSize)(/* in */ IEcoPECOFF1BaseRelocationBlockPtr_t me);
    void (ECOCALLMETHOD *set_BlockSize)(/* in */ IEcoPECOFF1BaseRelocationBlockPtr_t me, /* in */ uint32_t size);
    IEcoList1* (ECOCALLMETHOD *get_FieldEntries)(/* in */ IEcoPECOFF1BaseRelocationBlockPtr_t me);
    void (ECOCALLMETHOD *set_FieldEntries)(/* in */ IEcoPECOFF1BaseRelocationBlockPtr_t me, /* in */ IEcoList1* entries);
} IEcoPECOFF1BaseRelocationBlockVTbl, *IEcoPECOFF1BaseRelocationBlockVTblPtr;

interface IEcoPECOFF1BaseRelocationBlock {
    struct IEcoPECOFF1BaseRelocationBlockVTbl *pVTbl;
} IEcoPECOFF1BaseRelocationBlock;

#endif /* __I_ECO_PE_COFF_1_BASE_RELOCATION_BLOCK_H__ */
