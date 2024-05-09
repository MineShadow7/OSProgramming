/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoMZEXE1ImageFile
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoMZEXE1ImageFile
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

#ifndef __I_ECO_MZ_EXE_1_IMAGE_FILE_H__
#define __I_ECO_MZ_EXE_1_IMAGE_FILE_H__

#include "IEcoBase1.h"
#include "IEcoList1.h"
#include "IEcoMZEXE1ExecutableHeader.h"
#include "IEcoMZEXE1HeaderExpansion.h"
#include "IEcoMZEXE1FreeFormatContent.h"

/* IEcoMZEXE1ImageFile IID = {EA37BB00-E6C1-4968-9C50-909AC5BB4F53} */
#ifndef __IID_IEcoMZEXE1ImageFile
static const UGUID IID_IEcoMZEXE1ImageFile = { 0x01, 0x10, {0xEA, 0x37, 0xBB, 0x00, 0xE6, 0xC1, 0x49, 0x68, 0x9C, 0x50, 0x90, 0x9A, 0xC5, 0xBB, 0x4F, 0x53} };
#endif /* __IID_IEcoMZEXE1ImageFile */

typedef struct IEcoMZEXE1ImageFile* IEcoMZEXE1ImageFilePtr_t;

typedef struct IEcoMZEXE1ImageFileVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoMZEXE1ImageFilePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoMZEXE1ImageFilePtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoMZEXE1ImageFilePtr_t me);

    /* IEcoMZEXE1ImageFile */
    IEcoMZEXE1ExecutableHeader* (ECOCALLMETHOD *get_ExecutableHeader)(/* in */ IEcoMZEXE1ImageFilePtr_t me);
    void (ECOCALLMETHOD *set_ExecutableHeader)(/* in */ IEcoMZEXE1ImageFilePtr_t me, /* in */ IEcoMZEXE1ExecutableHeader* pIExecutableHeader);
    IEcoList1* (ECOCALLMETHOD *get_Relocations)(/* in */ IEcoMZEXE1ImageFilePtr_t me);
    void (ECOCALLMETHOD *set_Relocations)(/* in */ IEcoMZEXE1ImageFilePtr_t me, /* in */ IEcoList1* pIRelocations);
    IEcoMZEXE1HeaderExpansion* (ECOCALLMETHOD *get_HeaderExpansion)(/* in */ IEcoMZEXE1ImageFilePtr_t me);
    void (ECOCALLMETHOD *set_HeaderExpansion)(/* in */ IEcoMZEXE1ImageFilePtr_t me, /* in */ IEcoMZEXE1HeaderExpansion* pIHeaderExpansion);
    IEcoMZEXE1FreeFormatContent* (ECOCALLMETHOD *get_Content)(/* in */ IEcoMZEXE1ImageFilePtr_t me);
    void (ECOCALLMETHOD *set_Content)(/* in */ IEcoMZEXE1ImageFilePtr_t me, /* in */ IEcoMZEXE1FreeFormatContent* pIContent);
} IEcoMZEXE1ImageFileVTbl, *IEcoMZEXE1ImageFileVTblPtr;

interface IEcoMZEXE1ImageFile {
    struct IEcoMZEXE1ImageFileVTbl *pVTbl;
} IEcoMZEXE1ImageFile;

#endif /* __I_ECO_MZ_EXE_1_IMAGE_FILE_H__ */
