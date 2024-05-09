/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoComparator1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoComparator1
 * </описание>
 *
 * <ссылка>
 *
 * </ссылка>
 *
 * <автор>
 *   Copyright (c) 2021 Margarita Mezina. All rights reserved.
 * </автор>
 *
 */

#ifndef __I_ECO_COMPARATOR_1_H__
#define __I_ECO_COMPARATOR_1_H__

#include "IEcoBase1.h"

/* IEcoComparator1 IID = {CCA1A661-B39A-4F3C-B9FF-A85E009FBF22} */
#ifndef __IID_IEcoComparator1
static const UGUID IID_IEcoComparator1 = {0x01, 0x10, {0xCC, 0xA1, 0xA6, 0x61, 0xB3, 0x9A, 0x4F, 0x3C, 0xB9, 0xFF, 0xA8, 0x5E, 0x00, 0x9F, 0xBF, 0x22}};
#endif /* __IID_IEcoComparator1 */

typedef struct IEcoComparator1* IEcoComparator1Ptr_t;

typedef struct IEcoComparator1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoComparator1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoComparator1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoComparator1Ptr_t me);

    /* IEcoComparator1 */
    int16_t(ECOCALLMETHOD *Compare)(/* in */ IEcoComparator1Ptr_t me, /* in */ voidptr_t value1, /* in */ voidptr_t value2);

} IEcoComparator1VTbl, *IEcoComparator1VTblPtr;

interface IEcoComparator1 {
    struct IEcoComparator1VTbl* pVTbl;
} IEcoComparator1;

typedef enum ECO_COMPARATOR_1_TYPE {
    /*
        Тип Данных: char_t*;
        Интерфейс сравнения по-умолчанию: IEcoComparator1String,
        Производит копирование строки при вставке и очистку при удалении
    */
    ECO_COMPARATOR_1_STRING_TYPE = 0,
    /*
        Тип Данных: int8_t;
        Интерфейс сравнения по-умолчанию: IEcoComparator1Int8,
        Производит выделение памяти под число и копирование при вставке, а также очистку памяти при удалении
    */
    ECO_COMPARATOR_1_INTEGER_8_TYPE,
    /*
        Тип Данных: int16_t;
        Интерфейс сравнения по-умолчанию: IEcoComparator1Int16,
        Производит выделение памяти под число и копирование при вставке, а также очистку памяти при удалении
    */
    ECO_COMPARATOR_1_INTEGER_16_TYPE,
    /*
        Тип Данных: int32_t;
        Интерфейс сравнения по-умолчанию: IEcoComparator1Int32,
        Производит выделение памяти под число и копирование при вставке, а также очистку памяти при удалении
    */
    ECO_COMPARATOR_1_INTEGER_32_TYPE,
    /*
        Тип Данных: uint8_t;
        Интерфейс сравнения по-умолчанию: IEcoComparator1UInt8,
        Производит выделение памяти под число и копирование при вставке, а также очистку памяти при удалении
    */
    ECO_COMPARATOR_1_UNSIGNED_INTEGER_8_TYPE,
    /*
        Тип Данных: uint16_t;
        Интерфейс сравнения по-умолчанию: IEcoComparator1UInt16,
        Производит выделение памяти под число и копирование при вставке, а также очистку памяти при удалении
    */
    ECO_COMPARATOR_1_UNSIGNED_INTEGER_16_TYPE,
    /*
        Тип Данных: uint32_t;
        Интерфейс сравнения по-умолчанию: IEcoComparator1UInt32,
        Производит выделение памяти под число и копирование при вставке, а также очистку памяти при удалении
    */
    ECO_COMPARATOR_1_UNSIGNED_INTEGER_32_TYPE,
    /*
        Тип Данных: float_t;
        Интерфейс сравнения по-умолчанию: IEcoComparator1Float,
        Производит выделение памяти под число и копирование при вставке, а также очистку памяти при удалении
    */
    ECO_COMPARATOR_1_FLOAT_TYPE,
    /*
        Тип Данных: double_t;
        Интерфейс сравнения по-умолчанию: IEcoComparator1Double,
        Производит выделение памяти под число и копирование при вставке, а также очистку памяти при удалении
    */
    ECO_COMPARATOR_1_DOUBLE_TYPE,
    /*
        Тип Данных: void*;
        Интерфейс сравнения по-умолчанию: IEcoComparator1Pointer;
        При вставке не производится никакого копирования, при удалении также не производится очистка памяти (вставка и удаление "AsIs")
    */
    ECO_COMPARATOR_1_POINTER_TYPE,
    /*
        Тип Данных: интерфейсный тип (IEcoUnknown*);
        Интерфейс сравнения по-умолчанию: IEcoComparator1Pointer;
        При вставке увеличивает число ссылок на объект (функция AddRef), при удалении уменьшает число ссылок (фукция Release)
    */
    ECO_COMPARATOR_1_OBJECT_TYPE,
    /*
        Тип Данных: ECO_DOUBLE_COMPLEX_T;
        Интерфейс сравнения по-умолчанию: IEcoComparator1DoubleComplex,
        Производит выделение памяти под комплексное число и копирование при вставке, а также очистку памяти при удалении
    */
    ECO_COMPARATOR_1_DOUBLE_COMPLEX_TYPE
} ECO_COMPARATOR_1_TYPE;

