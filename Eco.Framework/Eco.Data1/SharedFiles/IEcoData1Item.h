/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoData1Item
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию интерфейсов IEcoData1Item
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __I_ECO_DATA_1_ITEM_H__
#define __I_ECO_DATA_1_ITEM_H__

#include "IEcoBase1.h"
#include "IEcoData1Item.h"

/* IEcoData1Item IID = {D1860068-083F-4DC9-9964-6E8F31BAC865} */
#ifndef __IID_IEcoData1Item
static const UGUID IID_IEcoData1Item = {0x01, 0x10, {0xD1, 0x86, 0x00, 0x68, 0x08, 0x3F, 0x4D, 0xC9, 0x99, 0x64, 0x6E, 0x8F, 0x31, 0xBA, 0xC8, 0x65} };
#endif /* __IID_IEcoData1Item */

typedef struct IEcoData1Item* IEcoData1ItemPtr_t;

typedef struct IEcoData1ItemVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoData1ItemPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoData1ItemPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoData1ItemPtr_t me);

    /* IEcoData1Item */
    voidptr_t (ECOCALLMETHOD *get_ItemByColumn)(/* in */ IEcoData1ItemPtr_t me, /* in */ IEcoData1Column* pIColumn);
    void (ECOCALLMETHOD *set_ItemByColumn)(/* in */ IEcoData1ItemPtr_t me, /* in */ IEcoData1Column* pIColumn, /* in */ voidptr_t value);
    voidptr_t (ECOCALLMETHOD *get_ItemByIndex)(/* in */ IEcoData1ItemPtr_t me, /* in */ uint32_t Index);
    void (ECOCALLMETHOD *set_ItemByIndex)(/* in */ IEcoData1ItemPtr_t me, /* in */ uint32_t Index, /* in */ voidptr_t value);
    voidptr_t (ECOCALLMETHOD *get_ItemByName)(/* in */ IEcoData1ItemPtr_t me, /* in */ char_t* Name);
    void (ECOCALLMETHOD *set_ItemByName)(/* in */ IEcoData1ItemPtr_t me, /* in */ char_t* Name, /* in */ voidptr_t value);
    bool_t (ECOCALLMETHOD *IsNullByColumn)(/* in */ IEcoData1ItemPtr_t me, /* in */ IEcoData1Column* pIColumn);
    bool_t (ECOCALLMETHOD *IsNullByIndex)(/* in */ IEcoData1ItemPtr_t me, /* in */ uint32_t Index);
    bool_t (ECOCALLMETHOD *IsNullByName)(/* in */ IEcoData1ItemPtr_t me, /* in */ char_t* Name);

} IEcoData1ItemVTbl, *IEcoData1ItemVTblPtr;

interface IEcoData1Item {
    struct IEcoData1ItemVTbl *pVTbl;
} IEcoData1Item;

#endif /* __I_ECO_DATA_1_ITEM_H__ */
