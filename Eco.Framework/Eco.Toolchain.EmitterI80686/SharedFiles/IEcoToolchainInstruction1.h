/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainInstruction1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainInstruction1
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

#ifndef __I_ECO_TOOLCHAIN_INSTRUCTION_1_H__
#define __I_ECO_TOOLCHAIN_INSTRUCTION_1_H__

#include "IEcoBase1.h"

#define ECO_I8086_FIELD_MASK_EMPTY  0x00 
#define ECO_I8086_FIELD_MASK_S      0x01
#define ECO_I8086_FIELD_MASK_W      0x02
#define ECO_I8086_FIELD_MASK_D      0x04
#define ECO_I8086_FIELD_MASK_V      0x08
#define ECO_I8086_FIELD_MASK_Z      0x10
#define ECO_I8086_FIELD_MASK_MOD    0x20
#define ECO_I8086_FIELD_MASK_REG    0x40
#define ECO_I8086_FIELD_MASK_RM     0x80

typedef struct ECO_I8086_INSTRUCTION_FORMAT {
    union {
        struct {
            uint8_t W       : 1;    /* WORD/BYTE OPERATION. */
            uint8_t D       : 1;    /* DIRECTION IS TO REGISTER/DIRECTION IS FROM REGISTER. */
            uint8_t OPCODE  : 6;    /* OPERATION (INSTRUCTION) CODE. */
        };
        uint8_t BYTE1;
    };
    struct {
        uint8_t RM      : 3;    /* REGISTER OPERAND/REGISTERS TO USE IN EA CALCULATION. */
        uint8_t REG     : 3;    /* REGISTER OPERAND/EXTENSION OF OPCODE. */
        uint8_t MOD     : 2;    /* REGISTER MODE/MEMORY MODE WITH DISPLACEMENT LENGTH. */
    } BYTE2;
    struct {
        uint8_t LOW_DISP;
    } BYTE3;
    struct {
        uint8_t HIGH_DISP;
    } BYTE4;
    struct {
        uint8_t LOW_DATA;
    } BYTE5;
    struct {
        uint8_t HIGH_DATA;
    } BYTE6;
} ECO_I8086_INSTRUCTION_FORMAT;

enum EcoI8086InstructionOperandType_t {
    ECO_NOT_USED_OPERAND    = 0,
    ECO_OPCODE_OPERAND,
    ECO_SOURCE_OPERAND,
    ECO_SEGREG_OPERAND,
    ECO_SRC_STR8_OPERAND,
    ECO_SRC_STR16_OPERAND,
    ECO_DEST_STR8_OPERAND,
    ECO_DEST_STR16_OPERAND,
    ECO_SOURCE_TABLE_OPERAND,
    ECO_1_OPERAND,
    ECO_3_OPERAND,
    ECO_REG8_OPERAND,
    ECO_REG16_OPERAND,
    ECO_REG32_OPERAND,
    ECO_MEM8_OPERAND,
    ECO_MEM16_OPERAND,
    ECO_MEM32_OPERAND,

    ECO_IMMED8_OPERAND,
    ECO_IMMED16_OPERAND,
    ECO_IMMED32_OPERAND,
    ECO_SHORT_LABEL_OPERAND,
    ECO_NEAR_LABEL_OPERAND,
    ECO_FAR_LABEL_OPERAND,
    ECO_NEAR_PROC_OPERAND,
    ECO_FAR_PROC_OPERAND,

    ECO_AL_OPERAND,
    ECO_CL_OPERAND,
    ECO_DL_OPERAND,
    ECO_BL_OPERAND,
    ECO_AH_OPERAND,
    ECO_CH_OPERAND,
    ECO_DH_OPERAND,
    ECO_BH_OPERAND,
    ECO_AX_OPERAND,
    ECO_CX_OPERAND,
    ECO_DX_OPERAND,
    ECO_BX_OPERAND,
    ECO_SP_OPERAND,
    ECO_BP_OPERAND,
    ECO_SI_OPERAND,
    ECO_DI_OPERAND,
    ECO_CS_OPERAND,
    ECO_DS_OPERAND,
    ECO_SS_OPERAND,
    ECO_ES_OPERAND,
};

