/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainLexicalAnalyzer1Token
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainLexicalAnalyzer1Token
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

#ifndef __I_ECO_TOOLCHAIN_LEXICAL_ANALYZER_1_TOKEN_H__
#define __I_ECO_TOOLCHAIN_LEXICAL_ANALYZER_1_TOKEN_H__

#include "IEcoBase1.h"

/* IEcoToolchainLexicalAnalyzer1Token IID = {56A98F9C-971E-489B-8079-D436A48AF8FC} */
#ifndef __IID_IEcoToolchainLexicalAnalyzer1Token
static const UGUID IID_IEcoToolchainLexicalAnalyzer1Token = {0x01, 0x10, {0x56, 0xA9, 0x8F, 0x9C, 0x97, 0x1E, 0x48, 0x9B, 0x80, 0x79, 0xD4, 0x36, 0xA4, 0x8A, 0xF8, 0xFC} };
#endif /* __IID_IEcoToolchainLexicalAnalyzer1Token */

typedef struct IEcoToolchainLexicalAnalyzer1Token* IEcoToolchainLexicalAnalyzer1TokenPtr_t;

typedef struct IEcoToolchainLexicalAnalyzer1TokenVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainLexicalAnalyzer1TokenPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainLexicalAnalyzer1TokenPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainLexicalAnalyzer1TokenPtr_t me);

    /* IEcoToolchainLexicalAnalyzer1Token */
    int16_t (ECOCALLMETHOD *get_Type)(/* in */ IEcoToolchainLexicalAnalyzer1TokenPtr_t me);        /* правило в грамматике */
    char_t* (ECOCALLMETHOD *get_Lexeme)(/* in */ IEcoToolchainLexicalAnalyzer1TokenPtr_t me);      /* лексема */
    void (ECOCALLMETHOD *set_Tag)(/* in */ IEcoToolchainLexicalAnalyzer1TokenPtr_t me, /* in */ char_t* tag);
    char_t* (ECOCALLMETHOD *get_Tag)(/* in */ IEcoToolchainLexicalAnalyzer1TokenPtr_t me);         /* пользовательские параметры, например для расскарашивания текста */
    char_t* (ECOCALLMETHOD *get_Description)(/* in */ IEcoToolchainLexicalAnalyzer1TokenPtr_t me); /* описание, из правил */
    uint32_t (ECOCALLMETHOD *get_Line)(/* in */ IEcoToolchainLexicalAnalyzer1TokenPtr_t me);       /* информация о строке */
    uint32_t (ECOCALLMETHOD *get_Column)(/* in */ IEcoToolchainLexicalAnalyzer1TokenPtr_t me);     /* информация о колонке */
    char_t* (ECOCALLMETHOD *get_Source)(/* in */ IEcoToolchainLexicalAnalyzer1TokenPtr_t me);      /* имя файла, номер буфера */
    uint32_t (ECOCALLMETHOD *get_Position)(/* in */ IEcoToolchainLexicalAnalyzer1TokenPtr_t me);   /* позиция в файле, смещение в буфере */
    uint16_t (ECOCALLMETHOD *get_Length)(/* in */ IEcoToolchainLexicalAnalyzer1TokenPtr_t me);     /* длина лексемы */
    bool_t (ECOCALLMETHOD *IsEOF)(/* in */ IEcoToolchainLexicalAnalyzer1TokenPtr_t me);            /* специальный токен - конец файла */
    bool_t (ECOCALLMETHOD *IsError)(/* in */ IEcoToolchainLexicalAnalyzer1TokenPtr_t me);          /* специальный токен - ошибка (состояние ловушки) */

} IEcoToolchainLexicalAnalyzer1TokenVTbl, *IEcoToolchainLexicalAnalyzer1TokenVTblPtr;

interface IEcoToolchainLexicalAnalyzer1Token {
    struct IEcoToolchainLexicalAnalyzer1TokenVTbl *pVTbl;
} IEcoToolchainLexicalAnalyzer1Token;

#endif /* __I_ECO_TOOLCHAIN_LEXICAL_ANALYZER_1_TOKEN_H__ */
