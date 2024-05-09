/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainMacroProcessor1Result
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию интерфейса IEcoToolchainMacroProcessor1Result
 * </описание>
 *
 * <ссылка>
 * </ссылка>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __I_ECO_TOOLCHAIN_MACRO_PROCESSOR_1_RESULT_H__
#define __I_ECO_TOOLCHAIN_MACRO_PROCESSOR_1_RESULT_H__

#include "IEcoBase1.h"

/* Type */
static const uint16_t ECO_MACROPROCESSOR_TYPE_ERROR         = -1;
static const uint16_t ECO_MACROPROCESSOR_TYPE_PASS          = 0;
static const uint16_t ECO_MACROPROCESSOR_TYPE_DEFINITION    = 1;
static const uint16_t ECO_MACROPROCESSOR_TYPE_INVOCATION    = 2;
static const uint16_t ECO_MACROPROCESSOR_TYPE_EXPANSION     = 3;
static const uint16_t ECO_MACROPROCESSOR_TYPE_DELETITION    = 4;

/* Command */
static const uint16_t ECO_MACROPROCESSOR_COMMAND_INCLUDE    = 1;

static const uint16_t ECO_MACROPROCESSOR_COMMAND_IFDEF      = 2;
static const uint16_t ECO_MACROPROCESSOR_COMMAND_IFNDEF     = 3;
static const uint16_t ECO_MACROPROCESSOR_COMMAND_ENDIF      = 4;

static const uint16_t ECO_MACROPROCESSOR_COMMAND_DEFINE     = 5;
static const uint16_t ECO_MACROPROCESSOR_COMMAND_UNDEF      = 6;

static const uint16_t ECO_MACROPROCESSOR_COMMAND_IF         = 7;
static const uint16_t ECO_MACROPROCESSOR_COMMAND_ELIF       = 8;
static const uint16_t ECO_MACROPROCESSOR_COMMAND_ELSE       = 9;

static const uint16_t ECO_MACROPROCESSOR_COMMAND_LINE       = 10;
static const uint16_t ECO_MACROPROCESSOR_COMMAND_ERROR      = 11;
static const uint16_t ECO_MACROPROCESSOR_COMMAND_PRAGMA     = 12;


/* IEcoToolchainMacroProcessor1Result IID = {981504E3-6F50-4F6D-8B79-ACD404881B31} */
#ifndef __IID_IEcoToolchainMacroProcessor1Result
static const UGUID IID_IEcoToolchainMacroProcessor1Result = {0x01, 0x10, {0x98, 0x15, 0x04, 0xE3, 0x6F, 0x50, 0x4F, 0x6D, 0x8B, 0x79, 0xAC, 0xD4, 0x04, 0x88, 0x1B, 0x31} };
#endif /* __IID_IEcoToolchainMacroProcessor1Result */

typedef struct IEcoToolchainMacroProcessor1Result* IEcoToolchainMacroProcessor1ResultPtr_t;

typedef struct IEcoToolchainMacroProcessor1ResultVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainMacroProcessor1ResultPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainMacroProcessor1ResultPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainMacroProcessor1ResultPtr_t me);

    /* IEcoToolchainMacroProcessor1Result */
    uint16_t (ECOCALLMETHOD *get_Type)(/* in */ IEcoToolchainMacroProcessor1ResultPtr_t me);
    uint16_t (ECOCALLMETHOD *get_Command)(/* in */ IEcoToolchainMacroProcessor1ResultPtr_t me);
    void* (ECOCALLMETHOD *get_Object)(/* in */ IEcoToolchainMacroProcessor1ResultPtr_t me);

} IEcoToolchainMacroProcessor1ResultVTbl, *IEcoToolchainMacroProcessor1ResultVTblPtr;

interface IEcoToolchainMacroProcessor1Result {
    struct IEcoToolchainMacroProcessor1ResultVTbl *pVTbl;
} IEcoToolchainMacroProcessor1Result;

#endif /* __I_ECO_TOOLCHAIN_MACRO_PROCESSOR_1_RESULT_H__ */
