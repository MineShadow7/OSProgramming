/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainSyntaxAnalyzer1Parser
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainSyntaxAnalyzer1Parser
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

#ifndef __I_ECO_TOOLCHAIN_SYNTAX_ANALYZER_1_PARSER_H__
#define __I_ECO_TOOLCHAIN_SYNTAX_ANALYZER_1_PARSER_H__

#include "IEcoBase1.h"
#include "IdEcoToolchainAST1.h"
#include "IEcoToolchainParser1Action.h"
#include "IEcoToolchainSyntaxAnalyzer1RuleMapper.h"
#include "IEcoToolchainLexicalAnalyzer1Token.h"
#include "IEcoToolchainSyntaxAnalyzer1ConflictResolver.h"

/* IEcoToolchainSyntaxAnalyzer1Parser IID = {3CED9830-5D73-41B4-B705-6E0B9C6E108C} */
#ifndef __IID_IEcoToolchainSyntaxAnalyzer1Parser
static const UGUID IID_IEcoToolchainSyntaxAnalyzer1Parser = {0x01, 0x10, {0x3C, 0xED, 0x98, 0x30, 0x5D, 0x73, 0x41, 0xB4, 0xB7, 0x05, 0x6E, 0x0B, 0x9C, 0x6E, 0x10, 0x8C} };
#endif /* __IID_IEcoToolchainSyntaxAnalyzer1Parser */

typedef struct IEcoToolchainSyntaxAnalyzer1Parser* IEcoToolchainSyntaxAnalyzer1ParserPtr_t;

typedef struct IEcoToolchainSyntaxAnalyzer1ParserVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainSyntaxAnalyzer1ParserPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainSyntaxAnalyzer1ParserPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainSyntaxAnalyzer1ParserPtr_t me);

    /* IEcoToolchainSyntaxAnalyzer1Parser */
    IEcoToolchainParser1Action* (ECOCALLMETHOD *Parse)(/* in */ IEcoToolchainSyntaxAnalyzer1ParserPtr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token);
    int16_t (ECOCALLMETHOD *RuleMapping)(/* in */ IEcoToolchainSyntaxAnalyzer1ParserPtr_t me, /* in */ char_t* ruleName, /* in */ IEcoToolchainSyntaxAnalyzer1RuleMapperPtr_t pIMapper);
    int16_t(ECOCALLMETHOD *SetConflictResolver)(/* in */ IEcoToolchainSyntaxAnalyzer1ParserPtr_t me, /* in */ IEcoToolchainSyntaxAnalyzer1ConflictResolver* pIResolver);
    IEcoUnknown* (ECOCALLMETHOD *get_Algorithm)(/* in */ IEcoToolchainSyntaxAnalyzer1ParserPtr_t me);
    IEcoToolchainAST1* (ECOCALLMETHOD *get_AST)(/* in */ IEcoToolchainSyntaxAnalyzer1ParserPtr_t me);

} IEcoToolchainSyntaxAnalyzer1ParserVTbl, *IEcoToolchainSyntaxAnalyzer1ParserVTblPtr;

interface IEcoToolchainSyntaxAnalyzer1Parser {
    struct IEcoToolchainSyntaxAnalyzer1ParserVTbl *pVTbl;
} IEcoToolchainSyntaxAnalyzer1Parser;

#endif /* __I_ECO_TOOLCHAIN_SYNTAX_ANALYZER_1_PARSER_H__ */
