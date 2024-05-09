﻿/*
 * <кодировка символов>
 *   Cyrillic (Windows) - Codepage 1251
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoLog1FileAffiliate
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoLog1FileAffiliate
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

#ifndef __I_ECO_LOG_1_FILE_AFFILIATE_H__
#define __I_ECO_LOG_1_FILE_AFFILIATE_H__

#include "IEcoBase1.h"
#include "IEcoLog1.h"

/* IEcoLog1FileAffiliate IID = {22B0B071-478D-461A-9F5B-5F40D4D79B7A} */
#ifndef __IID_IEcoLog1FileAffiliate
static const UGUID IID_IEcoLog1FileAffiliate = {0x01, 0x10, {0x22, 0xB0, 0xB0, 0x71, 0x47, 0x8D, 0x46, 0x1A, 0x9F, 0x5B, 0x5F, 0x40, 0xD4, 0xD7, 0x9B, 0x7A} };
#endif /* __IID_IEcoLog1FileAffiliate */

typedef struct IEcoLog1FileAffiliate* IEcoLog1FileAffiliatePtr_t;

typedef struct IEcoLog1FileAffiliateVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoLog1FileAffiliatePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoLog1FileAffiliatePtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoLog1FileAffiliatePtr_t me);

    /* IEcoLog1Affiliate */
    char_t* (ECOCALLMETHOD *get_Name)(/* in */ IEcoLog1FileAffiliatePtr_t me);
    IEcoLog1Layout* (ECOCALLMETHOD *get_Layout)(/* in */ IEcoLog1FileAffiliatePtr_t me);
    void (ECOCALLMETHOD *set_Layout)(/* in */ IEcoLog1FileAffiliatePtr_t me, /* in */ IEcoLog1Layout* pILayout);
    int16_t (ECOCALLMETHOD *Write)(/* in */ IEcoLog1FileAffiliatePtr_t me, /* in */ uint16_t level, /* in */ char_t* data, /* in */ uint32_t size);

    /* IEcoLog1FileAffiliate */
    char_t* (ECOCALLMETHOD *get_FileName)(/* in */ IEcoLog1FileAffiliatePtr_t me);
    void (ECOCALLMETHOD *set_FileName)(/* in */ IEcoLog1FileAffiliatePtr_t me, /* in */ char_t* name);

} IEcoLog1FileAffiliateVTbl, *IEcoLog1FileAffiliateVTblPtr;

interface IEcoLog1FileAffiliate {
    struct IEcoLog1FileAffiliateVTbl *pVTbl;
} IEcoLog1FileAffiliate;

#endif /* __I_ECO_LOG_1_FILE_AFFILIATE_H__ */
