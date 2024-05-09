/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainInstructionSet1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainInstructionSet1
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

#ifndef __I_ECO_TOOLCHAIN_INSTRUCTION_SET_1_H__
#define __I_ECO_TOOLCHAIN_INSTRUCTION_SET_1_H__

#include "IEcoBase1.h"
#include "IEcoList1.h"
#include "IEcoToolchainInstruction1.h"

/* IEcoToolchainInstructionSet1 IID = {BB5480A4-33CB-429D-AE6B-542B52A9AB9B} */
#ifndef __IID_IEcoToolchainInstructionSet1
static const UGUID IID_IEcoToolchainInstructionSet1 = {0x01, 0x10, {0xBB, 0x54, 0x80, 0xA4, 0x33, 0xCB, 0x42, 0x9D, 0xAE, 0x6B, 0x54, 0x2B, 0x52, 0xA9, 0xAB, 0x9B} };
#endif /* __IID_IEcoToolchainInstructionSet1 */

typedef struct IEcoToolchainInstructionSet1* IEcoToolchainInstructionSet1Ptr_t;

typedef struct IEcoToolchainInstructionSet1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainInstructionSet1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainInstructionSet1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainInstructionSet1Ptr_t me);

    /* IEcoToolchainInstructionSet1 */
    int16_t (ECOCALLMETHOD *AddInstruction)(/* in */ IEcoToolchainInstructionSet1Ptr_t me,
                              /* in */ char_t* Mnemonic,
                              /* in */ uint8_t ExtOpCode,
                              /* in */ uint8_t OpCode,
                              /* in */ char_t* DstOperand,
                              /* in */ char_t* SrcOperand);
    int16_t (ECOCALLMETHOD *get_InstructionByMnemonic)(/* in */ IEcoToolchainInstructionSet1Ptr_t me,
                              /* in */ char_t* Mnemonic,
                              /* in */ uint8_t ExtOpCode,
                              /* in */ uint8_t OpCode,
                              /* in */ char_t* DstOperand,
                              /* in */ char_t* SrcOperand);
    int16_t (ECOCALLMETHOD *get_InstructionByOpCode)(/* in */ IEcoToolchainInstructionSet1Ptr_t me,
                              /* in */ uint8_t ExtOpCode,
                              /* in */ uint8_t OpCode,
                              /* in */ char_t* DstOperand,
                              /* in */ char_t* SrcOperand);
    uint32_t (ECOCALLMETHOD *get_Count)(/* in */ IEcoToolchainInstructionSet1Ptr_t me);
    char_t* (ECOCALLMETHOD *get_OperandTypeAsString)(/* in */ IEcoToolchainInstructionSet1Ptr_t me, /* in */ uint8_t operandType);
    char_t* (ECOCALLMETHOD *get_RegisterTypeAsMnemonic)(/* in */ IEcoToolchainInstructionSet1Ptr_t me, /* in */ uint8_t registerType, /* in */ bool_t isLowerCase);
    uint8_t (ECOCALLMETHOD *get_RegisterMnemonicAsType)(/* in */ IEcoToolchainInstructionSet1Ptr_t me, /* in */ char_t* registerMnemonic);
    char_t* (ECOCALLMETHOD *get_MemoryTypeAsMnemonic)(/* in */ IEcoToolchainInstructionSet1Ptr_t me, /* in */ uint8_t memoryType, /* in */ void* disp, /* in */ uint8_t dispSize, /* in */ bool_t isLowerCase);
    uint8_t (ECOCALLMETHOD *get_MemoryMnemonicAsType)(/* in */ IEcoToolchainInstructionSet1Ptr_t me, /* in */ void* arg1, /* in */ uint8_t arg1Size, /* in */ void* arg2, /* in */ uint8_t arg2Size, /* in */ void* arg3, /* in */ uint8_t arg3Size);

    IEcoToolchainInstruction1* (ECOCALLMETHOD *get_InstructionByIndex)(/* in */ IEcoToolchainInstructionSet1Ptr_t me, /* in */ uint32_t index);
    uint16_t (ECOCALLMETHOD *Encode)(/* in */ IEcoToolchainInstructionSet1Ptr_t me,
                       /* in */ char_t* OpCodeMnemonic,
                       /* in */ uint8_t DstOperandType,
                       /* in */ void* DstOperandValue,
                       /* in */ uint8_t DstOperandSize,
                       /* in */ uint8_t SrcOperandType,
                       /* in */ void* SrcOperandValue,
                       /* in */ uint8_t SrcOperandSize,
                       /* in */ void* Disp,
                       /* in */ uint8_t DispSize,
                       /* in | out */ uint8_t* machineCode,
                       /* in | out */ uint8_t* sizeCode);
    uint16_t (ECOCALLMETHOD *Decode)(/* in */ struct IEcoToolchainInstruction1* me,
                       /* in */ int8_t* machineCode,
                       /* in */ int8_t* sizeCode,
                       /* out */ IEcoToolchainInstruction1* pIInstruction);

} IEcoToolchainInstructionSet1VTbl, *IEcoToolchainInstructionSet1VTblPtr;

interface IEcoToolchainInstructionSet1 {
    struct IEcoToolchainInstructionSet1VTbl *pVTbl;
} IEcoToolchainInstructionSet1;


#endif /* __I_ECO_TOOLCHAIN_INSTRUCTION_SET_1_H__ */
