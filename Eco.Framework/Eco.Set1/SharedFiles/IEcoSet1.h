/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoSet1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoSet1
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

#ifndef __I_ECO_SET_1_H__
#define __I_ECO_SET_1_H__

#include "IEcoBase1.h"
#include "IEcoComparator1.h"
#include "IEcoList1.h"

/* IEcoSet1 IID = {29874441-A201-45D2-BF41-1B38E54B5FBF} */
#ifndef __IID_IEcoSet1
static const UGUID IID_IEcoSet1 = {0x01, 0x10, {0x29, 0x87, 0x44, 0x41, 0xA2, 0x01, 0x45, 0xD2, 0xBF, 0x41, 0x1B, 0x38, 0xE5, 0x4B, 0x5F, 0xBF} };
#endif /* __IID_IEcoSet1 */

typedef struct IEcoSet1Iterator* IEcoSet1IteratorPtr_t;
typedef struct IEcoSet1* IEcoSet1Ptr_t;

typedef struct IEcoSet1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoSet1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoSet1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoSet1Ptr_t me);

    /* IEcoSet1 */
    int16_t (ECOCALLMETHOD *InitByType)(/* in */ IEcoSet1Ptr_t me, /* in */ ECO_COMPARATOR_1_TYPE type);
    int16_t (ECOCALLMETHOD *InitByTypeAndComparator)(/* in */ IEcoSet1Ptr_t me, /* in */ ECO_COMPARATOR_1_TYPE type, /* in */ IEcoComparator1* pIComparator);
    int16_t (ECOCALLMETHOD *Get_Type)(/* in */ IEcoSet1Ptr_t me);
    IEcoComparator1* (ECOCALLMETHOD *Get_Comparator)(/* in */ IEcoSet1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Count)(/* in */ IEcoSet1Ptr_t me);
    bool_t (ECOCALLMETHOD *IsEmpty)(/* in */ IEcoSet1Ptr_t me);
    int16_t (ECOCALLMETHOD *Clear)(/* in */ IEcoSet1Ptr_t me);
    int16_t (ECOCALLMETHOD *Add)(/* in */ IEcoSet1Ptr_t me, voidptr_t value);
    bool_t (ECOCALLMETHOD *Contains)(/* in */ IEcoSet1Ptr_t me, voidptr_t value);
    voidptr_t (ECOCALLMETHOD *Get)(/* in */ IEcoSet1Ptr_t me, voidptr_t value);
    int16_t (ECOCALLMETHOD *Remove)(/* in */ IEcoSet1Ptr_t me, voidptr_t value);
    IEcoSet1IteratorPtr_t (ECOCALLMETHOD *Get_IterBegin)(/* in */ IEcoSet1Ptr_t me);
    IEcoSet1IteratorPtr_t (ECOCALLMETHOD *Get_IterEnd)(/* in */ IEcoSet1Ptr_t me);
    IEcoSet1IteratorPtr_t (ECOCALLMETHOD *Get_IterByValue)(/* in */ IEcoSet1Ptr_t me, /* in */ voidptr_t value);
    IEcoList1* (ECOCALLMETHOD *ToList)(/* in */ IEcoSet1Ptr_t me);

} IEcoSet1VTbl, *IEcoSet1VTblPtr;

interface IEcoSet1 {
    struct IEcoSet1VTbl* pVTbl;
} IEcoSet1;

/* IEcoSet1Iterator IID = {29874441-A201-45D2-BF41-1B38E54B5FBA} */
#ifndef __IID_IEcoSet1Iterator
static const UGUID IID_IEcoSet1Iterator = { 0x01, 0x10, 0x29, 0x87, 0x44, 0x41, 0xA2, 0x01, 0x45, 0xD2, 0xBF, 0x41, 0x1B, 0x38, 0xE5, 0x4B, 0x5F, 0xBA };
#endif /* __IID_IEcoSet1Iterator */

typedef struct IEcoSet1IteratorVTbl {

    /* IEcoUnknown */
    int16_t(ECOCALLMETHOD *QueryInterface)(/* in */ IEcoSet1IteratorPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t(ECOCALLMETHOD *AddRef)(/* in */ IEcoSet1IteratorPtr_t me);
    uint32_t(ECOCALLMETHOD *Release)(/* in */ IEcoSet1IteratorPtr_t me);

    /* IEcoSet1Iterator */
    IEcoSet1* (ECOCALLMETHOD *Get_OwnerSet)(/* in */ IEcoSet1IteratorPtr_t me);
    voidptr_t (ECOCALLMETHOD *Get_Value)(/* in */ IEcoSet1IteratorPtr_t me);
    bool_t (ECOCALLMETHOD *HasNext)(/* in */ IEcoSet1IteratorPtr_t me);
    bool_t (ECOCALLMETHOD *HasPrev)(/* in */ IEcoSet1IteratorPtr_t me);
    voidptr_t (ECOCALLMETHOD *GoToNext)(/* in */ IEcoSet1IteratorPtr_t me);
    voidptr_t (ECOCALLMETHOD *GoToPrev)(/* in */ IEcoSet1IteratorPtr_t me);

} IEcoSet1IteratorVTbl, * IEcoSet1IteratorVTblPtr;

interface IEcoSet1Iterator {
    struct IEcoSet1IteratorVTbl* pVTbl;
} IEcoSet1Iterator;

#endif /* __I_ECO_SET_1_H__ */
