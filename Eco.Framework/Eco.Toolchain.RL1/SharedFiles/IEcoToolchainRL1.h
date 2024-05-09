/*
 * <кодировка символов>
 *   Cyrillic (Windows) - Codepage 1251
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainRL1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainRL1
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

#ifndef __I_ECO_TOOLCHAIN_REGULAR_LANGUAGES_1_H__
#define __I_ECO_TOOLCHAIN_REGULAR_LANGUAGES_1_H__

#include "IEcoBase1.h"
#include "IEcoList1.h"
#include "IEcoFSM1.h"

/* IEcoToolchainRL1RegularSet IID = {77C2141E-F3DE-4633-A89D-EF816B78668B} */
#ifndef __IID_IEcoToolchainRL1RegularSet
static const UGUID IID_IEcoToolchainRL1RegularSet = {0x01, 0x10, {0x77, 0xC2, 0x14, 0x1E, 0xF3, 0xDE, 0x46, 0x33, 0xA8, 0x9D, 0xEF, 0x81, 0x6B, 0x78, 0x66, 0x8B} };
#endif /* __IID_IEcoToolchainRL1RegularSet */

typedef struct IEcoToolchainRL1RegularSet* IEcoToolchainRL1RegularSetPtr_t;

typedef struct IEcoToolchainRL1RegularSetVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainRL1RegularSetPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainRL1RegularSetPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainRL1RegularSetPtr_t me);

    /* IEcoToolchainRL1RegularSet */
    char_t* (ECOCALLMETHOD *get_Name)(/* in */ IEcoToolchainRL1RegularSetPtr_t me);
    int16_t (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainRL1RegularSetPtr_t me);

} IEcoToolchainRL1RegularSetVTbl, *IEcoToolchainRL1RegularSetVTblPtr;

interface IEcoToolchainRL1RegularSet {
    struct IEcoToolchainRL1RegularSetVTbl *pVTbl;
} IEcoToolchainRL1RegularSet;

/* IEcoToolchainRL1NonTerminal IID = {4E31A6A5-9C7C-475C-9F8D-8F95E3037B3D} */
#ifndef __IID_IEcoToolchainRL1NonTerminal
static const UGUID IID_IEcoToolchainRL1NonTerminal = {0x01, 0x10, {0x4E, 0x31, 0xA6, 0xA5, 0x9C, 0x7C, 0x47, 0x5C, 0x9F, 0x8D, 0x8F, 0x95, 0xE3, 0x03, 0x7B, 0x3D} };
#endif /* __IID_IEcoToolchainRL1NonTerminal */

typedef struct IEcoToolchainRL1NonTerminal* IEcoToolchainRL1NonTerminalPtr_t;

typedef struct IEcoToolchainRL1NonTerminalVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainRL1NonTerminalPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainRL1NonTerminalPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainRL1NonTerminalPtr_t me);

    /* IEcoToolchainRL1NonTerminal */
    char_t* (ECOCALLMETHOD *get_Name)(/* in */ IEcoToolchainRL1NonTerminalPtr_t me);
    int16_t (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainRL1NonTerminalPtr_t me);
    bool_t (ECOCALLMETHOD *IsStart)(/* in */ IEcoToolchainRL1NonTerminalPtr_t me);
    char_t* (ECOCALLMETHOD *get_Description)(/* in */ IEcoToolchainRL1NonTerminalPtr_t me);
    void (ECOCALLMETHOD *set_Description)(/* in */ IEcoToolchainRL1NonTerminalPtr_t me, /* in */ char_t* value);

} IEcoToolchainRL1NonTerminalVTbl, *IEcoToolchainRL1NonTerminalVTblPtr;

interface IEcoToolchainRL1NonTerminal {
    struct IEcoToolchainRL1NonTerminalVTbl *pVTbl;
} IEcoToolchainRL1NonTerminal;

/* IEcoToolchainRL1Rule IID = {ED4059C3-4183-49AA-883A-3A681C2AD1B5} */
#ifndef __IID_IEcoToolchainRL1Rule
static const UGUID IID_IEcoToolchainRL1Rule = {0x01, 0x10, {0xED, 0x40, 0x59, 0xC3, 0x41, 0x83, 0x49, 0xAA, 0x88, 0x3A, 0x3A, 0x68, 0x1C, 0x2A, 0xD1, 0xB5} };
#endif /* __IID_IEcoToolchainRL1Rule */

typedef struct IEcoToolchainRL1Rule* IEcoToolchainRL1RulePtr_t;

