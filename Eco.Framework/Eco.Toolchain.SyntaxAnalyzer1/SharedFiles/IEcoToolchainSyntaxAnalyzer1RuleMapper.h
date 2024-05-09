/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoTSA1RM
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoTSA1RM
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

#ifndef __I_ECO_TOOLCHAIN_SYNTAX_ANALYZER_1_RULE_MAPPER_H__
#define __I_ECO_TOOLCHAIN_SYNTAX_ANALYZER_1_RULE_MAPPER_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1.h"
#include "IEcoTree1.h"

/* IEcoToolchainSyntaxAnalyzer1RuleMapper IID = {3CED9830-5D73-41B4-B705-6E0B9C6E1111} */
#ifndef __IID_IEcoToolchainSyntaxAnalyzer1RuleMapper
static const UGUID IID_IEcoToolchainSyntaxAnalyzer1RuleMapper = {0x01, 0x10, {0x3C, 0xED, 0x98, 0x30, 0x5D, 0x73, 0x41, 0xB4, 0xB7, 0x05, 0x6E, 0x0B, 0x9C, 0x6E, 0x11, 0x11} };
#endif /* __IID_IEcoToolchainSyntaxAnalyzer1RuleMapper */

typedef struct IEcoToolchainSyntaxAnalyzer1RuleMapper* IEcoToolchainSyntaxAnalyzer1RuleMapperPtr_t;

typedef struct IEcoToolchainSyntaxAnalyzer1RuleMapperVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainSyntaxAnalyzer1RuleMapperPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainSyntaxAnalyzer1RuleMapperPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainSyntaxAnalyzer1RuleMapperPtr_t me);

    /* IEcoTSA1RM */
    int16_t (ECOCALLMETHOD *Init)(/* in */ IEcoToolchainSyntaxAnalyzer1RuleMapperPtr_t me, /* in */ IEcoToolchainAST1* pIAST);
    int16_t (ECOCALLMETHOD *Map)(/* in */ IEcoToolchainSyntaxAnalyzer1RuleMapperPtr_t me, /* in */ IEcoTree1Node* pINode, /* in */ IEcoTree1Node* pIPreviousNode, /* in */ IEcoToolchainAST1Scope** ppICurScope, /* out */ IEcoList1** pIObjectList);

} IEcoToolchainSyntaxAnalyzer1RuleMapperVTbl, *IEcoToolchainSyntaxAnalyzer1RuleMapperVTblPtr;

interface IEcoToolchainSyntaxAnalyzer1RuleMapper {
    struct IEcoToolchainSyntaxAnalyzer1RuleMapperVTbl *pVTbl;
} IEcoToolchainSyntaxAnalyzer1RuleMapper;

#endif /* __I_ECO_TOOLCHAIN_SYNTAX_ANALYZER_1_RULE_MAPPER_H__ */
