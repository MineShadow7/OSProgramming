/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoMap1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoMap1
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

#ifndef __I_ECO_MAP_1_H__
#define __I_ECO_MAP_1_H__

#include "IEcoBase1.h"
#include "IEcoComparator1.h"
#include "IEcoList1.h"
#include "IEcoSet1.h"


/* IEcoMap1 IID = {7D56FC51-29AC-473D-8BC6-2DECAD317893} */
#ifndef __IID_IEcoMap1
static const UGUID IID_IEcoMap1 = {0x01, 0x10, {0x7D, 0x56, 0xFC, 0x51, 0x29, 0xAC, 0x47, 0x3D, 0x8B, 0xC6, 0x2D, 0xEC, 0xAD, 0x31, 0x78, 0x93} };
#endif /* __IID_IEcoMap1 */

typedef struct IEcoMap1Iterator* IEcoMap1IteratorPtr_t;
typedef struct IEcoMap1* IEcoMap1Ptr_t;

typedef struct IEcoMap1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoMap1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoMap1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoMap1Ptr_t me);

    /* IEcoMap1 */
    int16_t (ECOCALLMETHOD *InitByType)(/* in */ IEcoMap1Ptr_t me, /* in */ ECO_COMPARATOR_1_TYPE keyType, /* in */ ECO_COMPARATOR_1_TYPE valueType);
    int16_t (ECOCALLMETHOD *InitByTypeAndComparator)(/* in */ IEcoMap1Ptr_t me, /* in */ ECO_COMPARATOR_1_TYPE keyType, /* in */ ECO_COMPARATOR_1_TYPE valueType, /* in */ IEcoComparator1* pIComparator);
    int16_t (ECOCALLMETHOD *Get_KeyType)(/* in */ IEcoMap1Ptr_t me);
    int16_t (ECOCALLMETHOD *Get_ValueType)(/* in */ IEcoMap1Ptr_t me);
    IEcoComparator1* (ECOCALLMETHOD *Get_Comparator)(/* in */ IEcoMap1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Count)(/* in */ IEcoMap1Ptr_t me);
    bool_t (ECOCALLMETHOD *IsEmpty)(/* in */ IEcoMap1Ptr_t me);
    int16_t (ECOCALLMETHOD *Clear)(/* in */ IEcoMap1Ptr_t me);
    voidptr_t (ECOCALLMETHOD *Get)(/* in */ IEcoMap1Ptr_t me, voidptr_t key);
    int16_t (ECOCALLMETHOD *Set)(/* in */ IEcoMap1Ptr_t me, voidptr_t key, voidptr_t value);
    bool_t (ECOCALLMETHOD *Contains)(/* in */ IEcoMap1Ptr_t me, voidptr_t value);
    int16_t (ECOCALLMETHOD *Remove)(/* in */ IEcoMap1Ptr_t me, voidptr_t value);
    IEcoMap1IteratorPtr_t (ECOCALLMETHOD *Get_IterBegin)(/* in */ IEcoMap1Ptr_t me);
    IEcoMap1IteratorPtr_t (ECOCALLMETHOD *Get_IterEnd)(/* in */ IEcoMap1Ptr_t me);
    IEcoMap1IteratorPtr_t (ECOCALLMETHOD *Get_IterByKey)(/* in */ IEcoMap1Ptr_t me, /* in */ voidptr_t key);
    IEcoSet1* (ECOCALLMETHOD *ToKeySet)(/* in */ IEcoMap1Ptr_t me);
    IEcoList1* (ECOCALLMETHOD *ToKeyList)(/* in */ IEcoMap1Ptr_t me);
    IEcoList1* (ECOCALLMETHOD *ToValueList)(/* in */ IEcoMap1Ptr_t me);

} IEcoMap1VTbl, *IEcoMap1VTblPtr;

interface IEcoMap1 {
    struct IEcoMap1VTbl* pVTbl;
} IEcoMap1;


/* IEcoMap1Iterator IID = {29874441-A201-45D2-BF41-1B38E54B5FBD} */
#ifndef __IID_IEcoMap1Iterator
static const UGUID IID_IEcoMap1Iterator = { 0x01, 0x10, 0x29, 0x87, 0x44, 0x41, 0xA2, 0x01, 0x45, 0xD2, 0xBF, 0x41, 0x1B, 0x38, 0xE5, 0x4B, 0x5F, 0xBD };
#endif /* __IID_IEcoMap1Iterator */

typedef struct IEcoMap1IteratorVTbl {

    /* IEcoUnknown */
    int16_t(ECOCALLMETHOD *QueryInterface)(/* in */ IEcoMap1IteratorPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t(ECOCALLMETHOD *AddRef)(/* in */ IEcoMap1IteratorPtr_t me);
    uint32_t(ECOCALLMETHOD *Release)(/* in */ IEcoMap1IteratorPtr_t me);

    /* IEcoMap1Iterator */
    IEcoMap1* (ECOCALLMETHOD *Get_OwnerMap)(/* in */ IEcoMap1IteratorPtr_t me);
    voidptr_t (ECOCALLMETHOD *Get_Key)(/* in */ IEcoMap1IteratorPtr_t me);
    voidptr_t (ECOCALLMETHOD *Get_Value)(/* in */ IEcoMap1IteratorPtr_t me);
    bool_t (ECOCALLMETHOD *HasNext)(/* in */ IEcoMap1IteratorPtr_t me);
    bool_t (ECOCALLMETHOD *HasPrev)(/* in */ IEcoMap1IteratorPtr_t me);
    voidptr_t (ECOCALLMETHOD *GoToNext)(/* in */ IEcoMap1IteratorPtr_t me);
    voidptr_t (ECOCALLMETHOD *GoToPrev)(/* in */ IEcoMap1IteratorPtr_t me);

} IEcoMap1IteratorVTbl, * IEcoMap1IteratorVTblPtr;

interface IEcoMap1Iterator {
    struct IEcoMap1IteratorVTbl* pVTbl;
} IEcoMap1Iterator;

#endif /* __I_ECO_MAP_1_H__ */
