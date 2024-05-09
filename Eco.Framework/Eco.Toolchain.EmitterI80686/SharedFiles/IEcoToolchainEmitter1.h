/*
 * <кодировка символов>
 *   Cyrillic (Windows) - Codepage 1251
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainEmitter1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainEmitter1
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

#ifndef __I_ECO_TOOLCHAIN_EMITTER_1_H__
#define __I_ECO_TOOLCHAIN_EMITTER_1_H__

#include "IEcoBase1.h"
#include "IEcoList1.h"
#include "IEcoToolchainAST1.h"
#include "IEcoToolchainInstructionSet1.h"
#include "IEcoToolchainEmitter1Fixup.h"
#include "IEcoToolchainSymbolTable1.h"

/* IEcoToolchainEmitter1 IID = {CA72AAF2-D705-474A-BB0B-93A4851C5518} */
#ifndef __IID_IEcoToolchainEmitter1
static const UGUID IID_IEcoToolchainEmitter1 = {0x01, 0x10, {0xCA, 0x72, 0xAA, 0xF2, 0xD7, 0x05, 0x47, 0x4A, 0xBB, 0x0B, 0x93, 0xA4, 0x85, 0x1C, 0x55, 0x18} };
#endif /* __IID_IEcoToolchainEmitter1 */

typedef struct IEcoToolchainEmitter1* IEcoToolchainEmitter1Ptr_t;

typedef struct IEcoToolchainEmitter1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainEmitter1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainEmitter1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainEmitter1Ptr_t me);

    /* IEcoToolchainEmitter1 */
    IEcoToolchainInstructionSet1* (ECOCALLMETHOD *get_InstructionSet)(/* in */ IEcoToolchainEmitter1Ptr_t me);
    int16_t (ECOCALLMETHOD *EmitCode)(/* in */ IEcoToolchainEmitter1Ptr_t me, /* in */ struct IEcoToolchainAST1SyntaxObject* pISyntaxObject);
    uint8_t* (ECOCALLMETHOD *get_Code)(/* in */ IEcoToolchainEmitter1Ptr_t me);
    uint32_t (ECOCALLMETHOD *get_CodeLength)(/* in */ IEcoToolchainEmitter1Ptr_t me);
    uint8_t* (ECOCALLMETHOD *get_Data)(/* in */ IEcoToolchainEmitter1Ptr_t me);
    uint32_t (ECOCALLMETHOD *get_DataLength)(/* in */ IEcoToolchainEmitter1Ptr_t me);
    IEcoList1* (ECOCALLMETHOD *get_Fixups)(/* in */ IEcoToolchainEmitter1Ptr_t me);
    IEcoToolchainSymbolTable1* (ECOCALLMETHOD *get_SymbolTable)(/* in */ IEcoToolchainEmitter1Ptr_t me);
    int16_t (ECOCALLMETHOD *Clear)(/* in */ IEcoToolchainEmitter1Ptr_t me);

} IEcoToolchainEmitter1VTbl, *IEcoToolchainEmitter1VTblPtr;

interface IEcoToolchainEmitter1 {
    struct IEcoToolchainEmitter1VTbl *pVTbl;
} IEcoToolchainEmitter1;

#endif /* __I_ECO_TOOLCHAIN_EMITTER_1_H__ */