/* IEcoComparator1Int8 IID = {CCA1A661-B39A-4F3C-B9FF-A85E009FBF08} */
#ifndef __IID_IEcoComparator1Int8
static const UGUID IID_IEcoComparator1Int8 = { 0x01, 0x10, {0xCC, 0xA1, 0xA6, 0x61, 0xB3, 0x9A, 0x4F, 0x3C, 0xB9, 0xFF, 0xA8, 0x5E, 0x00, 0x9F, 0xBF, 0x08} };
#endif /* __IID_IEcoComparator1Int8 */

/* IEcoComparator1Int16 IID = {CCA1A661-B39A-4F3C-B9FF-A85E009FBF16} */
#ifndef __IID_IEcoComparator1Int16
static const UGUID IID_IEcoComparator1Int16 = { 0x01, 0x10, {0xCC, 0xA1, 0xA6, 0x61, 0xB3, 0x9A, 0x4F, 0x3C, 0xB9, 0xFF, 0xA8, 0x5E, 0x00, 0x9F, 0xBF, 0x16} };
#endif /* __IID_IEcoComparator1Int16 */

/* IEcoComparator1Int32 IID = {CCA1A661-B39A-4F3C-B9FF-A85E009FBF23} */
#ifndef __IID_IEcoComparator1Int32
static const UGUID IID_IEcoComparator1Int32 = { 0x01, 0x10, {0xCC, 0xA1, 0xA6, 0x61, 0xB3, 0x9A, 0x4F, 0x3C, 0xB9, 0xFF, 0xA8, 0x5E, 0x00, 0x9F, 0xBF, 0x23} };
#endif /* __IID_IEcoComparator1Int32 */

/* IEcoComparator1UInt8 IID = {CCA1A661-B39A-4F3C-B9FF-A85E009FBF18} */
#ifndef __IID_IEcoComparator1UInt8
static const UGUID IID_IEcoComparator1UInt8 = { 0x01, 0x10, {0xCC, 0xA1, 0xA6, 0x61, 0xB3, 0x9A, 0x4F, 0x3C, 0xB9, 0xFF, 0xA8, 0x5E, 0x00, 0x9F, 0xBF, 0x18} };
#endif /* __IID_IEcoComparator1UInt8 */

/* IEcoComparator1UInt16 IID = {CCA1A661-B39A-4F3C-B9FF-A85E009FBF06} */
#ifndef __IID_IEcoComparator1UInt16
static const UGUID IID_IEcoComparator1UInt16 = { 0x01, 0x10, {0xCC, 0xA1, 0xA6, 0x61, 0xB3, 0x9A, 0x4F, 0x3C, 0xB9, 0xFF, 0xA8, 0x5E, 0x00, 0x9F, 0xBF, 0x06} };
#endif /* __IID_IEcoComparator1UInt16 */

