/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoToolchainAST1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoToolchainAST1
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

#ifndef __I_ECO_TOOLCHAIN_AST_1_H__
#define __I_ECO_TOOLCHAIN_AST_1_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1Type.h"
#include "IEcoToolchainAST1NumberType.h"
#include "IEcoToolchainAST1StructOrUnionType.h"
#include "IEcoToolchainAST1EnumType.h"
#include "IEcoToolchainAST1Expression.h"
#include "IEcoToolchainAST1BinaryExpression.h"
#include "IEcoToolchainAST1MemberSelection.h"
#include "IEcoToolchainAST1UnaryExpression.h"
#include "IEcoToolchainAST1IntegerLiteral.h"
#include "IEcoToolchainAST1CharacterLiteral.h"
#include "IEcoToolchainAST1FloatLiteral.h"
#include "IEcoToolchainAST1StringLiteral.h"
#include "IEcoToolchainAST1VariableDefinition.h"
#include "IEcoToolchainAST1CastExpression.h"
#include "IEcoToolchainAST1ConditionalExpression.h"
#include "IEcoToolchainAST1SizeofType.h"
#include "IEcoToolchainAST1SizeofExpression.h"
#include "IEcoToolchainAST1NullExpression.h"
#include "IEcoToolchainAST1BlockExpressions.h"
#include "IEcoToolchainAST1BreakStatement.h"
#include "IEcoToolchainAST1ContinueStatement.h"
#include "IEcoToolchainAST1ReturnStatement.h"
#include "IEcoToolchainAST1GoToStatement.h"
#include "IEcoToolchainAST1IfStatement.h"
#include "IEcoToolchainAST1ForStatement.h"
#include "IEcoToolchainAST1WhileStatement.h"
#include "IEcoToolchainAST1DoWhileStatement.h"
#include "IEcoToolchainAST1VariableDeclaration.h"
#include "IEcoToolchainAST1SwitchStatement.h"
#include "IEcoToolchainAST1DefaultStatement.h"
#include "IEcoToolchainAST1CaseStatement.h"
#include "IEcoToolchainAST1LabelStatement.h"
#include "IEcoToolchainAST1BlockStatements.h"
#include "IEcoToolchainAST1BlockDeclarations.h"
#include "IEcoToolchainAST1BlockTranslationUnitObjects.h"
#include "IEcoToolchainAST1ArrayType.h"
#include "IEcoToolchainAST1PointerType.h"
#include "IEcoToolchainAST1StructOrUnionDeclaration.h"
#include "IEcoToolchainAST1EnumDeclaration.h"
#include "IEcoToolchainAST1CompoundStatement.h"
#include "IEcoToolchainAST1FunctionType.h"
#include "IEcoToolchainAST1BlockTypes.h"
#include "IEcoToolchainAST1FunctionDeclaration.h"
#include "IEcoToolchainAST1FunctionDefinition.h"
#include "IEcoToolchainAST1FunctionCall.h"
#include "IEcoToolchainAST1TypedefDeclaration.h"
#include "IEcoToolchainAST1TypedefType.h"
#include "IEcoToolchainAST1GlobalScope.h"
#include "IEcoToolchainAST1TranslationUnit.h"

/* IEcoToolchainAST1 IID = {E248639F-2296-469E-B1D5-2D75ABE95298} */
#ifndef __IID_IEcoToolchainAST1
static const UGUID IID_IEcoToolchainAST1 = {0x01, 0x10, {0xE2, 0x48, 0x63, 0x9F, 0x22, 0x96, 0x46, 0x9E, 0xB1, 0xD5, 0x2D, 0x75, 0xAB, 0xE9, 0x52, 0x98}};
#endif /* __IID_IEcoToolchainAST1 */

typedef struct IEcoToolchainAST1* IEcoToolchainAST1Ptr_t;

