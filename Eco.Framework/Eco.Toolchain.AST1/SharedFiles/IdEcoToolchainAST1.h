/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoToolchainAST1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoToolchainAST1
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

#ifndef __ID_ECO_TOOLCHAIN_AST_1_H__
#define __ID_ECO_TOOLCHAIN_AST_1_H__

#include "IEcoBase1.h"
#include "IEcoToolchainAST1.h"

/* EcoToolchainAST1 CID = {2FE0BD50-8F57-43BD-A9F5-2414233542A8} */
#ifndef __CID_EcoToolchainAST1
static const UGUID CID_EcoToolchainAST1 = {0x01, 0x10, {0x2F, 0xE0, 0xBD, 0x50, 0x8F, 0x57, 0x43, 0xBD, 0xA9, 0xF5, 0x24, 0x14, 0x23, 0x35, 0x42, 0xA8}};
#endif /* __CID_EcoToolchainAST1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_2FE0BD508F5743BDA9F52414233542A8;
#endif

#endif /* __ID_ECO_TOOLCHAIN_AST_1_H__ */
