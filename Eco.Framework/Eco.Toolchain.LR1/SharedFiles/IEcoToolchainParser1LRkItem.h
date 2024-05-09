/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainParser1LRkItem
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию интерфейса IEcoToolchainParser1LRkItem
 * </описание>
 *
 * <ссылка>
 * </ссылка>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __I_ECO_TOOLCHAIN_PARSER_1_LR_K_ITEM_H__
#define __I_ECO_TOOLCHAIN_PARSER_1_LR_K_ITEM_H__

#include "IEcoBase1.h"
#include "IEcoToolchainBNF1.h"
#include "IEcoSet1.h"

/* IEcoToolchainParser1LRkItem IID = {70527837-F4DD-4BFB-90B5-37A41393443C} */
#ifndef __IID_IEcoToolchainParser1LRkItem
static const UGUID IID_IEcoToolchainParser1LRkItem = { 0x01, 0x10, {0x70, 0x52, 0x78, 0x37, 0xF4, 0xDD, 0x4B, 0xFB, 0x90, 0xB5, 0x37, 0xA4, 0x13, 0x93, 0x44, 0x3C} };
#endif /* __IID_IEcoToolchainParser1LRkItem */

typedef struct IEcoToolchainParser1LRkItem* IEcoToolchainParser1LRkItemPtr_t;

/* одно правило в некотором состоянии в парсере */
typedef struct IEcoToolchainParser1LRkItemVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainParser1LRkItemPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainParser1LRkItemPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainParser1LRkItemPtr_t me);

    /* IEcoToolchainParser1LRkItem */
    char_t* (ECOCALLMETHOD *get_Description)(/* in */ IEcoToolchainParser1LRkItemPtr_t me);
    int16_t (ECOCALLMETHOD *get_MarkerPosition)(/* in */ IEcoToolchainParser1LRkItemPtr_t me);
    int32_t (ECOCALLMETHOD *get_RuleSetId)(/* in */ IEcoToolchainParser1LRkItemPtr_t me);
    IEcoToolchainBNF1Rule* (ECOCALLMETHOD *get_Rule)(/* in */ IEcoToolchainParser1LRkItemPtr_t me);
    IEcoSet1* (ECOCALLMETHOD *get_NextTerms)(/* in */ IEcoToolchainParser1LRkItemPtr_t me);
    int16_t (ECOCALLMETHOD *AddNextTermSet)(/* in */ IEcoToolchainParser1LRkItemPtr_t me, IEcoSet1* pINewNextTerms);
    int16_t(ECOCALLMETHOD *AddNextTerm)(/* in */ IEcoToolchainParser1LRkItemPtr_t me, char_t* nextTerm);

} IEcoToolchainParser1LRkItemVTbl, *IEcoToolchainParser1LRkItemVTblPtr;

interface IEcoToolchainParser1LRkItem {
    struct IEcoToolchainParser1LRkItemVTbl *pVTbl;
} IEcoToolchainParser1LRkItem;

#endif /* __I_ECO_TOOLCHAIN_PARSER_1_LR_K_ITEM_H__ */