typedef struct IEcoToolchainAST1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoToolchainAST1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoToolchainAST1Ptr_t me);

    /* IEcoToolchainAST1 */

    /* Типы */

    /* <метод>
     *   new_NumberType
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) тип числа.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="char*" имя="name">
     *      Наиенование типа
     *   </входной>
     *   <входной тип="unsigned int" имя="size">
     *      Размер числа
     *   </входной>
     *   <входной тип="char" имя="isConst">
     *      Значение равное единице(истина) - указывает, является ли константой
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1Type**" имя="ppIType">
     *      Возвращает указатель на новый экземпляр интерфейса типа
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_NumberType)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token,
                              /* in */ int16_t prim_type, /* in */ uint32_t size, /* in */ bool_t isConst, /* in */ bool_t isSigned, /* in */ uint16_t classSpecifier,
                              /* out */ IEcoToolchainAST1NumberType** ppIType);

    /* Типы */

    /* <метод>
     *   new_StructOrUnionType
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) тип числа.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="char*" имя="name">
     *      Наиенование типа
     *   </входной>
     *   <входной тип="unsigned int" имя="size">
     *      Размер числа
     *   </входной>
     *   <входной тип="char" имя="isConst">
     *      Значение равное единице(истина) - указывает, является ли константой
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1Type**" имя="ppIType">
     *      Возвращает указатель на новый экземпляр интерфейса типа
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_StructOrUnionType)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token,
                              /* in */ char_t* name, /* in */ bool_t isConst, /* in */ IEcoToolchainAST1StructOrUnionDeclaration* pIStructDec, /* in */ uint16_t classSpecifier, /* in */ bool_t isDeclared, /* in */ uint16_t structOrUnionType,
                              /* out */ IEcoToolchainAST1StructOrUnionType** ppIType);

    /* <метод>
     *   new_EnumType
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) тип числа.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="char*" имя="name">
     *      Наиенование типа
     *   </входной>
     *   <входной тип="unsigned int" имя="size">
     *      Размер числа
     *   </входной>
     *   <входной тип="char" имя="isConst">
     *      Значение равное единице(истина) - указывает, является ли константой
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1Type**" имя="ppIType">
     *      Возвращает указатель на новый экземпляр интерфейса типа
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_EnumType)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token,
        /* in */ char_t* name, /* in */ bool_t isConst, /* in */ IEcoToolchainAST1EnumDeclaration* pIStructDec, /* in */ uint16_t classSpecifier, /* in */ bool_t isDeclared,
        /* out */ IEcoToolchainAST1EnumType** ppIType);

    /* <метод>
     *   new_ArrayType
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) тип числа.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="char*" имя="name">
     *      Наиенование типа
     *   </входной>
     *   <входной тип="unsigned int" имя="size">
     *      Размер числа
     *   </входной>
     *   <входной тип="char" имя="isConst">
     *      Значение равное единице(истина) - указывает, является ли константой
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1Type**" имя="ppIType">
     *      Возвращает указатель на новый экземпляр интерфейса типа
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_ArrayType)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                             /* in */ IEcoToolchainAST1Type* type, /* in */ IEcoToolchainAST1Expression* pICountExpression,
                             /* out */ IEcoToolchainAST1ArrayType** ppIType);

    /* <метод>
     *   new_PointerType
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) тип числа.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="char*" имя="name">
     *      Наиенование типа
     *   </входной>
     *   <входной тип="unsigned int" имя="size">
     *      Размер числа
     *   </входной>
     *   <входной тип="char" имя="isConst">
     *      Значение равное единице(истина) - указывает, является ли константой
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1Type**" имя="ppIType">
     *      Возвращает указатель на новый экземпляр интерфейса типа
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_PointerType)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                               /* in */ IEcoToolchainAST1Type* type, /* in */ bool_t isConst,
                               /* out */ IEcoToolchainAST1PointerType** ppIType);

    /* Константы */

    /* <метод>
     *   new_IntegerLiteral
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) целочисленного значения.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="char*" имя="literal">
     *      Целочисленное значение
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1IntegerLiteral**" имя="ppIIntegerLiteral">
     *      Возвращает указатель на новый экземпляр интерфейса целочисленного значения
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_IntegerLiteral)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                  /* in */ char_t* literal, 
                                  /* out */ IEcoToolchainAST1IntegerLiteral** ppIIntegerLiteral);

	/* <метод>
     *   new_CharacterLiteral
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) целочисленного значения.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="char*" имя="literal">
     *      Целочисленное значение
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1IntegerLiteral**" имя="ppIIntegerLiteral">
     *      Возвращает указатель на новый экземпляр интерфейса целочисленного значения
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_CharacterLiteral)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                  /* in */ char_t* literal, 
                                  /* out */ IEcoToolchainAST1CharacterLiteral** ppILiteral);

    /* <метод>
     *   new_FloatLiteral
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) целочисленного значения.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="char*" имя="literal">
     *      Целочисленное значение
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1FloatLiteral**" имя="ppFloatLiteral">
     *      Возвращает указатель на новый экземпляр интерфейса целочисленного значения
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_FloatLiteral)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                /* in */ char_t* literal, 
                                /* out */ IEcoToolchainAST1FloatLiteral** ppIFloatLiteral);

    /* <метод>
     *   new_StringLiteral
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) целочисленного значения.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="char*" имя="literal">
     *      Целочисленное значение
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1StringLiteral**" имя="ppStringLiteral">
     *      Возвращает указатель на новый экземпляр интерфейса целочисленного значения
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_StringLiteral)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                 /* in */ char_t* literal, 
                                 /* out */ IEcoToolchainAST1StringLiteral** ppIStringLiteral);

    /* <метод>
     *   new_VariableDefinition
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) определения переменной.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="char*" имя="identifier">
     *      Имя переменной
     *   </входной>
     *   <входной тип="IEcoToolchainAST1Type*" имя="type">
     *      Тип переменной, см. интерфейс IEcoToolchainAST1Type
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1VariableDefinition**" имя="ppIVariableDefinition">
     *      Возвращает указатель на новый экземпляр интерфейса определения переменной
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_VariableDefinition)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                      /* in */ IEcoToolchainAST1ExpressionableDeclaration* pIDec,
                                      /* out */ IEcoToolchainAST1VariableDefinition** ppIVariableDefinition);

    /* <метод>
     *   new_BinaryExpression
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1BinaryExpression**" имя="ppIBinaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_BinaryExpression)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                    /* in */ uint16_t binaryOperator, /* in */ IEcoToolchainAST1Expression* leftOperand, /* in */ IEcoToolchainAST1Expression* rightOperand, 
                                    /* out */ IEcoToolchainAST1BinaryExpression** ppIBinaryExpression);

    /* <метод>
     *   new_MemberSelection
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1MemberSelection**" имя="ppIMemberSelection">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_MemberSelection)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                   /* in */ IEcoToolchainAST1Expression* pISourceExpression, /* in */ IEcoToolchainAST1VariableDefinition* pIInternalExpression, /* in */ bool_t isDirect,
                                   /* out */ IEcoToolchainAST1MemberSelection** ppIMemberSelection);

    /* <метод>
     *   new_UnaryExpression
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_UnaryExpression)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                   /* in */ uint16_t unaryOperator, /* in */ IEcoToolchainAST1Expression* Operand, 
                                   /* out */ IEcoToolchainAST1UnaryExpression** ppIUnaryExpression);

    /* <метод>
     *   new_CastExpression
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_CastExpression)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                  /* in */ IEcoToolchainAST1Type* type, /* in */ IEcoToolchainAST1Expression* operand, 
                                  /* out */ IEcoToolchainAST1CastExpression** ppICastExpression);

    /* <метод>
     *   new_ConditionalExpression
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_ConditionalExpression)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                         /* in */ IEcoToolchainAST1Expression* testOperand, /* in */ IEcoToolchainAST1Expression* trueOperand, /* in */ IEcoToolchainAST1Expression* falseOperand,
                                         /* out */ IEcoToolchainAST1ConditionalExpression** ppIConditionalExpression);

    /* <метод>
     *   new_SizeofType
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_SizeofType)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                              /* in */ IEcoToolchainAST1Type* type,
                              /* out */ IEcoToolchainAST1SizeofType** ppISizeofType);

    /* <метод>
     *   new_SizeofExpression
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_SizeofExpression)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token,
                                /* in */ IEcoToolchainAST1Expression* pIExpression,
                                /* out */ IEcoToolchainAST1SizeofExpression** ppISizeofExpression);

    /* <метод>
     *   new_NullExpression
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_NullExpression)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                  /* out */ IEcoToolchainAST1NullExpression** ppINullExpression);

    /* <метод>
     *   new_BlockExpressions
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_BlockExpressions)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                    /* in */ IEcoList1* list,
                                    /* out */ IEcoToolchainAST1BlockExpressions** ppIBlockExpressions);

    /* <метод>
     *   new_BreakStatement
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_BreakStatement)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                  /* out */ IEcoToolchainAST1BreakStatement** ppIBreakStatement);

    /* <метод>
     *   new_ContinueStatement
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_ContinueStatement)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                     /* out */ IEcoToolchainAST1ContinueStatement** ppIContinueStatement);

    /* <метод>
     *   new_ReturnStatement
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_ReturnStatement)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                   /* in */ IEcoToolchainAST1Expression* expression,
                                   /* out */ IEcoToolchainAST1ReturnStatement** ppIReturnStatement);

    /* <метод>
     *   new_GoToStatement
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_GoToStatement)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                 /* in */ char_t* label_Name, 
                                 /* out */ IEcoToolchainAST1GoToStatement** ppIGoToStatement);

    /* <метод>
     *   new_IfStatement
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_IfStatement)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                               /* in */ IEcoToolchainAST1Expression* expression, IEcoToolchainAST1Statement* true_statement, IEcoToolchainAST1Statement* false_statement, 
                               /* out */ IEcoToolchainAST1IfStatement** ppIIfStatement);

    /* <метод>
     *   new_ForStatement
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_ForStatement)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                /* in */ IEcoToolchainAST1Expression* init, IEcoToolchainAST1Expression* test, IEcoToolchainAST1Expression* iter, IEcoToolchainAST1Statement* statement, 
                                /* out */ IEcoToolchainAST1ForStatement** ppIForStatement);

    /* <метод>
     *   new_WhileStatement
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_WhileStatement)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                  /* in */ IEcoToolchainAST1Expression* test, IEcoToolchainAST1Statement* statement, 
                                  /* out */ IEcoToolchainAST1WhileStatement** ppIWhileStatement);

    /* <метод>
     *   new_DoWhileStatement
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_DoWhileStatement)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                    /* in */ IEcoToolchainAST1Expression* test, IEcoToolchainAST1Statement* statement, 
                                    /* out */ IEcoToolchainAST1DoWhileStatement** ppIDoWhileStatement);

    /* <метод>
     *   new_SwitchStatement
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_SwitchStatement)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                   /* in */ IEcoToolchainAST1Expression* expression, IEcoToolchainAST1Statement* statement, 
                                   /* out */ IEcoToolchainAST1SwitchStatement** ppISwitchStatement);

    /* <метод>
     *   new_DefaultStatement
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_DefaultStatement)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, /* in */ IEcoToolchainAST1Statement* pIInternalStatement,
                                    /* out */ IEcoToolchainAST1DefaultStatement** ppIDefaultStatement);

    /* <метод>
     *   new_CaseStatement
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_CaseStatement)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                 /* in */ IEcoToolchainAST1Expression* pIExpression, /* in */  IEcoToolchainAST1Statement* pIStatement,
                                 /* out */ IEcoToolchainAST1CaseStatement** ppICaseStatement);

    /* <метод>
     *   new_LabelStatement
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_LabelStatement)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                  /* in */ char_t* label_name, /* in */ IEcoToolchainAST1Statement* pIStatement,
                                  /* out */ IEcoToolchainAST1LabelStatement** ppILabelStatement);

    /* <метод>
     *   new_BlockStatements
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_BlockStatements)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                   /* in */ IEcoList1* pIListStatements,
                                   /* out */ IEcoToolchainAST1BlockStatements** ppIBlockStatements);

    /* <метод>
     *   new_BlockDeclarations
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_BlockDeclarations)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                     /* in */ IEcoList1* pIListDeclarations,
                                     /* out */ IEcoToolchainAST1BlockDeclarations** ppIBlockDeclarations);


    int16_t (ECOCALLMETHOD *new_BlockTranslationUnitObjects)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token,
                                    /* in */ IEcoList1* pIListObjects,
                                    /* out */ IEcoToolchainAST1BlockTranslationUnitObjects** ppIBlockTranslationUnitObjects);

    /* Выражения */

    /* <метод>
     *   new_VariableDeclaration
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) объявление переменной.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="char*" имя="identifier">
     *      Имя переменной
     *   </входной>
     *   <входной тип="IEcoToolchainAST1Type*" имя="type">
     *      Тип переменной, см. интерфейс IEcoToolchainAST1Type
     *   </входной>
     *   <входной тип="char" имя="isMutable">
     *      Значение равное единице(истина) - указывает, является ли переменная изменяемой
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1VariableDeclaration**" имя="ppIVariableDeclaration">
     *      Возвращает указатель на новый экземпляр интерфейса определения переменной
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_VariableDeclaration)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                       /* in */ IEcoToolchainAST1Type* pIType, /* in */ char_t* name, /* in */ IEcoToolchainAST1Expression* pIInitExp,
                                       /* out */ IEcoToolchainAST1VariableDeclaration** ppIDeclaration);

    /* <метод>
     *   new_StructOrUnionDeclaration
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) объявление переменной.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="char*" имя="identifier">
     *      Имя переменной
     *   </входной>
     *   <входной тип="IEcoToolchainAST1Type*" имя="type">
     *      Тип переменной, см. интерфейс IEcoToolchainAST1Type
     *   </входной>
     *   <входной тип="char" имя="isMutable">
     *      Значение равное единице(истина) - указывает, является ли переменная изменяемой
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1VariableDeclaration**" имя="ppIVariableDeclaration">
     *      Возвращает указатель на новый экземпляр интерфейса определения переменной
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_StructOrUnionDeclaration)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                     /* in */ char_t* name, /* in */ IEcoToolchainAST1BlockDeclarations* pIParams, /* in */ IEcoToolchainAST1BlockExpressions* pISizes, /* in */ uint16_t structOrUnionType, /* in */ IEcoToolchainAST1Scope* pIScope,
                                     /* out */ IEcoToolchainAST1StructOrUnionDeclaration** ppIDeclaration);

    /* <метод>
     *   new_EnumDeclaration
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) объявление переменной.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="char*" имя="identifier">
     *      Имя переменной
     *   </входной>
     *   <входной тип="IEcoToolchainAST1Type*" имя="type">
     *      Тип переменной, см. интерфейс IEcoToolchainAST1Type
     *   </входной>
     *   <входной тип="char" имя="isMutable">
     *      Значение равное единице(истина) - указывает, является ли переменная изменяемой
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1VariableDeclaration**" имя="ppIVariableDeclaration">
     *      Возвращает указатель на новый экземпляр интерфейса определения переменной
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_EnumDeclaration)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token,
        /* in */ char_t* name, /* in */ IEcoToolchainAST1BlockDeclarations* pIDeclarations, /* in */ IEcoToolchainAST1Scope* pIScope,
        /* out */ IEcoToolchainAST1EnumDeclaration** ppIDeclaration);

    /* <метод>
     *   new_CompoundStatement
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) объявление переменной.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="char*" имя="identifier">
     *      Имя переменной
     *   </входной>
     *   <входной тип="IEcoToolchainAST1Type*" имя="type">
     *      Тип переменной, см. интерфейс IEcoToolchainAST1Type
     *   </входной>
     *   <входной тип="char" имя="isMutable">
     *      Значение равное единице(истина) - указывает, является ли переменная изменяемой
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1VariableDeclaration**" имя="ppIVariableDeclaration">
     *      Возвращает указатель на новый экземпляр интерфейса определения переменной
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_CompoundStatement)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                        /* in */ IEcoToolchainAST1BlockDeclarations* declarations, IEcoToolchainAST1BlockStatements* statements, /* in */ IEcoToolchainAST1Scope* pIScope,
                        /* out */ IEcoToolchainAST1CompoundStatement** ppICompoundStatement);

    /* <метод>
     *   new_FunctionType
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) объявление переменной.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="char*" имя="identifier">
     *      Имя переменной
     *   </входной>
     *   <входной тип="IEcoToolchainAST1Type*" имя="type">
     *      Тип переменной, см. интерфейс IEcoToolchainAST1Type
     *   </входной>
     *   <входной тип="char" имя="isMutable">
     *      Значение равное единице(истина) - указывает, является ли переменная изменяемой
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1VariableDeclaration**" имя="ppIVariableDeclaration">
     *      Возвращает указатель на новый экземпляр интерфейса определения переменной
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_FunctionType)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                /* in */ IEcoToolchainAST1Type* pIReturnType, /* in */ IEcoToolchainAST1BlockDeclarations* pIParams, /* in */ IEcoToolchainAST1Scope* pIScope, /* in */ bool_t isVariadic,
                                /* out */ IEcoToolchainAST1FunctionType** ppIFunctionType);

    /* <метод>
     *   new_BlockTypes
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_BlockTypes)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                              /* in */ IEcoList1* pIListTypes, /* in */ bool_t isVariadic,
                              /* out */ IEcoToolchainAST1BlockTypes** ppIBlockTypes);

    /* <метод>
     *   new_FunctionDeclaration
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_FunctionDeclaration)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                       /* in */ IEcoToolchainAST1FunctionType* pIType, /* in */ char_t* name,
                                       /* out */ IEcoToolchainAST1FunctionDeclaration** ppIFunctionDeclaration);

    int16_t (ECOCALLMETHOD *new_FunctionDefinition)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token,
                                    /* in */ IEcoToolchainAST1FunctionDeclaration* pIDeclaration, /* in */ IEcoToolchainAST1CompoundStatement* pIBody,
                                    /* out */ IEcoToolchainAST1FunctionDefinition** ppIFunctionDefinition);

    /* <метод>
     *   new_FunctionCall
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_FunctionCall)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token, 
                                /* in */ IEcoToolchainAST1Expression* pIFunctionExpression, IEcoToolchainAST1BlockExpressions* pArguments, 
                                /* out */ IEcoToolchainAST1FunctionCall** ppIFunctionCall);

    /* <метод>
     *   new_TypedefDeclaration
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_TypedefDeclaration)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token,
                                      /* in */ char_t* name, /* in */ IEcoToolchainAST1Type* pISourceType,
                                      /* out */ IEcoToolchainAST1TypedefDeclaration** ppIDeclaration);

    /* <метод>
     *   new_TypedefType
     * </метод>
     * <описание>
     *   Создает новый объект синтаксиса (узел) бинарной операции.
     *   Объект поддерживает интерфейс IEcoTree1Node через QueryInterface.
     * </описание>
     * <параметры>
     *   <входной тип="IEcoToolchainAST1*" имя="me">
     *      Указатель на экземпляр
     *   </входной>
     *   <входной тип="unsigned short" имя="binaryOperator">
     *      Тип операции
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="leftOperand">
     *      Левый операнд
     *   </входной>
     *   <входной тип=IEcoToolchainAST1Expression*" имя="rightOperand">
     *      Правый операнд
     *   </входной>
     *   <выходной тип="IEcoToolchainAST1UnaryExpression**" имя="ppIUnaryExpression">
     *      Возвращает указатель на новый экземпляр интерфейса бинарной операции
     *   </выходной>
     *   <возвращаемый тип="int" имя="result">
     *      Возвращает результат создания узла, значение равное нулю в случае успеха. В противном случае код ошибки.
     *   </возвращаемый>
     * </параметры>
     */
    int16_t (ECOCALLMETHOD *new_TypedefType)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token,
                              /* in */ bool_t isConst, /* in */ IEcoToolchainAST1TypedefDeclaration* pIDeclaration, /* in */ uint16_t classSpecifier,
                              /* out */ IEcoToolchainAST1TypedefType** ppIType);

    int16_t (ECOCALLMETHOD *new_GlobalScope)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token,
                               /* out */ IEcoToolchainAST1GlobalScope** ppIGlobalScope);

    int16_t (ECOCALLMETHOD *new_Scope)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token,
                        /* in */ IEcoToolchainAST1Scope* pIParentScope,
                        /* out */ IEcoToolchainAST1Scope** ppIScope);

    int16_t (ECOCALLMETHOD *new_TranslationUnit)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainLexicalAnalyzer1Token* token,
                                   /* in */ IEcoToolchainAST1GlobalScope* pIScope, IEcoToolchainAST1BlockTranslationUnitObjects* pIObjects,
                                   /* out */ IEcoToolchainAST1TranslationUnit** ppITranslationUnit);

    IEcoToolchainAST1SyntaxObject* (ECOCALLMETHOD *copy_Object)(/* in */ IEcoToolchainAST1Ptr_t me, /* in */ IEcoToolchainAST1SyntaxObject* pIObject);
    IEcoToolchainAST1TranslationUnit* (ECOCALLMETHOD *get_TranslationUnit)(/* in */ IEcoToolchainAST1Ptr_t me);

} IEcoToolchainAST1VTbl, *IEcoToolchainAST1VTblPtr;

interface IEcoToolchainAST1 {
    struct IEcoToolchainAST1VTbl *pVTbl;
} IEcoToolchainAST1;

#endif /* __I_ECO_TOOLCHAIN_AST_1_H__ */
