/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoData1Row
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию интерфейсов IEcoData1Row
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __I_ECO_DATA_1_ROW_H__
#define __I_ECO_DATA_1_ROW_H__

#include "IEcoBase1.h"
#include "IEcoData1Column.h"

/* IEcoData1Row IID = {4ED4D229-2B46-4B1F-9AFD-21698434DFF5} */
#ifndef __IID_IEcoData1Row
static const UGUID IID_IEcoData1Row = {0x01, 0x10, {0x4E, 0xD4, 0xD2, 0x29, 0x2B, 0x46, 0x4B, 0x1F, 0x9A, 0xFD, 0x21, 0x69, 0x84, 0x34, 0xDF, 0xF5} };
#endif /* __IID_IEcoData1Row */

typedef struct IEcoData1Row* IEcoData1RowPtr_t;

typedef struct IEcoData1RowVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoData1RowPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoData1RowPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoData1RowPtr_t me);

    /* IEcoData1Row */
    voidptr_t (ECOCALLMETHOD *get_ItemByColumn)(/* in */ IEcoData1RowPtr_t me, /* in */ IEcoData1Column* pIColumn);
    void (ECOCALLMETHOD *set_ItemByColumn)(/* in */ IEcoData1RowPtr_t me, /* in */ IEcoData1Column* pIColumn, /* in */ voidptr_t value);
    voidptr_t (ECOCALLMETHOD *get_ItemByIndex)(/* in */ IEcoData1RowPtr_t me, /* in */ uint32_t Index);
    void (ECOCALLMETHOD *set_ItemByIndex)(/* in */ IEcoData1RowPtr_t me, /* in */ uint32_t Index, /* in */ voidptr_t value);
    voidptr_t (ECOCALLMETHOD *get_ItemByName)(/* in */ IEcoData1RowPtr_t me, /* in */ char_t* Name);
    void (ECOCALLMETHOD *set_ItemByName)(/* in */ IEcoData1RowPtr_t me, /* in */ char_t* Name, /* in */ voidptr_t value);
    bool_t (ECOCALLMETHOD *IsNullByColumn)(/* in */ IEcoData1RowPtr_t me, /* in */ IEcoData1Column* pIColumn);
    bool_t (ECOCALLMETHOD *IsNullByIndex)(/* in */ IEcoData1RowPtr_t me, /* in */ uint32_t Index);
    bool_t (ECOCALLMETHOD *IsNullByName)(/* in */ IEcoData1RowPtr_t me, /* in */ char_t* Name);

} IEcoData1RowVTbl, *IEcoData1RowVTblPtr;

interface IEcoData1Row {
    struct IEcoData1RowVTbl *pVTbl;
} IEcoData1Row;

#endif /* __I_ECO_DATA_1_ROW_H__ */
