/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoQueue1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию интерфейсов IEcoQueue1
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2016 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __I_ECO_QUEUE_1_H__
#define __I_ECO_QUEUE_1_H__

#include "IEcoBase1.h"

/* IEcoQueue1 IID = {287E5923-1366-46A3-A2D7-EAEAFD97068E} */
#ifndef __IID_IEcoQueue1
static const UGUID IID_IEcoQueue1 = {0x01, 0x10, {0x28, 0x7E, 0x59, 0x23, 0x13, 0x66, 0x46, 0xA3, 0xA2, 0xD7, 0xEA, 0xEA, 0xFD, 0x97, 0x06, 0x8E} };
#endif /* __IID_IEcoQueue1 */

typedef struct IEcoQueue1* IEcoQueue1Ptr_t;

typedef struct IEcoQueue1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoQueue1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoQueue1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoQueue1Ptr_t me);

    /* IEcoQueue1 */
    uint32_t (ECOCALLMETHOD *Count)(/* in */ IEcoQueue1Ptr_t me);
    voidptr_t (ECOCALLMETHOD *Peek)(/* in */ IEcoQueue1Ptr_t me);
    voidptr_t (ECOCALLMETHOD *Dequeue)(/* in */ IEcoQueue1Ptr_t me);
    void (ECOCALLMETHOD *Enqueue)(/* in */ IEcoQueue1Ptr_t me, voidptr_t obj);
    void (ECOCALLMETHOD *Clear)(/* in */ IEcoQueue1Ptr_t me);

} IEcoQueue1VTbl, *IEcoQueue1VTblPtr;

interface IEcoQueue1 {
    struct IEcoQueue1VTbl *pVTbl;
} IEcoQueue1;

#endif /* __I_ECO_QUEUE_1_H__ */

