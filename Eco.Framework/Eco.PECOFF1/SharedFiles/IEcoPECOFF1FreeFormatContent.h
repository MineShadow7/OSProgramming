/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoPECOFF1FreeFormatContent
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoPECOFF1FreeFormatContent
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

#ifndef __I_ECO_PE_COFF_1_FREE_FORMAT_CONTENT_H__
#define __I_ECO_PE_COFF_1_FREE_FORMAT_CONTENT_H__

#include "IEcoBase1.h"

/* IEcoPECOFF1FreeFormatContent IID = {E532E7FC-3578-4E61-A528-D5397B0F8D98} */
#ifndef __IID_IEcoPECOFF1FreeFormatContent
static const UGUID IID_IEcoPECOFF1FreeFormatContent = { 0x01, 0x10, {0xE5, 0x32, 0xE7, 0xFC, 0x35, 0x78, 0x4E, 0x61, 0xA5, 0x28, 0xD5, 0x39, 0x7B, 0x0F, 0x8D, 0x98} };
#endif /* __IID_IEcoPECOFF1FreeFormatContent */

typedef struct IEcoPECOFF1FreeFormatContent* IEcoPECOFF1FreeFormatContentPtr_t;

typedef struct IEcoPECOFF1FreeFormatContentVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoPECOFF1FreeFormatContentPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoPECOFF1FreeFormatContentPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoPECOFF1FreeFormatContentPtr_t me);

    /* IEcoPECOFF1FreeFormatContent */
    byte_t* (ECOCALLMETHOD *Alloc)(/* in */ IEcoPECOFF1FreeFormatContentPtr_t me, /* in */ uint32_t size);
    void (ECOCALLMETHOD *Free)(/* in */ IEcoPECOFF1FreeFormatContentPtr_t me);
    uint32_t (ECOCALLMETHOD *get_Size)(/* in */ IEcoPECOFF1FreeFormatContentPtr_t me);
    byte_t* (ECOCALLMETHOD *get_Content)(/* in */ IEcoPECOFF1FreeFormatContentPtr_t me);

} IEcoPECOFF1FreeFormatContentVTbl, *IEcoPECOFF1FreeFormatContentVTblPtr;

interface IEcoPECOFF1FreeFormatContent {
    struct IEcoPECOFF1FreeFormatContentVTbl *pVTbl;
} IEcoPECOFF1FreeFormatContent;

#endif /* __I_ECO_PE_COFF_1_FREE_FORMAT_CONTENT_H__ */
