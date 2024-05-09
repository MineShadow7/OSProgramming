/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoSystem1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию интерфейса IEcoSystem первого поколения
 *   Интерфейс IEcoSystem является основной точкой инициализации инфраструктуры Eco,
 *   построенной по технологии COM, для исользования в приложениях и библиотеках
 * 
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2016 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __I_ECO_SYSTEM_1_H__
#define __I_ECO_SYSTEM_1_H__

#include "IEcoBase1.h"

/* IEcoSystem1 GID = 00000000-0000-0000-0000-000000000100 */
#ifndef __GID_IEcoSystem1
static const UGUID GID_IEcoSystem1 = { 0x01, 0x10, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00} };
#endif /* __GID_IEcoSystem1 */

#ifndef ECO_I_ECO_SYSTEM_1_PTR_T_DEFINED
typedef struct IEcoSystem1* IEcoSystem1Ptr_t;
#define ECO_I_ECO_SYSTEM_1_PTR_T_DEFINED
#endif

typedef struct IEcoSystem1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoSystem1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoSystem1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoSystem1Ptr_t me);

    /* IEcoSystem1 */
    void (ECOCALLMETHOD *set_Data)(/* in */ IEcoSystem1Ptr_t me, /* in */ voidptr_t pv);
    void* (ECOCALLMETHOD *get_Data)(/* in */ IEcoSystem1Ptr_t me);

} IEcoSystem1VTbl, *IEcoSystem1VTblPtr;

interface IEcoSystem1 {
    struct IEcoSystem1VTbl *pVTbl;
} IEcoSystem1;

#endif /* __I_ECO_SYSTEM_1_H__ */
