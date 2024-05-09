/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoData1Column
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию интерфейсов IEcoData1Column
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __I_ECO_DATA_1_COLUMN_H__
#define __I_ECO_DATA_1_COLUMN_H__

#include "IEcoBase1.h"

/* DataType */
static const uint16_t ECO_DATA_1_TYPE_BOOLEAN = 1;
static const uint16_t ECO_DATA_1_TYPE_BYTE = 2;
static const uint16_t ECO_DATA_1_TYPE_CHAR = 3;
static const uint16_t ECO_DATA_1_TYPE_DATETIME = 4;
static const uint16_t ECO_DATA_1_TYPE_DECIMAL = 5;
static const uint16_t ECO_DATA_1_TYPE_DOUBLE = 6;
static const uint16_t ECO_DATA_1_TYPE_GUID = 7;
static const uint16_t ECO_DATA_1_TYPE_STRING = 8;
static const uint16_t ECO_DATA_1_TYPE_INTEGER = 9;
static const uint16_t ECO_DATA_1_TYPE_OBJECT = 10;

/* IEcoData1Column IID = {79729968-0B52-4BF9-AAE3-264A30E0C209} */
#ifndef __IID_IEcoData1Column
static const UGUID IID_IEcoData1Column = {0x01, 0x10, {0x79, 0x72, 0x99, 0x68, 0x0B, 0x52, 0x4B, 0xF9, 0xAA, 0xE3, 0x26, 0x4A, 0x30, 0xE0, 0xC2, 0x09} };
#endif /* __IID_IEcoData1Column */

typedef struct IEcoData1Column* IEcoData1ColumnPtr_t;

typedef struct IEcoData1ColumnVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoData1ColumnPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoData1ColumnPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoData1ColumnPtr_t me);

    /* IEcoData1Column */
    bool_t (ECOCALLMETHOD *get_AllowDBNull)(/* in */ IEcoData1ColumnPtr_t me);
    void (ECOCALLMETHOD *set_AllowDBNull)(/* in */ IEcoData1ColumnPtr_t me, /* in */ bool_t value);
    bool_t (ECOCALLMETHOD *get_AutoIncrement)(/* in */ IEcoData1ColumnPtr_t me);
    void (ECOCALLMETHOD *set_AutoIncrement)(/* in */ IEcoData1ColumnPtr_t me, /* in */ bool_t value);
    uint16_t (ECOCALLMETHOD *get_DataType)(/* in */ IEcoData1ColumnPtr_t me);
    void (ECOCALLMETHOD *set_DataType)(/* in */ IEcoData1ColumnPtr_t me, /* in */ uint16_t value);
    char_t* (ECOCALLMETHOD *get_Name)(/* in */ IEcoData1ColumnPtr_t me);
    void (ECOCALLMETHOD *set_Name)(/* in */ IEcoData1ColumnPtr_t me, /* in */ char_t* value);
    char_t* (ECOCALLMETHOD *get_Caption)(/* in */ IEcoData1ColumnPtr_t me);
    void (ECOCALLMETHOD *set_Caption)(/* in */ IEcoData1ColumnPtr_t me, /* in */ char_t* value);
    uint32_t (ECOCALLMETHOD *get_MaxLength)(/* in */ IEcoData1ColumnPtr_t me);
    void (ECOCALLMETHOD *set_MaxLength)(/* in */ IEcoData1ColumnPtr_t me, /* in */ uint32_t value);

} IEcoData1ColumnVTbl, *IEcoData1ColumnVTblPtr;

interface IEcoData1Column {
    struct IEcoData1ColumnVTbl *pVTbl;
} IEcoData1Column;

#endif /* __I_ECO_DATA_1_COLUMN_H__ */
