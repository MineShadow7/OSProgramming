/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoData1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoData1
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

#ifndef __I_ECO_DATA_1_H__
#define __I_ECO_DATA_1_H__

#include "IEcoBase1.h"
#include "IEcoData1Table.h"

/* IEcoData1 IID = {6918BAC7-AA66-45D6-AC44-BBC2B164FD93} */
#ifndef __IID_IEcoData1
static const UGUID IID_IEcoData1 = {0x01, 0x10, {0x69, 0x18, 0xBA, 0xC7, 0xAA, 0x66, 0x45, 0xD6, 0xAC, 0x44, 0xBB, 0xC2, 0xB1, 0x64, 0xFD, 0x93} };
#endif /* __IID_IEcoData1 */

typedef struct IEcoData1* IEcoData1Ptr_t;

typedef struct IEcoData1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoData1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoData1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoData1Ptr_t me);

    /* IEcoData1 */
    IEcoData1Table* (ECOCALLMETHOD *CreateTable)(/* in */ IEcoData1Ptr_t me, /* in */ char_t* Name);

} IEcoData1VTbl, *IEcoData1VTblPtr;

interface IEcoData1 {
    struct IEcoData1VTbl *pVTbl;
} IEcoData1;

#endif /* __I_ECO_DATA_1_H__ */