/* IEcoComparator1UInt32 IID = {CCA1A661-B39A-4F3C-B9FF-A85E009FBF33} */
#ifndef __IID_IEcoComparator1UInt32
static const UGUID IID_IEcoComparator1UInt32 = { 0x01, 0x10, {0xCC, 0xA1, 0xA6, 0x61, 0xB3, 0x9A, 0x4F, 0x3C, 0xB9, 0xFF, 0xA8, 0x5E, 0x00, 0x9F, 0xBF, 0x33} };
#endif /* __IID_IEcoComparator1UInt32 */

/* IEcoComparator1Float IID = {CCA1A661-B39A-4F3C-B9FF-A85E009FBF87} */
#ifndef __IID_IEcoComparator1Float
static const UGUID IID_IEcoComparator1Float = { 0x01, 0x10, {0xCC, 0xA1, 0xA6, 0x61, 0xB3, 0x9A, 0x4F, 0x3C, 0xB9, 0xFF, 0xA8, 0x5E, 0x00, 0x9F, 0xBF, 0x87} };
#endif /* __IID_IEcoComparator1Float */

/* IEcoComparator1Double IID = {CCA1A661-B39A-4F3C-B9FF-A85E009FBF24} */
#ifndef __IID_IEcoComparator1Double
static const UGUID IID_IEcoComparator1Double = { 0x01, 0x10, {0xCC, 0xA1, 0xA6, 0x61, 0xB3, 0x9A, 0x4F, 0x3C, 0xB9, 0xFF, 0xA8, 0x5E, 0x00, 0x9F, 0xBF, 0x24} };
#endif /* __IID_IEcoComparator1Double */

/* IEcoComparator1DoubleComplex IID = {CCA1A661-B39A-4F3C-B9FF-A85E009FBF77} */
#ifndef __IID_IEcoComparator1DoubleComplex
static const UGUID IID_IEcoComparator1DoubleComplex = { 0x01, 0x10, {0xCC, 0xA1, 0xA6, 0x61, 0xB3, 0x9A, 0x4F, 0x3C, 0xB9, 0xFF, 0xA8, 0x5E, 0x00, 0x9F, 0xBF, 0x77} };
#endif /* __IID_IEcoComparator1DoubleComplex */

/* IEcoComparator1String IID = {CCA1A661-B39A-4F3C-B9FF-A85E009FBF25} */
#ifndef __IID_IEcoComparator1String
static const UGUID IID_IEcoComparator1String = { 0x01, 0x10, {0xCC, 0xA1, 0xA6, 0x61, 0xB3, 0x9A, 0x4F, 0x3C, 0xB9, 0xFF, 0xA8, 0x5E, 0x00, 0x9F, 0xBF, 0x25} };
#endif /* __IID_IEcoComparator1String */

/* IEcoComparator1Pointer IID = {CCA1A661-B39A-4F3C-B9FF-A85E009FBF26} */
#ifndef __IID_IEcoComparator1Pointer
static const UGUID IID_IEcoComparator1Pointer = { 0x01, 0x10, {0xCC, 0xA1, 0xA6, 0x61, 0xB3, 0x9A, 0x4F, 0x3C, 0xB9, 0xFF, 0xA8, 0x5E, 0x00, 0x9F, 0xBF, 0x26} };
#endif /* __IID_IEcoComparator1Pointer */

/* IEcoComparator1WideString IID = {CCA1A661-B39A-4F3C-B9FF-A85E009FBF27} */
#ifndef __IID_IEcoComparator1WideString
static const UGUID IID_IEcoComparator1WideString = { 0x01, 0x10, {0xCC, 0xA1, 0xA6, 0x61, 0xB3, 0x9A, 0x4F, 0x3C, 0xB9, 0xFF, 0xA8, 0x5E, 0x00, 0x9F, 0xBF, 0x27} };
#endif /* __IID_IEcoComparator1WideString */

#endif /* __I_ECO_COMPARATOR_1_H__ */