enum EcoI80686InstructionOperandType_t {
    ECO_EAX_OPERAND = ECO_ES_OPERAND + 1,
    ECO_ECX_OPERAND,
    ECO_EDX_OPERAND,
    ECO_EBX_OPERAND,
    ECO_ESP_OPERAND,
    ECO_EBP_OPERAND,
    ECO_ESI_OPERAND,
    ECO_EDI_OPERAND,
    ECO_NEAR32_PROC_OPERAND,
};
enum EcoI8086InstructionRegister_t {
    ECO_REG8_AL     = 0,
    ECO_REG8_CL     = 1,
    ECO_REG8_DL     = 2,
    ECO_REG8_BL     = 3,
    ECO_REG8_AH     = 4,
    ECO_REG8_CH     = 5,
    ECO_REG8_DH     = 6,
    ECO_REG8_BH     = 7,
    ECO_REG16_AX    = 8,
    ECO_REG16_CX    = 9,
    ECO_REG16_DX    = 10,
    ECO_REG16_BX    = 11,
    ECO_REG16_SP    = 12,
    ECO_REG16_BP    = 13,
    ECO_REG16_SI    = 14,
    ECO_REG16_DI    = 15,
};

enum EcoI80686InstructionRegister_t {
    ECO_REG32_EAX   = ECO_REG16_DI + 1,
    ECO_REG32_ECX,
    ECO_REG32_EDX,
    ECO_REG32_EBX,
    ECO_REG32_ESP,
    ECO_REG32_EBP,
    ECO_REG32_ESI,
    ECO_REG32_EDI
};

enum EcoI8086InstructionMemory_t {
    ECO_MOD00_BX_SI     = 0,
    ECO_MOD00_BX_DI     = 1,
    ECO_MOD00_BP_SI     = 2,
    ECO_MOD00_BP_DI     = 3,
    ECO_MOD00_SI        = 4,
    ECO_MOD00_DI        = 5,
    ECO_MOD00_DIRECT    = 6,
    ECO_MOD00_BX        = 7,
    ECO_MOD01_BX_SI_D8  = 8,
    ECO_MOD01_BX_DI_D8  = 9,
    ECO_MOD01_BP_SI_D8  = 10,
    ECO_MOD01_BP_DI_D8  = 11,
    ECO_MOD01_SI_D8     = 12,
    ECO_MOD01_DI_D8     = 13,
    ECO_MOD01_BP_D8     = 14,
    ECO_MOD01_BX_D8     = 15,
    ECO_MOD10_BX_SI_D16 = 16,
    ECO_MOD10_BX_DI_D16 = 17,
    ECO_MOD10_BP_SI_D16 = 18,
    ECO_MOD10_BP_DI_D16 = 19,
    ECO_MOD10_SI_D16    = 20,
    ECO_MOD10_DI_D16    = 21,
    ECO_MOD10_BP_D16    = 22,
    ECO_MOD10_BX_D16    = 23,
};

enum EcoI80686InstructionMemory_t {
    ECO_MOD00_EAX     = ECO_MOD10_BX_D16 + 1,
    ECO_MOD00_ECX,
    ECO_MOD00_EDX,
    ECO_MOD00_EBX,
    ECO_MOD00_SIB,
    ECO_MOD00_D32,
    ECO_MOD00_ESI,
    ECO_MOD00_EDI,
    ECO_MOD01_EAX_D8,
    ECO_MOD01_ECX_D8,
    ECO_MOD01_EDX_D8,
    ECO_MOD01_EBX_D8,
    ECO_MOD01_SIB,
    ECO_MOD01_EBP_D8,
    ECO_MOD01_ESI_D8,
    ECO_MOD01_EDI_D8,
    ECO_MOD10_EAX_D32,
    ECO_MOD10_ECX_D32,
    ECO_MOD10_EDX_D16,
    ECO_MOD10_EBX_D16,
    ECO_MOD10_SIB,
    ECO_MOD10_EBP_D32,
    ECO_MOD10_ESI_D32,
    ECO_MOD10_EDI_D32,
};

