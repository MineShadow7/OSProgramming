/*
 * <кодировка символов>
 *   Cyrillic (Windows) - Codepage 1251
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoVisitor1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoVisitor1
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

#ifndef __I_ECO_VISITOR_1_H__
#define __I_ECO_VISITOR_1_H__

#include "IEcoBase1.h"

/* IEcoVisitor1 IID = {A6105EF4-C95F-47F0-BA18-7C6EB7D204D2} */
#ifndef __IID_IEcoVisitor1
static const UGUID IID_IEcoVisitor1 = {0x01, 0x10, {0xA6, 0x10, 0x5E, 0xF4, 0xC9, 0x5F, 0x47, 0xF0, 0xBA, 0x18, 0x7C, 0x6E, 0xB7, 0xD2, 0x04, 0xD2} };
#endif /* __IID_IEcoVisitor1 */

typedef struct IEcoVisitor1* IEcoVisitor1Ptr_t;

typedef struct IEcoVisitor1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoVisitor1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoVisitor1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoVisitor1Ptr_t me);

    /* IEcoVisitor1 */
    int16_t (ECOCALLMETHOD *Accept)(/* in */ IEcoVisitor1Ptr_t me, /* in */ IEcoUnknown* pIUnk);

} IEcoVisitor1VTbl, *IEcoVisitor1VTblPtr;

interface IEcoVisitor1 {
    struct IEcoVisitor1VTbl *pVTbl;
} IEcoVisitor1;

/* IEcoVisitor1Element IID = {9DB918D9-2A8F-45E8-B124-2AB4546DF853} */
#ifndef __IID_IEcoVisitor1Element
static const GUID128 IID_IEcoVisitor1Element = {0x01, 0x10, {0x9D, 0xB9, 0x18, 0xD9, 0x2A, 0x8F, 0x45, 0xE8, 0xB1, 0x24, 0x2A, 0xB4, 0x54, 0x6D, 0xF8, 0x53} };
#endif /* __IID_IEcoVisitor1Element */

typedef struct IEcoVisitor1Element* IEcoVisitor1ElementPtr_t;

typedef struct IEcoVisitor1ElementVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoVisitor1ElementPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoVisitor1ElementPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoVisitor1ElementPtr_t me);

    /* IEcoVisitor1Element */
    void (ECOCALLMETHOD *Visit)(/* in */ IEcoVisitor1ElementPtr_t me, /* in */ IEcoVisitor1* visitor);

} IEcoVisitor1ElementVTbl, *IEcoVisitor1ElementVTblPtr;

interface IEcoVisitor1Element {
    struct IEcoVisitor1ElementVTbl *pVTbl;
} IEcoVisitor1Element;

#endif /* __I_ECO_VISITOR_1_H__ */
