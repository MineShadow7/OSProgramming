/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoToolchainEmitterI80686
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoToolchainEmitterI80686
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

#ifndef __ID_ECO_TOOLCHAIN_EMITTER_I80686_H__
#define __ID_ECO_TOOLCHAIN_EMITTER_I80686_H__

#include "IEcoBase1.h"
#include "IEcoToolchainEmitter1.h"

/* EcoToolchainEmitterI80686 CID = {67198C87-46EB-4AEC-B589-ED4E68000FD9} */
#ifndef __CID_EcoToolchainEmitterI80686
static const UGUID CID_EcoToolchainEmitterI80686 = {0x01, 0x10, {0x67, 0x19, 0x8C, 0x87, 0x46, 0xEB, 0x4A, 0xEC, 0xB5, 0x89, 0xED, 0x4E, 0x68, 0x00, 0x0F, 0xD9} };
#endif /* __CID_EcoToolchainEmitterI80686 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_67198C8746EB4AECB589ED4E68000FD9;
#endif

#endif /* __ID_ECO_TOOLCHAIN_EMITTER_I80686_H__ */
