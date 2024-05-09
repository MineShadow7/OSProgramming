/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoToolchainCodeGenerator1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoToolchainCodeGenerator1
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

#ifndef __ID_ECO_TOOLCHAIN_CODE_GENERATOR_1_H__
#define __ID_ECO_TOOLCHAIN_CODE_GENERATOR_1_H__

#include "IEcoBase1.h"
#include "IEcoToolchainCodeGenerator1.h"
#include "IEcoToolchainCodeGenerator1Fixup.h"

/* IEcoToolchainCodeGenerator1 CID = {2BF1E511-54E4-41A9-ADC8-2D0930FC5CD0} */
#ifndef __CID_EcoToolchainCodeGenerator1
static const UGUID CID_EcoToolchainCodeGenerator1 = {0x01, 0x10, {0x2B, 0xF1, 0xE5, 0x11, 0x54, 0xE4, 0x41, 0xA9, 0xAD, 0xC8, 0x2D, 0x09, 0x30, 0xFC, 0x5C, 0xD0} };
#endif /* __CID_EcoToolchainCodeGenerator1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_2BF1E51154E441A9ADC82D0930FC5CD0;
#endif

#endif /* __ID_ECO_TOOLCHAIN_CODE_GENERATOR_1_H__ */
