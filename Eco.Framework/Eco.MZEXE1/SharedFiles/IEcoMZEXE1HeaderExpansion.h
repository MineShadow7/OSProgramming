/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoMZEXE1HeaderExpansion
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoMZEXE1HeaderExpansion
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

#ifndef __I_ECO_MZ_EXE_1_HEADER_EXPANSION_H__
#define __I_ECO_MZ_EXE_1_HEADER_EXPANSION_H__

#include "IEcoBase1.h"

typedef struct MZEXE1_HEADER_EXPANSION_DESCRIPTOR {
    uint16_t Reserved1[4];
    uint16_t Identifier;
    uint16_t Information;
    uint16_t Reserved2[10];
    uint32_t FileAddressOfNewHeader;

} MZEXE1_HEADER_EXPANSION_DESCRIPTOR;

/* IEcoMZEXE1HeaderExpansion IID = {3F1B202D-A940-4B8A-B13F-0BFA663A885A} */
#ifndef __IID_IEcoMZEXE1HeaderExpansion
static const UGUID IID_IEcoMZEXE1HeaderExpansion = { 0x01, 0x10, {0x3F, 0x1B, 0x20, 0x2D, 0xA9, 0x40, 0x4B, 0x8A, 0xB1, 0x3F, 0x0B, 0xFA, 0x66, 0x3A, 0x88, 0x5A} };
#endif /* __IID_IEcoMZEXE1HeaderExpansion */

typedef struct IEcoMZEXE1HeaderExpansion* IEcoMZEXE1HeaderExpansionPtr_t;

typedef struct IEcoMZEXE1HeaderExpansionVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoMZEXE1HeaderExpansionPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoMZEXE1HeaderExpansionPtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoMZEXE1HeaderExpansionPtr_t me);

    /* IEcoMZEXE1HeaderExpansion */
    MZEXE1_HEADER_EXPANSION_DESCRIPTOR* (ECOCALLMETHOD *get_Descriptor)(/* in */ IEcoMZEXE1HeaderExpansionPtr_t me);
    void (ECOCALLMETHOD *set_Descriptor)(/* in */ IEcoMZEXE1HeaderExpansionPtr_t me, /* in */ MZEXE1_HEADER_EXPANSION_DESCRIPTOR* descriptor);

} IEcoMZEXE1HeaderExpansionVTbl, *IEcoMZEXE1HeaderExpansionVTblPtr;

interface IEcoMZEXE1HeaderExpansion {
    struct IEcoMZEXE1HeaderExpansionVTbl *pVTbl;
} IEcoMZEXE1HeaderExpansion;

#endif /* __I_ECO_MZ_EXE_1_HEADER_EXPANSION_H__ */
