/*
 * <кодировка символов>
 *   Cyrillic (Windows) - Codepage 1251
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoStack1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoStack1
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

#ifndef __I_ECO_STACK_1_H__
#define __I_ECO_STACK_1_H__

#include "IEcoBase1.h"

/* IEcoStack1 IID = {665574A1-F30F-454C-B5BC-376C8F69590C} */
#ifndef __IID_IEcoStack1
static const UGUID IID_IEcoStack1 = {0x01, 0x10, {0x66, 0x55, 0x74, 0xA1, 0xF3, 0x0F, 0x45, 0x4C, 0xB5, 0xBC, 0x37, 0x6C, 0x8F, 0x69, 0x59, 0x0C} };
#endif /* __IID_IEcoStack1 */

typedef struct IEcoStack1* IEcoStack1Ptr_t;

typedef struct IEcoStack1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoStack1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoStack1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoStack1Ptr_t me);

    /* IEcoStack1 */
    uint32_t (ECOCALLMETHOD *Count)(/* in */ IEcoStack1Ptr_t me);
    voidptr_t (ECOCALLMETHOD *Peek)(/* in */ IEcoStack1Ptr_t me);
    voidptr_t (ECOCALLMETHOD *Pop)(/* in */ IEcoStack1Ptr_t me);
    void (ECOCALLMETHOD *Push)(/* in */ IEcoStack1Ptr_t me, voidptr_t obj);
    void (ECOCALLMETHOD *Clear)(/* in */ IEcoStack1Ptr_t me);
    voidptr_t (ECOCALLMETHOD *Item)(/* in */ IEcoStack1Ptr_t me, /* in */ uint32_t index);

} IEcoStack1VTbl, *IEcoStack1VTblPtr;

interface IEcoStack1 {
    struct IEcoStack1VTbl *pVTbl;
} IEcoStack1;


#endif /* __I_ECO_STACK_1_H__ */