typedef struct IEcoToolchainRL1RuleVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainRL1RulePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainRL1RulePtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainRL1RulePtr_t me);

    /* IEcoToolchainRL1Rule */
    char_t* (ECOCALLMETHOD *get_Name)(/* in */ IEcoToolchainRL1RulePtr_t me);
    int16_t (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainRL1RulePtr_t me);
    IEcoToolchainRL1NonTerminal* (ECOCALLMETHOD *get_LHS)(/* in */ IEcoToolchainRL1RulePtr_t me);
    char_t (ECOCALLMETHOD *get_Terminal)(/* in */ IEcoToolchainRL1RulePtr_t me);
    IEcoToolchainRL1NonTerminal* (ECOCALLMETHOD *get_NonTerminal)(/* in */ IEcoToolchainRL1RulePtr_t me);

} IEcoToolchainRL1RuleVTbl, *IEcoToolchainRL1RuleVTblPtr;

interface IEcoToolchainRL1Rule {
    struct IEcoToolchainRL1RuleVTbl *pVTbl;
} IEcoToolchainRL1Rule;

/* IEcoToolchainRL1Grammar IID = {09CE068E-41E4-43C3-A896-93C977BBB7F3} */
#ifndef __IID_IEcoToolchainRL1Grammar
static const UGUID IID_IEcoToolchainRL1Grammar = {0x01, 0x10, {0x09, 0xCE, 0x06, 0x8E, 0x41, 0xE4, 0x43, 0xC3, 0xA8, 0x96, 0x93, 0xC9, 0x77, 0xBB, 0xB7, 0xF3} };
#endif /* __IID_IEcoToolchainRL1Grammar */

typedef struct IEcoToolchainRL1Grammar* IEcoToolchainRL1GrammarPtr_t;

typedef struct IEcoToolchainRL1GrammarVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainRL1GrammarPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainRL1GrammarPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainRL1GrammarPtr_t me);

    /* IEcoToolchainRL1Grammar */
    char_t* (ECOCALLMETHOD *get_Name)(/* in */ IEcoToolchainRL1GrammarPtr_t me);
    int16_t (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainRL1GrammarPtr_t me);
    IEcoToolchainRL1NonTerminal* (ECOCALLMETHOD *new_NonTerminal)(/* in */ IEcoToolchainRL1GrammarPtr_t me, /* in */ char_t* name, /* in */ bool_t start);
    IEcoToolchainRL1Rule* (ECOCALLMETHOD *AddRule)(/* in */ IEcoToolchainRL1GrammarPtr_t me, /* in */ char_t* name, /* in */ IEcoToolchainRL1NonTerminal* lhs, /* in */ char_t terminal, /* in */ bool_t isEmpty, /* in */ IEcoToolchainRL1NonTerminal* nonterminal);
    IEcoList1* (ECOCALLMETHOD *get_RuleSet)(/* in */ IEcoToolchainRL1GrammarPtr_t me);
    bool_t (ECOCALLMETHOD *IsRightLinearGrammar)(/* in */ IEcoToolchainRL1GrammarPtr_t me);

} IEcoToolchainRL1GrammarVTbl, *IEcoToolchainRL1GrammarVTblPtr;

interface IEcoToolchainRL1Grammar {
    struct IEcoToolchainRL1GrammarVTbl *pVTbl;
} IEcoToolchainRL1Grammar;

/* IEcoToolchainRL1Expression IID = {F19B3D02-786F-40D5-BE1B-1A62CDED5348} */
#ifndef __IID_IEcoToolchainRL1Expression
static const UGUID IID_IEcoToolchainRL1Expression = {0x01, 0x10, {0xF1, 0x9B, 0x3D, 0x02, 0x78, 0x6F, 0x40, 0xD5, 0xBE, 0x1B, 0x1A, 0x62, 0xCD, 0xED, 0x53, 0x48} };
#endif /* __IID_IEcoToolchainRL1Expression */

typedef struct IEcoToolchainRL1Expression* IEcoToolchainRL1ExpressionPtr_t;

typedef struct IEcoToolchainRL1ExpressionVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainRL1ExpressionPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainRL1ExpressionPtr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainRL1ExpressionPtr_t me);

    /* IEcoToolchainRL1Expression */
    char_t* (ECOCALLMETHOD *get_Name)(/* in */ IEcoToolchainRL1ExpressionPtr_t me);
    void (ECOCALLMETHOD *set_Name)(/* in */ IEcoToolchainRL1ExpressionPtr_t me, /* in */ char_t* name);
    int16_t (ECOCALLMETHOD *get_Id)(/* in */ IEcoToolchainRL1ExpressionPtr_t me);
    char_t* (ECOCALLMETHOD *get_Pattern)(/* in */ IEcoToolchainRL1ExpressionPtr_t me);

} IEcoToolchainRL1ExpressionVTbl, *IEcoToolchainRL1ExpressionVTblPtr;

interface IEcoToolchainRL1Expression {
    struct IEcoToolchainRL1ExpressionVTbl *pVTbl;
} IEcoToolchainRL1Expression;

/* IEcoToolchainRL1 IID = {6F7421ED-589A-4DB9-BAC9-45BCE210B257} */
#ifndef __IID_IEcoToolchainRL1
static const UGUID IID_IEcoToolchainRL1 = {0x01, 0x10, {0x6F, 0x74, 0x21, 0xED, 0x58, 0x9A, 0x4D, 0xB9, 0xBA, 0xC9, 0x45, 0xBC, 0xE2, 0x10, 0xB2, 0x57} };
#endif /* __IID_IEcoToolchainRL1 */

