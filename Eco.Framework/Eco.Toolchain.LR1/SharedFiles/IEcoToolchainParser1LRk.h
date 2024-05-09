/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainParser1LRk
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию интерфейса IEcoToolchainParser1LRk
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

#ifndef __I_ECO_TOOLCHAIN_PARSER_1_LR_K_H__
#define __I_ECO_TOOLCHAIN_PARSER_1_LR_K_H__

#include "IEcoBase1.h"
#include "IEcoToolchainBNF1.h"
#include "IEcoMap1.h"

#include "IEcoToolchainParser1LRkItem.h"
#include "IEcoToolchainParser1ActionProcessing.h"
#include "IEcoDictionary1.h"
#include "IEcoData1.h"
#include "IEcoToolchainBNF1.h"
#include "IEcoFSM1.h"

/* IEcoToolchainParser1LRk IID = {1DB88464-66B1-4AC6-99B1-BBD4F2AE2F9B} */
#ifndef __IID_IEcoToolchainParser1LRk
static const UGUID IID_IEcoToolchainParser1LRk = {0x01, 0x10, {0x1D, 0xB8, 0x84, 0x64, 0x66, 0xB1, 0x4A, 0xC6, 0x99, 0xB1, 0xBB, 0xD4, 0xF2, 0xAE, 0x2F, 0x9B} };
#endif /* __IID_IEcoToolchainParser1LRk */

typedef struct IEcoToolchainParser1LRk* IEcoToolchainParser1LRkPtr_t;

typedef struct IEcoToolchainParser1LRkVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainParser1LRkPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainParser1LRkPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainParser1LRkPtr_t me);

    /* IEcoToolchainParser1LRk */
    int16_t (ECOCALLMETHOD *InitByGrammar)(/* in */ IEcoToolchainParser1LRkPtr_t me, /* in */ IEcoToolchainBNF1* pIGrammar, /* in */ int8_t lookahead);
    int8_t (ECOCALLMETHOD *get_Lookahead)(/* in */ IEcoToolchainParser1LRkPtr_t me);
    IEcoToolchainBNF1* (ECOCALLMETHOD *get_Grammar)(/* in */ IEcoToolchainParser1LRkPtr_t me);
    IEcoToolchainBNF1* (ECOCALLMETHOD *get_InternalGrammar)(/* in */ IEcoToolchainParser1LRkPtr_t me);
    IEcoMap1* (ECOCALLMETHOD *get_First)(/* in */ IEcoToolchainParser1LRkPtr_t me);
    IEcoMap1* (ECOCALLMETHOD *get_Follow)(/* in */ IEcoToolchainParser1LRkPtr_t me);
    IEcoList1* (ECOCALLMETHOD *get_ItemSets)(/* in */ IEcoToolchainParser1LRkPtr_t me);
    IEcoFSM1StateMachine* (ECOCALLMETHOD *get_StateMachine)(/* in */ IEcoToolchainParser1LRkPtr_t me);
    IEcoList1* (ECOCALLMETHOD *get_Reduce)(/* in */ IEcoToolchainParser1LRkPtr_t me, uint32_t stateId, char_t* nextTerm);
    IEcoData1Table* (ECOCALLMETHOD *get_ActionTable)(/* in */ IEcoToolchainParser1LRkPtr_t me);
    IEcoToolchainParser1ActionProcessing* (ECOCALLMETHOD *get_ActionProcessing)(/* in */ IEcoToolchainParser1LRkPtr_t me);

} IEcoToolchainParser1LRkVTbl, *IEcoToolchainParser1LRkVTblPtr;

interface IEcoToolchainParser1LRk {
    struct IEcoToolchainParser1LRkVTbl *pVTbl;
} IEcoToolchainParser1LRk;

#endif /* __I_ECO_TOOLCHAIN_PARSER_1_LR_K_H__ */
