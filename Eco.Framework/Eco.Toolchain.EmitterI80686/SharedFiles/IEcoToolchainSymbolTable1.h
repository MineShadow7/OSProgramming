/*
 * <кодировка символов>
 *   Cyrillic (Windows) - Codepage 1251
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainSymbolTable1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainSymbolTable1
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

#ifndef __I_ECO_TOOLCHAIN_SYMBOL_TABLE_1_H__
#define __I_ECO_TOOLCHAIN_SYMBOL_TABLE_1_H__

#include "IEcoBase1.h"
#include "IEcoList1.h"
#include "IEcoToolchainSymbolEntry1.h"
#include "IEcoToolchainInstructionSet1.h"

/* IEcoToolchainSymbolTable1 IID = {80456EEA-363B-4177-8579-3B40C0C200B8} */
#ifndef __IID_IEcoToolchainSymbolTable1
static const UGUID IID_IEcoToolchainSymbolTable1 = {0x01, 0x10, {0x80, 0x45, 0x6E, 0xEA, 0x36, 0x3B, 0x41, 0x77, 0x85, 0x79, 0x3B, 0x40, 0xC0, 0xC2, 0x00, 0xB8} };
#endif /* __IID_IEcoToolchainSymbolTable1 */

typedef struct IEcoToolchainSymbolTable1* IEcoToolchainSymbolTable1Ptr_t;

typedef struct IEcoToolchainSymbolTable1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainSymbolTable1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainSymbolTable1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainSymbolTable1Ptr_t me);

    /* IEcoToolchainSymbolTable1 */
    IEcoToolchainSymbolEntry1* (ECOCALLMETHOD *Create)(/* in */ IEcoToolchainSymbolTable1Ptr_t me);
    IEcoToolchainSymbolEntry1* (ECOCALLMETHOD *Lookup)(/* in */ IEcoToolchainSymbolTable1Ptr_t me, /* in */ char_t* pszSymbolName);
    int16_t (ECOCALLMETHOD *Insert)(/* in */ IEcoToolchainSymbolTable1Ptr_t me, /* in */ IEcoToolchainSymbolEntry1* pISymbol);
    IEcoList1* (ECOCALLMETHOD *get_Symbols)(/* in */ IEcoToolchainSymbolTable1Ptr_t me);

} IEcoToolchainSymbolTable1VTbl, *IEcoToolchainSymbolTable1VTblPtr;

interface IEcoToolchainSymbolTable1 {
    struct IEcoToolchainSymbolTable1VTbl *pVTbl;
} IEcoToolchainSymbolTable1;

#endif /* __I_ECO_TOOLCHAIN_SYMBOL_TABLE_1_H__ */
