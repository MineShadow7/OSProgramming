/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoBNF1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию интерфейса IEcoBNF1,
 *   согластно стандарту разработанному группой Network Working Group
 * </описание>
 *
 * <ссылка>
 *   Стандарт: Augmented BNF for Syntax Specifications: ABNF
 *             RFC: 5234
 *             January 2008
 *             Network Working Group
 *             file:///rfc5234.pdf
 * </ссылка>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __I_ECO_TOOLCHAIN_BACKUS_NAUR_FORM_1_H__
#define __I_ECO_TOOLCHAIN_BACKUS_NAUR_FORM_1_H__

#include "IEcoBase1.h"
#include "IEcoList1.h"

/* IEcoToolchainBNF1Element IID = {716BE46A-AEB2-4C65-8A0F-B914B81E9F18} */
#ifndef __IID_IEcoToolchainBNF1Element
static const UGUID IID_IEcoToolchainBNF1Element = {0x01, 0x10, {0x71, 0x6B, 0xE4, 0x6A, 0xAE, 0xB2, 0x4C, 0x65, 0x8A, 0x0F, 0xB9, 0x14, 0xB8, 0x1E, 0x9F, 0x18} };
#endif /* __IID_IEcoToolchainBNF1Element */

typedef struct IEcoToolchainBNF1Element* IEcoToolchainBNF1ElementPtr_t;

typedef struct IEcoToolchainBNF1ElementVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainBNF1ElementPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainBNF1ElementPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainBNF1ElementPtr_t me);

    /* IEcoToolchainBNF1Element */
    char_t* (ECOCALLMETHOD *get_Name)(/* in */ IEcoToolchainBNF1ElementPtr_t me);
    int16_t (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainBNF1ElementPtr_t me);
    bool_t (ECOCALLMETHOD *IsOptional)(/* in */ IEcoToolchainBNF1ElementPtr_t me);
    bool_t (ECOCALLMETHOD *IsTerminal)(/* in */ IEcoToolchainBNF1ElementPtr_t me);
    bool_t (ECOCALLMETHOD *IsRepeated)(/* in */ IEcoToolchainBNF1ElementPtr_t me);
    void (ECOCALLMETHOD *set_Repetition)(/* in */ IEcoToolchainBNF1ElementPtr_t me, /* in */ int16_t least, /* in */ int16_t most);
    int16_t (ECOCALLMETHOD *get_LeastOccurrences)(/* in */ IEcoToolchainBNF1ElementPtr_t me);
    int16_t (ECOCALLMETHOD *get_MostOccurrences)(/* in */ IEcoToolchainBNF1ElementPtr_t me);

} IEcoToolchainBNF1ElementVTbl, *IEcoToolchainBNF1ElementVTblPtr;

interface IEcoToolchainBNF1Element {
    struct IEcoToolchainBNF1ElementVTbl *pVTbl;
} IEcoToolchainBNF1Element;

/* IEcoToolchainBNF1Rule IID = {E67AC8DC-0D75-43B7-8FB1-D5D825DE67A8} */
#ifndef __IID_IEcoToolchainBNF1Rule
static const UGUID IID_IEcoToolchainBNF1Rule = {0x01, 0x10, {0xE6, 0x7A, 0xC8, 0xDC, 0x0D, 0x75, 0x43, 0xB7, 0x8F, 0xB1, 0xD5, 0xD8, 0x25, 0xDE, 0x67, 0xA8} };
#endif /* __IID_IEcoToolchainBNF1Rule */

typedef struct IEcoToolchainBNF1Rule* IEcoToolchainBNF1RulePtr_t;

typedef struct IEcoToolchainBNF1RuleVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainBNF1RulePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainBNF1RulePtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainBNF1RulePtr_t me);

    /* IEcoToolchainBNF1Rule */
    char_t* (ECOCALLMETHOD *get_Name)(/* in */ IEcoToolchainBNF1RulePtr_t me);
    int16_t (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainBNF1RulePtr_t me);
    IEcoToolchainBNF1Element* (ECOCALLMETHOD *AddConcatenation)(/* in */ IEcoToolchainBNF1RulePtr_t me, /* in */ uint32_t indexSet, /* in */ char_t* Name, /* in */ bool_t Optional);
    IEcoToolchainBNF1Element* (ECOCALLMETHOD *AddAlternative)(/* in */ IEcoToolchainBNF1RulePtr_t me, /* in */ char_t* Name, /* in */ bool_t Optional, /* in  | out */ uint32_t* indexSet);
    IEcoList1* (ECOCALLMETHOD *AddValueRangeAlternatives)(/* in */ IEcoToolchainBNF1RulePtr_t me, /* in */ uchar_t start, /* in */ uchar_t end, /* in */ bool_t Optional);
    IEcoList1* (ECOCALLMETHOD *get_RuleSet)(/* in */ IEcoToolchainBNF1RulePtr_t me);

} IEcoToolchainBNF1RuleVTbl, *IEcoToolchainBNF1RuleVTblPtr;

interface IEcoToolchainBNF1Rule {
    struct IEcoToolchainBNF1RuleVTbl *pVTbl;
} IEcoToolchainBNF1Rule;

/* IEcoToolchainBNF1 IID = {93102958-9BDA-4637-A249-5674399D4F11} */
#ifndef __IID_IEcoToolchainBNF1
static const UGUID IID_IEcoToolchainBNF1 = {0x01, 0x10, {0x93, 0x10, 0x29, 0x58, 0x9B, 0xDA, 0x46, 0x37, 0xA2, 0x49, 0x56, 0x74, 0x39, 0x9D, 0x4F, 0x11}};
#endif /* __IID_IEcoToolchainBNF1 */

typedef struct IEcoToolchainBNF1* IEcoToolchainBNF1Ptr_t;

typedef struct IEcoToolchainBNF1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainBNF1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainBNF1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainBNF1Ptr_t me);

    /* IEcoToolchainBNF1 */
    IEcoToolchainBNF1Rule* (ECOCALLMETHOD *AddRule)(/* in */ IEcoToolchainBNF1Ptr_t me, /* in */ char_t* Name);
    IEcoList1* (ECOCALLMETHOD *get_RuleList)(/* in */ IEcoToolchainBNF1Ptr_t me);
    IEcoList1* (ECOCALLMETHOD *get_Alphabet)(/* in */ IEcoToolchainBNF1Ptr_t me);
    IEcoList1* (ECOCALLMETHOD *get_TerminalAlphabet)(/* in */ IEcoToolchainBNF1Ptr_t me);
    IEcoList1* (ECOCALLMETHOD *get_NonTerminalAlphabet)(/* in */ IEcoToolchainBNF1Ptr_t me);
    int16_t (ECOCALLMETHOD *Clear)(/* in */ IEcoToolchainBNF1Ptr_t me);

} IEcoToolchainBNF1VTbl, *IEcoToolchainBNF1VTblPtr;

interface IEcoToolchainBNF1 {
    struct IEcoToolchainBNF1VTbl *pVTbl;
} IEcoToolchainBNF1;

#endif /* __I_ECO_TOOLCHAIN_BACKUS_NAUR_FORM_1_H__ */
