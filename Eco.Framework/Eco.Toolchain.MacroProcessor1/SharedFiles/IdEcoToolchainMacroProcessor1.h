/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoToolchainMacroProcessor1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoToolchainMacroProcessor1
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

#ifndef __ID_ECO_TOOLCHAIN_MACRO_PROCESSOR_1_H__
#define __ID_ECO_TOOLCHAIN_MACRO_PROCESSOR_1_H__

#include "IEcoBase1.h"
#include "IEcoToolchainMacroProcessor1.h"

/* EcoToolchainMacroProcessor1 CID = {A06E8BB9-9133-4E0C-84CD-AE59AE984DB9} */
#ifndef __CID_EcoToolchainMacroProcessor1
static const UGUID CID_EcoToolchainMacroProcessor1 = {0x01, 0x10, {0xA0, 0x6E, 0x8B, 0xB9, 0x91, 0x33, 0x4E, 0x0C, 0x84, 0xCD, 0xAE, 0x59, 0xAE, 0x98, 0x4D, 0xB9} };
#endif /* __CID_EcoToolchainMacroProcessor1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_A06E8BB991334E0C84CDAE59AE984DB9;
#endif

#endif /* __ID_ECO_TOOLCHAIN_MACRO_PROCESSOR_1_H__ */
