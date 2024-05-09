/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainSyntaxAnalyzer1ConflictResolver
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainSyntaxAnalyzer1ConflictResolver
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

#ifndef __I_ECO_TOOLCHAIN_SYNTAX_ANALYZER_1_CONFLICT_RESOLVER_H__
#define __I_ECO_TOOLCHAIN_SYNTAX_ANALYZER_1_CONFLICT_RESOLVER_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1.h"
#include "IEcoToolchainLexicalAnalyzer1Token.h"
#include "IEcoToolchainParser1Action.h"

/* IEcoToolchainSyntaxAnalyzer1ConflictResolver IID = {3CED9830-5D73-41B4-B705-6E0B9C6E0567} */
#ifndef __IID_IEcoToolchainSyntaxAnalyzer1ConflictResolver
static const UGUID IID_IEcoToolchainSyntaxAnalyzer1ConflictResolver = {0x01, 0x10, {0x3C, 0xED, 0x98, 0x30, 0x5D, 0x73, 0x41, 0xB4, 0xB7, 0x05, 0x6E, 0x0B, 0x9C, 0x6E, 0x05, 0x67} };
#endif /* __IID_IEcoToolchainSyntaxAnalyzer1ConflictResolver */

typedef struct IEcoToolchainSyntaxAnalyzer1ConflictResolver* IEcoToolchainSyntaxAnalyzer1ConflictResolverPtr_t;

typedef struct IEcoToolchainSyntaxAnalyzer1ConflictResolverVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainSyntaxAnalyzer1ConflictResolverPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainSyntaxAnalyzer1ConflictResolverPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainSyntaxAnalyzer1ConflictResolverPtr_t me);

    /* IEcoToolchainSyntaxAnalyzer1ConflictResolver */
    int16_t (ECOCALLMETHOD *Init)(/* in */ IEcoToolchainSyntaxAnalyzer1ConflictResolverPtr_t me, /* in */ IEcoToolchainAST1* pIAST);
    int16_t(ECOCALLMETHOD *Resolve)(/* in */ IEcoToolchainSyntaxAnalyzer1ConflictResolverPtr_t me,
                                      /* in */ IEcoToolchainLexicalAnalyzer1Token* pIPrevToken, /* in */ IEcoToolchainLexicalAnalyzer1Token* pICurToken, /* in */ IEcoToolchainParser1Action* pIAction, /* in */ IEcoToolchainAST1Scope* pIScope,
                                      /* out */ int16_t* operation, /* out */ int16_t* reduceCount);

} IEcoToolchainSyntaxAnalyzer1ConflictResolverVTbl, *IEcoToolchainSyntaxAnalyzer1ConflictResolverVTblPtr;

interface IEcoToolchainSyntaxAnalyzer1ConflictResolver {
    struct IEcoToolchainSyntaxAnalyzer1ConflictResolverVTbl *pVTbl;
} IEcoToolchainSyntaxAnalyzer1ConflictResolver;

#endif /* __I_ECO_TOOLCHAIN_SYNTAX_ANALYZER_1_CONFLICT_RESOLVER_H__ */
