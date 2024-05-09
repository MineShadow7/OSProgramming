/*
 * <кодировка символов>
 *   Cyrillic (Windows) - Codepage 1251
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoObserver1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoObserver1
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

#ifndef __I_ECO_OBSERVER_1_H__
#define __I_ECO_OBSERVER_1_H__

#include "IEcoBase1.h"

/* IEcoObserver1 IID = {F2912925-B1A5-42CA-83C1-B062C398635E} */
#ifndef __IID_IEcoObserver1
static const UGUID IID_IEcoObserver1 = {0x01, 0x10, {0xF2, 0x91, 0x29, 0x25, 0xB1, 0xA5, 0x42, 0xCA, 0x83, 0xC1, 0xB0, 0x62, 0xC3, 0x98, 0x63, 0x5E} };
#endif /* __IID_IEcoObserver1 */

typedef struct IEcoObserver1* IEcoObserver1Ptr_t;

typedef struct IEcoObserver1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoObserver1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoObserver1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoObserver1Ptr_t me);

    /* IEcoObserver1 */
    int16_t (ECOCALLMETHOD *Attach)(/* in */ IEcoObserver1Ptr_t me, /* in */ const UGUID* riid, /* in */ IEcoUnknownPtr_t pIObserver);
    int16_t (ECOCALLMETHOD *Detach)(/* in */ IEcoObserver1Ptr_t me, /* in */ const UGUID* riid, /* in */ IEcoUnknownPtr_t pIObserver);
    int16_t (ECOCALLMETHOD *Reset)(/* in */ IEcoObserver1Ptr_t me);
    IEcoUnknownPtr_t (ECOCALLMETHOD *Notify)(/* in */ IEcoObserver1Ptr_t me, /* in */ const UGUID* riid);

} IEcoObserver1VTbl, *IEcoObserver1VTblPtr;

interface IEcoObserver1 {
    struct IEcoObserver1VTbl *pVTbl;
} IEcoObserver1;

#endif /* __I_ECO_OBSERVER_1_H__ */
