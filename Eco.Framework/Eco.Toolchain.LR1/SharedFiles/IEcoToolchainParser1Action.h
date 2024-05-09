/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainParser1Action
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию интерфейса IEcoToolchainParser1Action
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

#ifndef __I_ECO_TOOLCHAIN_PARSER_1_ACTION_H__
#define __I_ECO_TOOLCHAIN_PARSER_1_ACTION_H__

#include "IEcoBase1.h"
#include "IEcoToolchainBNF1.h"
#include "IEcoFSM1.h"

/* Action Type */
static const int16_t ECO_ACTION_PROCESSING_TYPE_ERROR = -1;
static const int16_t ECO_ACTION_PROCESSING_TYPE_ACCEPT = 0;
static const int16_t ECO_ACTION_PROCESSING_TYPE_SHIFT = 1;
static const int16_t ECO_ACTION_PROCESSING_TYPE_REDUCE = 2;
static const int16_t ECO_ACTION_PROCESSING_TYPE_CONFLICT = 3;

/* Proccesing Action Type */
static const int16_t ECO_PROCESSING_TYPE_ERROR = -1;
static const int16_t ECO_PROCESSING_TYPE_ACCEPT = 0;
static const int16_t ECO_PROCESSING_TYPE_WAITING = 1;
static const int16_t ECO_PROCESSING_TYPE_CONFLICT = 2;

static const int16_t ECO_PROCESSING_RESOLVE_TO_SHIFT = 0;
static const int16_t ECO_PROCESSING_RESOLVE_TO_REDUCE = 1;

/* Special symbols */
static char_t* ECO_PARSER_SPECIAL_SYMBOL_EMPTY = "~EMPTY";
static char_t* ECO_PARSER_SPECIAL_SYMBOL_END = "$END";
static char_t* ECO_PARSER_SPECIAL_SYMBOL_TEMPLATE = "#TEMPLATE";

/* IEcoToolchainParser1Action IID = {ED395A43-9C1B-450F-9165-0AD5DE50D33E} */
#ifndef __IID_IEcoToolchainParser1Action
static const UGUID IID_IEcoToolchainParser1Action = {0x01, 0x10, {0xED, 0x39, 0x5A, 0x43, 0x9C, 0x1B, 0x45, 0x0F, 0x91, 0x65, 0x0A, 0xD5, 0xDE, 0x50, 0xD3, 0x3E} };
#endif /* __IID_IEcoToolchainParser1Action */

typedef struct IEcoToolchainParser1Action* IEcoToolchainParser1ActionPtr_t;

typedef struct IEcoToolchainParser1ActionVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainParser1ActionPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainParser1ActionPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainParser1ActionPtr_t me);

    /* IEcoToolchainParser1Action */
    int16_t (ECOCALLMETHOD *get_Type)(/* in */ IEcoToolchainParser1ActionPtr_t me);
    uint32_t(ECOCALLMETHOD *get_ReduceCount)(/* in */ IEcoToolchainParser1ActionPtr_t me);
    IEcoToolchainBNF1Rule* (ECOCALLMETHOD *get_Rule)(/* in */ IEcoToolchainParser1ActionPtr_t me, uint32_t index);
    uint16_t (ECOCALLMETHOD *get_ruleSetId)(/* in */ IEcoToolchainParser1ActionPtr_t me, uint32_t index);
    IEcoFSM1State* (ECOCALLMETHOD *get_State)(/* in */ IEcoToolchainParser1ActionPtr_t me);
    char_t* (ECOCALLMETHOD *get_Description)(/* in */ IEcoToolchainParser1ActionPtr_t me);

} IEcoToolchainParser1ActionVTbl, *IEcoToolchainParser1ActionVTblPtr;

interface IEcoToolchainParser1Action {
    struct IEcoToolchainParser1ActionVTbl *pVTbl;
} IEcoToolchainParser1Action;

#endif /* __I_ECO_TOOLCHAIN_PARSER_1_ACTION_H__ */
