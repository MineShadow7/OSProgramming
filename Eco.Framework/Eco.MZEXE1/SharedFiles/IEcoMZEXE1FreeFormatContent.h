/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoMZEXE1FreeFormatContent
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoMZEXE1FreeFormatContent
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

#ifndef __I_ECO_MZ_EXE_1_FREE_FORMAT_CONTENT_H__
#define __I_ECO_MZ_EXE_1_FREE_FORMAT_CONTENT_H__

#include "IEcoBase1.h"

/* IEcoMZEXE1FreeFormatContent IID = {8AFCFA97-51F1-49B7-8490-6FD7BF5044D0} */
#ifndef __IID_IEcoMZEXE1FreeFormatContent
static const UGUID IID_IEcoMZEXE1FreeFormatContent = { 0x01, 0x10, {0x8A, 0xFC, 0xFA, 0x97, 0x51, 0xF1, 0x49, 0xB7, 0x84, 0x90, 0x6F, 0xD7, 0xBF, 0x50, 0x44, 0xD0} };
#endif /* __IID_IEcoMZEXE1FreeFormatContent */

typedef struct IEcoMZEXE1FreeFormatContent* IEcoMZEXE1FreeFormatContentPtr_t;

typedef struct IEcoMZEXE1FreeFormatContentVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoMZEXE1FreeFormatContentPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoMZEXE1FreeFormatContentPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoMZEXE1FreeFormatContentPtr_t me);

    /* IEcoMZEXE1FreeFormatContent */
    byte_t* (ECOCALLMETHOD *Alloc)(/* in */ IEcoMZEXE1FreeFormatContentPtr_t me, /* in */ uint32_t size);
    void (ECOCALLMETHOD *Free)(/* in */ IEcoMZEXE1FreeFormatContentPtr_t me);
    uint32_t (ECOCALLMETHOD *get_Size)(/* in */ IEcoMZEXE1FreeFormatContentPtr_t me);
    byte_t* (ECOCALLMETHOD *get_Content)(/* in */ IEcoMZEXE1FreeFormatContentPtr_t me);

} IEcoMZEXE1FreeFormatContentVTbl, *IEcoMZEXE1FreeFormatContentVTblPtr;

interface IEcoMZEXE1FreeFormatContent {
    struct IEcoMZEXE1FreeFormatContentVTbl *pVTbl;
} IEcoMZEXE1FreeFormatContent;

#endif /* __I_ECO_MZ_EXE_1_FREE_FORMAT_CONTENT_H__ */