typedef struct IEcoToolchainRL1* IEcoToolchainRL1Ptr_t;

typedef struct IEcoToolchainRL1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainRL1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainRL1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainRL1Ptr_t me);

    /* IEcoToolchainRL1 */
    int16_t (ECOCALLMETHOD *RegisterAlgorithm)(/* in */ IEcoToolchainRL1Ptr_t me, /*in*/ const UGUID* rcid, /*in*/ char_t* algmName);
    void (ECOCALLMETHOD *set_DefaultAlgorithm)(/* in */ IEcoToolchainRL1Ptr_t me, /*in*/ char_t* algmName);
    char_t* (ECOCALLMETHOD *get_DefaultAlgorithm)(/* in */ IEcoToolchainRL1Ptr_t me);
    IEcoToolchainRL1Expression* (ECOCALLMETHOD *CreateRegularExpression)(/* in */ IEcoToolchainRL1Ptr_t me, /* in */ char_t* string, /* in */ uint16_t lenght);
    IEcoToolchainRL1Grammar* (ECOCALLMETHOD *CreateRegularGrammar)(/* in */ IEcoToolchainRL1Ptr_t me, /* in */ char_t* name, /* in */ bool_t bRightLinear);
    IEcoFSM1StateMachine* (ECOCALLMETHOD *CreateFiniteAutomata)(/* in */ IEcoToolchainRL1Ptr_t me, /* in */ char_t* name);
    IEcoToolchainRL1Expression* (ECOCALLMETHOD *Union)(/* in */ IEcoToolchainRL1Ptr_t me, /* in */ IEcoToolchainRL1Expression* exp1, /* in */ IEcoToolchainRL1Expression* exp2);
    IEcoToolchainRL1Expression* (ECOCALLMETHOD *Intersection)(/* in */ IEcoToolchainRL1Ptr_t me, /* in */ IEcoToolchainRL1Expression* exp1, /* in */ IEcoToolchainRL1Expression* exp2);
    IEcoToolchainRL1Expression* (ECOCALLMETHOD *Concatenation)(/* in */ IEcoToolchainRL1Ptr_t me, /* in */ IEcoToolchainRL1Expression* exp1, /* in */ IEcoToolchainRL1Expression* exp2);
    IEcoToolchainRL1Expression* (ECOCALLMETHOD *KleeneClosure)(/* in */ IEcoToolchainRL1Ptr_t me, /* in */ IEcoToolchainRL1Expression* exp);
    IEcoToolchainRL1Expression* (ECOCALLMETHOD *Complement)(/* in */ IEcoToolchainRL1Ptr_t me, /* in */ IEcoToolchainRL1Expression* exp);
    int16_t (ECOCALLMETHOD *ConversionRGToRE)(/* in */ IEcoToolchainRL1Ptr_t me, /* in */ IEcoToolchainRL1Grammar* grammar, /* out */ IEcoToolchainRL1Expression** expression);
    int16_t (ECOCALLMETHOD *ConversionRGToFA)(/* in */ IEcoToolchainRL1Ptr_t me, /* in */ IEcoToolchainRL1Grammar* grammar, /* out */ IEcoFSM1StateMachine** nfa);
    int16_t (ECOCALLMETHOD *ConversionFAToRG)(/* in */ IEcoToolchainRL1Ptr_t me, /* in */ IEcoFSM1StateMachine* nfa, /* out */ IEcoToolchainRL1Grammar** grammar);
    int16_t (ECOCALLMETHOD *ConversionFAToRE)(/* in */ IEcoToolchainRL1Ptr_t me, /* in */ IEcoFSM1StateMachine* nfa, /* out */ IEcoToolchainRL1Expression** expression);
    int16_t (ECOCALLMETHOD *ConversionREToFA)(/* in */ IEcoToolchainRL1Ptr_t me, /* in */ IEcoToolchainRL1Expression* expression, /* out */ IEcoFSM1StateMachine* nfa);
    int16_t (ECOCALLMETHOD *ConversionREToRG)(/* in */ IEcoToolchainRL1Ptr_t me, /* in */ IEcoToolchainRL1Expression* expression, /* out */ IEcoToolchainRL1Grammar** grammar);
    int16_t (ECOCALLMETHOD *ConversionRGToOppositeDirection)(/* in */ IEcoToolchainRL1Ptr_t me, /* in */ IEcoToolchainRL1Grammar* expression, /* out */ IEcoToolchainRL1Grammar** grammar);

} IEcoToolchainRL1VTbl, *IEcoToolchainRL1VTblPtr;

interface IEcoToolchainRL1 {
    struct IEcoToolchainRL1VTbl *pVTbl;
} IEcoToolchainRL1;

#endif /* __I_ECO_TOOLCHAIN_REGULAR_LANGUAGES_1_H__ */
