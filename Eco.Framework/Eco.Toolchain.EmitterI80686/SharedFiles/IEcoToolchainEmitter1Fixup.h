/*
 * <кодировка символов>
 *   Cyrillic (Windows) - Codepage 1251
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainEmitter1Fixup
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainEmitter1Fixup
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

#ifndef __I_ECO_TOOLCHAIN_FIXUP_1_H__
#define __I_ECO_TOOLCHAIN_FIXUP_1_H__

#include "IEcoBase1.h"
#include "IEcoList1.h"
#include "IEcoToolchainAST1.h"
#include "IEcoToolchainInstructionSet1.h"

/* Fixup Type */
#define ECO_FIXUP_TYPE_ABS          0x01      /*  */
#define ECO_FIXUP_TYPE_REF          0x02      /*  */

/* Fixup size */
#define ECO_FIXUP_SIZE_SBYTE        0x07      /*  */
#define ECO_FIXUP_SIZE_BYTE         0x08      /*  */
#define ECO_FIXUP_SIZE_SWORD        0x0F      /*  */
#define ECO_FIXUP_SIZE_WORD         0x10      /*  */
#define ECO_FIXUP_SIZE_SDWORD       0x1F      /*  */
#define ECO_FIXUP_SIZE_DWORD        0x20      /*  */
#define ECO_FIXUP_SIZE_SQWORD       0x3F      /*  */
#define ECO_FIXUP_SIZE_QWORD        0x40      /*  */

/* IEcoToolchainEmitter1Fixup IID = {2DE0ED39-6F7B-4F00-91F9-523D102BAD50} */
#ifndef __IID_IEcoToolchainEmitter1Fixup
static const UGUID IID_IEcoToolchainEmitter1Fixup = {0x01, 0x10, {0x2D, 0xE0, 0xED, 0x39, 0x6F, 0x7B, 0x4F, 0x00, 0x91, 0xF9, 0x52, 0x3D, 0x10, 0x2B, 0xAD, 0x50} };
#endif /* __IID_IEcoToolchainEmitter1Fixup */

typedef struct IEcoToolchainEmitter1Fixup* IEcoToolchainEmitter1FixupPtr_t;

typedef struct IEcoToolchainEmitter1FixupVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainEmitter1FixupPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainEmitter1FixupPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainEmitter1FixupPtr_t me);

    /* IEcoToolchainEmitter1Fixup */
    uint8_t (ECOCALLMETHOD *get_Type)(/* in */ IEcoToolchainEmitter1FixupPtr_t me);
    void (ECOCALLMETHOD *set_Type)(/* in */ IEcoToolchainEmitter1FixupPtr_t me, /* in */ uint8_t type);
    char_t* (ECOCALLMETHOD *get_Name)(/* in */ IEcoToolchainEmitter1FixupPtr_t me);
    void (ECOCALLMETHOD *set_Name)(/* in */ IEcoToolchainEmitter1FixupPtr_t me, /* in */ char_t* name);
    uint8_t (ECOCALLMETHOD *get_SizeBase)(/* in */ IEcoToolchainEmitter1FixupPtr_t me);
    void* (ECOCALLMETHOD *get_Base)(/* in */ IEcoToolchainEmitter1FixupPtr_t me);
    void (ECOCALLMETHOD *set_Base)(/* in */ IEcoToolchainEmitter1FixupPtr_t me, /* in */ void* base, /* in */ uint8_t size);
    uint8_t (ECOCALLMETHOD *get_SizeOffset)(/* in */ IEcoToolchainEmitter1FixupPtr_t me);
    void* (ECOCALLMETHOD *get_Offset)(/* in */ IEcoToolchainEmitter1FixupPtr_t me);
    void (ECOCALLMETHOD *set_Offset)(/* in */ IEcoToolchainEmitter1FixupPtr_t me, /* in */ void* offset, /* in */ uint8_t size);

} IEcoToolchainEmitter1FixupVTbl, *IEcoToolchainEmitter1FixupVTblPtr;

interface IEcoToolchainEmitter1Fixup {
    struct IEcoToolchainEmitter1FixupVTbl *pVTbl;
} IEcoToolchainEmitter1Fixup;

#endif /* __I_ECO_TOOLCHAIN_FIXUP_1_H__ */
