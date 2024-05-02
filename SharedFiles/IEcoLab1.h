﻿/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoLab1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoLab1
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

#ifndef __I_ECOLAB1_H__
#define __I_ECOLAB1_H__

#include "IEcoBase1.h"

/* IEcoLab1 IID = {277FC00C-3562-4096-AFCF-C125B94EEC90} */
#ifndef __IID_IEcoLab1
static const UGUID IID_IEcoLab1 = {0x01, 0x10, 0x27, 0x7F, 0xC0, 0x0C, 0x35, 0x62, 0x40, 0x96, 0xAF, 0xCF, 0xC1, 0x25, 0xB9, 0x4E, 0xEC, 0x90};
#endif /* __IID_IEcoLab1 */

typedef struct IEcoLab1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ struct IEcoLab1* me, /* in */ const UGUID* riid, /* out */ void **ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ struct IEcoLab1* me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ struct IEcoLab1* me);

    /* IEcoLab1 */
    int16_t (ECOCALLMETHOD *MyFunction)(/* in */ struct IEcoLab1* me, /* in */ char_t* Name, /* out */ char_t** CopyName);


} IEcoLab1VTbl, *IEcoLab1VTblPtr;

typedef struct IQuickSortVTbl {

    /* IEcoUnknown */
    uint16_t (ECOCALLMETHOD *QueryInterface)(/* in */ struct IQuickSort* me, /* in */ const UGUID* riid, /* out */ void **ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ struct IQuickSort* me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ struct IQuickSort* me);

    /* IEcoLab1 */
    uint16_t (ECOCALLMETHOD *QuickSort)(/* in */ struct IQuickSort* me, /* in */ char_t* Name, /* out */ char_t** CopyName);


} IQuickSortVTbl, *IQuickSortVTblPtr;

interface IEcoLab1 {
    struct IEcoLab1VTbl *pVTbl;
} IEcoLab1;

interface IQuickSort{
    struct QuickSortLab1VTbl *pVTbl;
} IQuickSort;

#endif /* __I_ECOLAB1_H__ */
