/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainCodeGenerator1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainCodeGenerator1
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

#ifndef __I_ECO_TOOLCHAIN_CODE_GENERATOR_1_H__
#define __I_ECO_TOOLCHAIN_CODE_GENERATOR_1_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1.h"
#include "IEcoToolchainEmitter1.h"

/* Architecture Types */
#define ECO_CG_1_AT_NONE        0x00000000      /* none */
#define ECO_CG_1_AT_I8086       0x01000001      /* Intel - 8086 */
#define ECO_CG_1_AT_I80186      0x01000002      /* Intel - 80186 */
#define ECO_CG_1_AT_I80286      0x01000003      /* Intel - 80286 */
#define ECO_CG_1_AT_I80386      0x01000004      /* Intel - 80386 */
#define ECO_CG_1_AT_I80486      0x01000005      /* Intel - 80486 */
#define ECO_CG_1_AT_I80586      0x01000006      /* Intel - 80586 */
#define ECO_CG_1_AT_I80686      0x01000007      /* Intel - 80686 */

/* Format Types */
#define ECO_CG_1_FT_NONE        0x00000000      /* none */
#define ECO_CG_1_FT_PECOFF      0x01000001      /* Microsoft - PECOFF (32 bit) */
#define ECO_CG_1_FT_PECOFF32    0x01000001      /* Microsoft - PECOFF (32 bit) */
#define ECO_CG_1_FT_ELF         0x02000001      /* TIS - ELF (32 bit) */
#define ECO_CG_1_FT_ELF32       0x02000001      /* TIS - ELF (32 bit) */


/* IEcoToolchainCodeGenerator1 IID = {6B28A32B-529A-41E6-804D-97DB299E6EC0} */
#ifndef __IID_IEcoToolchainCodeGenerator1
static const UGUID IID_IEcoToolchainCodeGenerator1 = {0x01, 0x10, {0x6B, 0x28, 0xA3, 0x2B, 0x52, 0x9A, 0x41, 0xE6, 0x80, 0x4D, 0x97, 0xDB, 0x29, 0x9E, 0x6E, 0xC0} };
#endif /* __IID_IEcoToolchainCodeGenerator1 */

typedef struct IEcoToolchainCodeGenerator1* IEcoToolchainCodeGenerator1Ptr_t;

typedef struct IEcoToolchainCodeGenerator1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainCodeGenerator1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainCodeGenerator1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainCodeGenerator1Ptr_t me);

    /* IEcoToolchainCodeGenerator1 */
    int16_t (ECOCALLMETHOD *RegisterEmitter)(/* in */ IEcoToolchainCodeGenerator1Ptr_t me, /*in*/ const UGUID* rcid, /*in*/ uint32_t archType);
    int16_t (ECOCALLMETHOD *RegisterFileFormat)(/* in */ IEcoToolchainCodeGenerator1Ptr_t me, /*in*/ const UGUID* rcid, /*in*/ uint32_t formatType);
    int16_t (ECOCALLMETHOD *Generate)(/* in */ IEcoToolchainCodeGenerator1Ptr_t me, /* in */ struct IEcoToolchainAST1* pIAST, /*in*/ uint32_t archType, /*in*/ void* emitterArgs, /* out */ IEcoToolchainEmitter1** ppIEmitter);
    int16_t (ECOCALLMETHOD *WriteObjectFile)(/* in */ IEcoToolchainCodeGenerator1Ptr_t me, /* in */ struct IEcoToolchainEmitter1* pIEmitter, /* in */ uint32_t formatType, /*in*/ void* formatArgs, /* in */ char_t* outputFileName);

} IEcoToolchainCodeGenerator1VTbl, *IEcoToolchainCodeGenerator1VTblPtr;

interface IEcoToolchainCodeGenerator1 {
    struct IEcoToolchainCodeGenerator1VTbl *pVTbl;
} IEcoToolchainCodeGenerator1;

#endif /* __I_ECO_TOOLCHAIN_CODE_GENERATOR_1_H__ */
