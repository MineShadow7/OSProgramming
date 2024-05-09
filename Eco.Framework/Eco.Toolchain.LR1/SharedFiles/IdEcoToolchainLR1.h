/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoToolchainLR1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoToolchainLR1
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

#ifndef __ID_ECO_TOOLCHAIN_LR_1_H__
#define __ID_ECO_TOOLCHAIN_LR_1_H__

#include "IEcoBase1.h"
#include "IEcoToolchainParser1LRk.h"
#include "IEcoToolchainParser1ActionProcessing.h"

/* EcoToolchainLR1 CID = {69173E0D-97DF-4B23-AAE0-5D9CDA852EE2} */
#ifndef __CID_EcoToolchainLR1
static const UGUID CID_EcoToolchainLR1 = {0x01, 0x10, {0x69, 0x17, 0x3E, 0x0D, 0x97, 0xDF, 0x4B, 0x23, 0xAA, 0xE0, 0x5D, 0x9C, 0xDA, 0x85, 0x2E, 0xE2} };
#endif /* __CID_EcoToolchainLR1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_69173E0D97DF4B23AAE05D9CDA852EE2;
#endif

#endif /* __ID_ECO_TOOLCHAIN_LR_1_H__ */
