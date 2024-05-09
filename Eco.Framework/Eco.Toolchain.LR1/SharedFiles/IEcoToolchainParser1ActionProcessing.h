﻿/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainParser1ActionProcessing
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию интерфейса IEcoToolchainParser1ActionProcessing
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

#ifndef __I_ECO_TOOLCHAIN_PARSER_1_ACTION_PROCESSING_H__
#define __I_ECO_TOOLCHAIN_PARSER_1_ACTION_PROCESSING_H__

#include "IEcoBase1.h"
#include "IEcoStack1.h"
#include "IEcoFSM1.h"
#include "IEcoToolchainParser1Action.h"

/* IEcoToolchainParser1ActionProcessing IID = {8B6D924C-3257-433B-90AF-59569E131F37} */
#ifndef __IID_IEcoToolchainParser1ActionProcessing
static const UGUID IID_IEcoToolchainParser1ActionProcessing = {0x01, 0x10, {0x8B, 0x6D, 0x92, 0x4C, 0x32, 0x57, 0x43, 0x3B, 0x90, 0xAF, 0x59, 0x56, 0x9E, 0x13, 0x1F, 0x37} };
#endif /* __IID_IEcoToolchainParser1ActionProcessing */

typedef struct IEcoToolchainParser1ActionProcessing* IEcoToolchainParser1ActionProcessingPtr_t;

typedef struct IEcoToolchainParser1ActionProcessingVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainParser1ActionProcessingPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainParser1ActionProcessingPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainParser1ActionProcessingPtr_t me);

    /* IEcoToolchainParser1ActionProcessing */
    IEcoStack1* (ECOCALLMETHOD *get_Stack)(/* in */ IEcoToolchainParser1ActionProcessingPtr_t me);
    IEcoFSM1State* (ECOCALLMETHOD *Reset)(/* in */ IEcoToolchainParser1ActionProcessingPtr_t me);
    IEcoFSM1State* (ECOCALLMETHOD *get_CurrentState)(/* in */ IEcoToolchainParser1ActionProcessingPtr_t me, /* out */ int16_t* StateType);
    IEcoToolchainParser1Action* (ECOCALLMETHOD *InvokeById)(/* in */ IEcoToolchainParser1ActionProcessingPtr_t me, /* in */ int16_t Id);
    IEcoToolchainParser1Action* (ECOCALLMETHOD *InvokeByName)(/* in */ IEcoToolchainParser1ActionProcessingPtr_t me, /* in */ char_t* Name);
    IEcoToolchainParser1Action* (ECOCALLMETHOD *ResolveConflict)(/* in */ IEcoToolchainParser1ActionProcessingPtr_t me, /* in */ int16_t resolveType, uint16_t index);

} IEcoToolchainParser1ActionProcessingVTbl, *IEcoToolchainParser1ActionProcessingVTblPtr;

interface IEcoToolchainParser1ActionProcessing {
    struct IEcoToolchainParser1ActionProcessingVTbl *pVTbl;
} IEcoToolchainParser1ActionProcessing;

#endif /* __I_ECO_TOOLCHAIN_PARSER_1_ACTION_PROCESSING_H__ */
