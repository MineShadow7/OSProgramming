/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoMZEXE1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoMZEXE1
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

#ifndef __I_ECO_MZ_EXE_1_H__
#define __I_ECO_MZ_EXE_1_H__

#include "IEcoBase1.h"
#include "IEcoMZEXE1ExecutableHeader.h"
#include "IEcoMZEXE1HeaderExpansion.h"
#include "IEcoMZEXE1NewExecutableHeader.h"
#include "IEcoMZEXE1FreeFormatContent.h"
#include "IEcoMZEXE1RelocationEntry.h"
#include "IEcoMZEXE1ImageFile.h"

/* IEcoMZEXE1 IID = {2B322AD9-7E09-4946-AB83-3EF04909FE9C} */
#ifndef __IID_IEcoMZEXE1
static const UGUID IID_IEcoMZEXE1 = {0x01, 0x10, {0x2B, 0x32, 0x2A, 0xD9, 0x7E, 0x09, 0x49, 0x46, 0xAB, 0x83, 0x3E, 0xF0, 0x49, 0x09, 0xFE, 0x9C} };
#endif /* __IID_IEcoMZEXE1 */

typedef struct IEcoMZEXE1* IEcoMZEXE1Ptr_t;

typedef struct IEcoMZEXE1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoMZEXE1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoMZEXE1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoMZEXE1Ptr_t me);

    /* IEcoMZEXE1 */
    IEcoMZEXE1ImageFile* (ECOCALLMETHOD *readImageFile)(/* in */ IEcoMZEXE1Ptr_t me, /* in */ char_t* fileName);
    int16_t (ECOCALLMETHOD *writeImageFile)(/* in */ IEcoMZEXE1Ptr_t me, /* in */ IEcoMZEXE1ImageFile* pIImageFile, /* in */ char_t* fileName);

    IEcoMZEXE1ImageFile* (ECOCALLMETHOD *createImageFile)(/* in */ IEcoMZEXE1Ptr_t me);
    IEcoMZEXE1ExecutableHeader* (ECOCALLMETHOD *createExecutableHeader)(/* in */ IEcoMZEXE1Ptr_t me);
    IEcoMZEXE1HeaderExpansion* (ECOCALLMETHOD *createHeaderExpansion)(/* in */ IEcoMZEXE1Ptr_t me);
    IEcoMZEXE1NewExecutableHeader* (ECOCALLMETHOD *createNewExecutableHeader)(/* in */ IEcoMZEXE1Ptr_t me);
    IEcoMZEXE1RelocationEntry* (ECOCALLMETHOD *createRelocationEntry)(/* in */ IEcoMZEXE1Ptr_t me);
    IEcoMZEXE1FreeFormatContent* (ECOCALLMETHOD *createFreeFormatContent)(/* in */ IEcoMZEXE1Ptr_t me);

} IEcoMZEXE1VTbl, *IEcoMZEXE1VTblPtr;

interface IEcoMZEXE1 {
    struct IEcoMZEXE1VTbl *pVTbl;
} IEcoMZEXE1;


#endif /* __I_ECO_MZ_EXE_1_H__ */
