/*
 * <кодировка символов>
 *   Cyrillic (Windows) - Codepage 1251
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainLinker1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainLinker1
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

#ifndef __I_ECO_TOOLCHAIN_LINKER_1_H__
#define __I_ECO_TOOLCHAIN_LINKER_1_H__

#include "IEcoBase1.h"
#include "IEcoList1.h"

/* Format Types */
#define ECO_L_1_FT_NONE         0x00000000      /* none */
#define ECO_L_1_FT_PECOFF       0x01000001      /* Microsoft - PECOFF (32 bit) */
#define ECO_L_1_FT_PECOFF32     0x01000001      /* Microsoft - PECOFF (32 bit) */
#define ECO_L_1_FT_ELF          0x02000001      /* TIS - ELF (32 bit) */
#define ECO_L_1_FT_ELF32        0x02000001      /* TIS - ELF (32 bit) */

/* IEcoToolchainLinker1 IID = {4439BF26-AB04-4A99-B3C5-808C66EF63AD} */
#ifndef __IID_IEcoToolchainLinker1
static const UGUID IID_IEcoToolchainLinker1 = {0x01, 0x10, {0x44, 0x39, 0xBF, 0x26, 0xAB, 0x04, 0x4A, 0x99, 0xB3, 0xC5, 0x80, 0x8C, 0x66, 0xEF, 0x63, 0xAD} };
#endif /* __IID_IEcoToolchainLinker1 */

typedef struct IEcoToolchainLinker1* IEcoToolchainLinker1Ptr_t;

typedef struct IEcoToolchainLinker1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainLinker1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainLinker1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainLinker1Ptr_t me);

    /* IEcoToolchainLinker1 */
    int16_t (ECOCALLMETHOD *RegisterFileFormat)(/* in */ IEcoToolchainLinker1Ptr_t me, /*in*/ const UGUID* rcid, /*in*/ uint32_t formatType);
    int16_t (ECOCALLMETHOD *LinkToFile)(/* in */ IEcoToolchainLinker1Ptr_t me, /* in */ uint32_t inFormatType, /*in*/ void* formatArgs, /* in */ IEcoList1* objFileList, /* in */ IEcoList1* libFileList, /* in */ uint32_t outFormatType, /* in */ char_t* outputFileName);

} IEcoToolchainLinker1VTbl, *IEcoToolchainLinker1VTblPtr;

interface IEcoToolchainLinker1 {
    struct IEcoToolchainLinker1VTbl *pVTbl;
} IEcoToolchainLinker1;

#endif /* __I_ECO_TOOLCHAIN_LINKER_1_H__ */
