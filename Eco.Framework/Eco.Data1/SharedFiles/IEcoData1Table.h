/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoData1Table
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию интерфейсов IEcoData1Table
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __I_ECO_DATA_1_TABLE_H__
#define __I_ECO_DATA_1_TABLE_H__

#include "IEcoBase1.h"
#include "IEcoData1Column.h"
#include "IEcoData1Row.h"
#include "IEcoList1.h"

/* IEcoData1Table IID = {C6377297-58B4-445E-A79A-B4B30EE2E7A8} */
#ifndef __IID_IEcoData1Table
static const UGUID IID_IEcoData1Table = {0x01, 0x10, {0xC6, 0x37, 0x72, 0x97, 0x58, 0xB4, 0x44, 0x5E, 0xA7, 0x9A, 0xB4, 0xB3, 0x0E, 0xE2, 0xE7, 0xA8} };
#endif /* __IID_IEcoData1Table */

typedef struct IEcoData1Table* IEcoData1TablePtr_t;

typedef struct IEcoData1TableVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoData1TablePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoData1TablePtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoData1TablePtr_t me);

    /* IEcoData1Table */
    char_t* (ECOCALLMETHOD *get_Name)(/* in */ IEcoData1TablePtr_t me);
    IEcoData1Column* (ECOCALLMETHOD *CreateColumn)(/* in */ IEcoData1TablePtr_t me);
    IEcoData1Row* (ECOCALLMETHOD *AddRow)(/* in */ IEcoData1TablePtr_t me);
    IEcoList1* (ECOCALLMETHOD *get_Columns)(/* in */ IEcoData1TablePtr_t me);
    IEcoList1* (ECOCALLMETHOD *get_Rows)(/* in */ IEcoData1TablePtr_t me);

} IEcoData1TableVTbl, *IEcoData1TableVTblPtr;

interface IEcoData1Table {
    struct IEcoData1TableVTbl *pVTbl;
} IEcoData1Table;

#endif /* __I_ECO_DATA_1_TABLE_H__ */
