/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoMZEXE1NewExecutableHeader
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoMZEXE1NewExecutableHeader
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

#ifndef __I_ECO_MZ_EXE_1_NEW_EXECUTABLE_HEADER_H__
#define __I_ECO_MZ_EXE_1_NEW_EXECUTABLE_HEADER_H__

#include "IEcoBase1.h"

/* IEcoMZEXE1NewExecutableHeader IID = {0E1EB2EF-3F34-4F34-9007-457F05B455CA} */
#ifndef __IID_IEcoMZEXE1NewExecutableHeader
static const UGUID IID_IEcoMZEXE1NewExecutableHeader = { 0x01, 0x10, {0x0E, 0x1E, 0xB2, 0xEF, 0x3F, 0x34, 0x4F, 0x34, 0x90, 0x07, 0x45, 0x7F, 0x05, 0xB4, 0x55, 0xCA} };
#endif /* __IID_IEcoMZEXE1NewExecutableHeader */

typedef struct IEcoMZEXE1NewExecutableHeader* IEcoMZEXE1NewExecutableHeaderPtr_t;

typedef struct IEcoMZEXE1NewExecutableHeaderVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoMZEXE1NewExecutableHeaderPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoMZEXE1NewExecutableHeaderPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoMZEXE1NewExecutableHeaderPtr_t me);

    /* IEcoMZEXE1NewExecutableHeader */

} IEcoMZEXE1NewExecutableHeaderVTbl, *IEcoMZEXE1NewExecutableHeaderVTblPtr;

interface IEcoMZEXE1NewExecutableHeader {
    struct IEcoMZEXE1NewExecutableHeaderVTbl *pVTbl;
} IEcoMZEXE1NewExecutableHeader;

#endif /* __I_ECO_MZ_EXE_1_NEW_EXECUTABLE_HEADER_H__ */
