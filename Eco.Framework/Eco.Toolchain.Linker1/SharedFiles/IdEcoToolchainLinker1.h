/*
 * <кодировка символов>
 *   Cyrillic (Windows) - Codepage 1251
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoToolchainLinker1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoToolchainLinker1
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

#ifndef __ID_ECO_TOOLCHAIN_LINKER_1_H__
#define __ID_ECO_TOOLCHAIN_LINKER_1_H__

#include "IEcoBase1.h"
#include "IEcoToolchainLinker1.h"

/* EcoToolchainLinker1 CID = {1E7247F8-03CE-4A30-B3A0-C00E9F6D5C17} */
#ifndef __CID_EcoToolchainLinker1
static const UGUID CID_EcoToolchainLinker1 = {0x01, 0x10, {0x1E, 0x72, 0x47, 0xF8, 0x03, 0xCE, 0x4A, 0x30, 0xB3, 0xA0, 0xC0, 0x0E, 0x9F, 0x6D, 0x5C, 0x17} };
#endif /* __CID_EcoToolchainLinker1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_1E7247F803CE4A30B3A0C00E9F6D5C17;
#endif

#endif /* __ID_ECO_TOOLCHAIN_LINKER_1_H__ */
