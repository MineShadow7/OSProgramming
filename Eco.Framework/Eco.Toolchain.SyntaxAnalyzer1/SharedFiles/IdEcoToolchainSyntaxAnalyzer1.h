/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoToolchainSyntaxAnalyzer1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoToolchainSyntaxAnalyzer1
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

#ifndef __ID_ECO_TOOLCHAIN_SYNTAX_ANALYZER_1_H__
#define __ID_ECO_TOOLCHAIN_SYNTAX_ANALYZER_1_H__

#include "IEcoBase1.h"
#include "IEcoToolchainSyntaxAnalyzer1.h"

/* EcoToolchainSyntaxAnalyzer1 CID = {01097B43-4B08-447B-BC0B-6F5698E4C2CB} */
#ifndef __CID_EcoToolchainSyntaxAnalyzer1
static const UGUID CID_EcoToolchainSyntaxAnalyzer1 = {0x01, 0x10, {0x01, 0x09, 0x7B, 0x43, 0x4B, 0x08, 0x44, 0x7B, 0xBC, 0x0B, 0x6F, 0x56, 0x98, 0xE4, 0xC2, 0xCB} };
#endif /* __CID_EcoToolchainSyntaxAnalyzer1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_01097B434B08447BBC0B6F5698E4C2CB;
#endif

#endif /* __ID_ECO_TOOLCHAIN_SYNTAX_ANALYZER_1_H__ */