/* IEcoToolchainInstruction1 IID = {0EF04C28-DFE3-4991-8F54-63CF6BC6F1F5} */
#ifndef __IID_IEcoToolchainInstruction1
static const UGUID IID_IEcoToolchainInstruction1 = {0x01, 0x10, {0x0E, 0xF0, 0x4C, 0x28, 0xDF, 0xE3, 0x49, 0x91, 0x8F, 0x54, 0x63, 0xCF, 0x6B, 0xC6, 0xF1, 0xF5} };
#endif /* __IID_IEcoToolchainInstruction1 */

typedef struct IEcoToolchainInstruction1* IEcoToolchainInstruction1Ptr_t;

typedef struct IEcoToolchainInstruction1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainInstruction1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainInstruction1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainInstruction1Ptr_t me);

    /* IEcoToolchainInstruction1 */
    char_t* (ECOCALLMETHOD *get_Mnemonic)(/* in */ IEcoToolchainInstruction1Ptr_t me);
    uint8_t (ECOCALLMETHOD *get_OpCode)(/* in */ IEcoToolchainInstruction1Ptr_t me, /* out */ uint8_t* mask);
    bool_t (ECOCALLMETHOD *get_OpCode2nd)(/* in */ IEcoToolchainInstruction1Ptr_t me, /* out */ uint8_t* value, /* out */ uint8_t* mask);
    bool_t (ECOCALLMETHOD *get_FieldsMask)(/* in */ IEcoToolchainInstruction1Ptr_t me, /* out */ uint8_t* value);
    uint8_t (ECOCALLMETHOD *get_DstOperandType)(/* in */ IEcoToolchainInstruction1Ptr_t me);
    uint16_t (ECOCALLMETHOD *get_DstOperandValue)(/* in */ IEcoToolchainInstruction1Ptr_t me, /* out */ void** value);
    uint16_t (ECOCALLMETHOD *set_DstOperandValue)(/* in */ IEcoToolchainInstruction1Ptr_t me, /* in  */ void* value, /* in  */ uint8_t valueSize, /* in  */ void* disp, /* in  */ uint8_t dispSize);
    uint8_t (ECOCALLMETHOD *get_SrcOperandType)(/* in */ IEcoToolchainInstruction1Ptr_t me);
    uint16_t (ECOCALLMETHOD *get_SrcOperandValue)(/* in */ IEcoToolchainInstruction1Ptr_t me, /* out */ void** value);
    uint16_t (ECOCALLMETHOD *set_SrcOperandValue)(/* in */ IEcoToolchainInstruction1Ptr_t me, /* in  */ void* value, /* in  */ uint8_t valueSize, /* in  */ void* disp, /* in  */ uint8_t dispSize);
    uint8_t (ECOCALLMETHOD *get_Length)(/* in */ IEcoToolchainInstruction1Ptr_t me);
    int16_t (ECOCALLMETHOD *Encode)(/* in */ IEcoToolchainInstruction1Ptr_t me, /* in | out */ uint8_t* machineCode, /* in | out */ uint8_t* sizeCode);
    int16_t (ECOCALLMETHOD *Decode)(/* in */ IEcoToolchainInstruction1Ptr_t me, /* in */ uint8_t* machineCode, /* in */ uint8_t* sizeCode);

} IEcoToolchainInstruction1VTbl, *IEcoToolchainInstruction1VTblPtr;

interface IEcoToolchainInstruction1 {
    struct IEcoToolchainInstruction1VTbl *pVTbl;
} IEcoToolchainInstruction1;


#endif /* __I_ECO_TOOLCHAIN_INSTRUCTION_1_H__ */
