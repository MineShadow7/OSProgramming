/*
 * <кодировка символов>
 *   Cyrillic (Windows) - Codepage 1251
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoToolchainRL1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoToolchainRL1
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

#ifndef __ID_ECO_TOOLCHAIN_REGULAR_LANGUAGES_1_H__
#define __ID_ECO_TOOLCHAIN_REGULAR_LANGUAGES_1_H__

#include "IEcoBase1.h"
#include "IEcoToolchainRL1.h"

/* EcoToolchainRL1 CID = {9D51655E-6B85-42ED-B7D0-CC7C9980D749} */
#ifndef __CID_EcoToolchainRL1
static const UGUID CID_EcoToolchainRL1 = {0x01, 0x10, 0x9D, 0x51, 0x65, 0x5E, 0x6B, 0x85, 0x42, 0xED, 0xB7, 0xD0, 0xCC, 0x7C, 0x99, 0x80, 0xD7, 0x49};
#endif /* __CID_EcoToolchainRL1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_9D51655E6B8542EDB7D0CC7C9980D749;
#endif

#endif /* __ID_ECO_TOOLCHAIN_REGULAR_LANGUAGES_1_H__ */
