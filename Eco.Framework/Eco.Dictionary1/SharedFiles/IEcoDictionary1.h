/*
 * <кодировка символов>
 *   Cyrillic (Windows) - Codepage 1251
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoDictionary1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию интерфейсов IEcoDictionary1
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2016 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __I_ECO_DICTIONARY_1_H__
#define __I_ECO_DICTIONARY_1_H__

#include "IEcoBase1.h"
#include "IEcoList1.h"

/* IEcoDictionary1 IID = {A26AD2F6-2A60-4D75-B47E-BCB4BF0DB27C} */
#ifndef __IID_IEcoDictionary1
static const UGUID IID_IEcoDictionary1 = {0x01, 0x10, {0xA2, 0x6A, 0xD2, 0xF6, 0x2A, 0x60, 0x4D, 0x75, 0xB4, 0x7E, 0xBC, 0xB4, 0xBF, 0x0D, 0xB2, 0x7C} };
#endif /* __IID_IEcoDictionary1 */

typedef struct IEcoDictionary1* IEcoDictionary1Ptr_t;

typedef struct IEcoDictionary1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoDictionary1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoDictionary1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoDictionary1Ptr_t me);

    /* IEcoDictionary1 */
    uint32_t (ECOCALLMETHOD *Count)(/* in */ IEcoDictionary1Ptr_t me);
    voidptr_t (ECOCALLMETHOD *get_Item)(/* in */ IEcoDictionary1Ptr_t me, /* in */ char_t* key);
    uint32_t (ECOCALLMETHOD *set_Item)(/* in */ IEcoDictionary1Ptr_t me, /* in */ char_t* key, /* in */ voidptr_t value);
    IEcoList1* (ECOCALLMETHOD *Keys)(/* in */ IEcoDictionary1Ptr_t me);
    IEcoList1* (ECOCALLMETHOD *Values)(/* in */ IEcoDictionary1Ptr_t me);
    voidptr_t (ECOCALLMETHOD *Remove)(/* in */ IEcoDictionary1Ptr_t me, /* in */ char_t* key);
    void (ECOCALLMETHOD *Clear)(/* in */ IEcoDictionary1Ptr_t me);

} IEcoDictionary1VTbl, *IEcoDictionary1VTblPtr;

interface IEcoDictionary1 {
    struct IEcoDictionary1VTbl *pVTbl;
} IEcoDictionary1;

#endif /* __I_ECO_DICTIONARY_1_H__ */

