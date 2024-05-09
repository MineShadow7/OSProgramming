/*
 * <кодировка символов>
 *   Cyrillic (Windows) - Codepage 1251
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainSymbolEntry1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainSymbolEntry1
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

#ifndef __I_ECO_TOOLCHAIN_SYMBOL_ENTRY_1_H__
#define __I_ECO_TOOLCHAIN_SYMBOL_ENTRY_1_H__

#include "IEcoBase1.h"
#include "IEcoList1.h"
#include "IEcoToolchainAST1.h"
#include "IEcoToolchainInstructionSet1.h"

/* Symbol Type */
#define ECO_SYMBOL_TYPE_OBJECT          0x01      /*  */
#define ECO_SYMBOL_TYPE_FUNC            0x02      /*  */

/* Scope Type */
#define ECO_SCOPE_TYPE_EXTERNAL         0x01      /*  */
#define ECO_SCOPE_TYPE_STATIC            0x02      /*  */

/* IEcoToolchainSymbolEntry1 IID = {BA02B0AE-1B58-43A0-AF0C-F6035AB328CB} */
#ifndef __IID_IEcoToolchainSymbolEntry1
static const UGUID IID_IEcoToolchainSymbolEntry1 = {0x01, 0x10, {0xBA, 0x02, 0xB0, 0xAE, 0x1B, 0x58, 0x43, 0xA0, 0xAF, 0x0C, 0xF6, 0x03, 0x5A, 0xB3, 0x28, 0xCB} };
#endif /* __IID_IEcoToolchainSymbolEntry1 */

typedef struct IEcoToolchainSymbolEntry1* IEcoToolchainSymbolEntry1Ptr_t;

typedef struct IEcoToolchainSymbolEntry1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainSymbolEntry1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainSymbolEntry1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainSymbolEntry1Ptr_t me);

    /* IEcoToolchainSymbolEntry1 */
    uint8_t (ECOCALLMETHOD *get_SymbolType)(/* in */ IEcoToolchainSymbolEntry1Ptr_t me);
    void (ECOCALLMETHOD *set_SymbolType)(/* in */ IEcoToolchainSymbolEntry1Ptr_t me, /* in */ uint8_t type);
    uint8_t (ECOCALLMETHOD *get_ScopeType)(/* in */ IEcoToolchainSymbolEntry1Ptr_t me);
    void (ECOCALLMETHOD *set_ScopeType)(/* in */ IEcoToolchainSymbolEntry1Ptr_t me, /* in */ uint8_t type);
    char_t* (ECOCALLMETHOD *get_Name)(/* in */ IEcoToolchainSymbolEntry1Ptr_t me);
    void (ECOCALLMETHOD *set_Name)(/* in */ IEcoToolchainSymbolEntry1Ptr_t me, /* in */ char_t* name);
    uint8_t (ECOCALLMETHOD *get_SizeBase)(/* in */ IEcoToolchainSymbolEntry1Ptr_t me);
    void* (ECOCALLMETHOD *get_Base)(/* in */ IEcoToolchainSymbolEntry1Ptr_t me);
    void (ECOCALLMETHOD *set_Base)(/* in */ IEcoToolchainSymbolEntry1Ptr_t me, /* in */ void* base, /* in */ uint8_t size);
    uint8_t (ECOCALLMETHOD *get_SizeOffset)(/* in */ IEcoToolchainSymbolEntry1Ptr_t me);
    void* (ECOCALLMETHOD *get_Offset)(/* in */ IEcoToolchainSymbolEntry1Ptr_t me);
    void (ECOCALLMETHOD *set_Offset)(/* in */ IEcoToolchainSymbolEntry1Ptr_t me, /* in */ void* offset, /* in */ uint8_t size);

} IEcoToolchainSymbolEntry1VTbl, *IEcoToolchainSymbolEntry1VTblPtr;

interface IEcoToolchainSymbolEntry1 {
    struct IEcoToolchainSymbolEntry1VTbl *pVTbl;
} IEcoToolchainSymbolEntry1;

#endif /* __I_ECO_TOOLCHAIN_SYMBOL_ENTRY_1_H__ */
