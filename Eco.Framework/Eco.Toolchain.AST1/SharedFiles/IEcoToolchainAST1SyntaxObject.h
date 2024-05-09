/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1SyntaxObject
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1SyntaxObject
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_SYNTAX_OBJECT_H__
#define __I_ECO_TOOLCHAIN_AST_1_SYNTAX_OBJECT_H__

#include "IEcoBase1.h"
#include "IEcoToolchainLexicalAnalyzer1.h"

/* IEcoToolchainAST1SyntaxObject IID = {F0BC0E8A-A598-42E1-9676-801CA6B18F1D} */
#ifndef __IID_IEcoToolchainAST1SyntaxObject
static const UGUID IID_IEcoToolchainAST1SyntaxObject = {0x01, 0x10, {0xF0, 0xBC, 0x0E, 0x8A, 0xA5, 0x98, 0x42, 0xE1, 0x96, 0x76, 0x80, 0x1C, 0xA6, 0xB1, 0x8F, 0x1D} };
#endif /* __IID_IEcoToolchainAST1SyntaxObject */

typedef struct IEcoToolchainAST1SyntaxObject* IEcoToolchainAST1SyntaxObjectPtr_t;

typedef struct IEcoToolchainAST1SyntaxObjectVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1SyntaxObjectPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1SyntaxObjectPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1SyntaxObjectPtr_t me);

    /* IEcoToolchainAST1SyntaxObject */
    const UGUID* (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainAST1SyntaxObjectPtr_t me);
    IEcoToolchainLexicalAnalyzer1Token* (ECOCALLMETHOD *get_Token)(/* in */ IEcoToolchainAST1SyntaxObjectPtr_t me);
    char_t* (ECOCALLMETHOD *get_NameObject)(/* in */ IEcoToolchainAST1SyntaxObjectPtr_t me);
    IEcoToolchainAST1SyntaxObjectPtr_t (ECOCALLMETHOD *CopyToAST)(/* in */ IEcoToolchainAST1SyntaxObjectPtr_t me, /* in */ struct IEcoToolchainAST1* pIAST);

} IEcoToolchainAST1SyntaxObjectVTbl, *IEcoToolchainAST1SyntaxObjectVTblPtr;

interface IEcoToolchainAST1SyntaxObject {
    struct IEcoToolchainAST1SyntaxObjectVTbl *pVTbl;
} IEcoToolchainAST1SyntaxObject;

#endif /* __I_ECO_TOOLCHAIN_AST_1_SYNTAX_OBJECT_H__ */

