/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoMZEXE1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoMZEXE1
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

#ifndef __ID_ECO_MZ_EXE_1_H__
#define __ID_ECO_MZ_EXE_1_H__

#include "IEcoBase1.h"
#include "IEcoMZEXE1.h"

/* EcoMZEXE1 CID = {21AC03CF-9475-43DA-A5EA-FD840E6C24AE} */
#ifndef __CID_EcoMZEXE1
static const UGUID CID_EcoMZEXE1 = {0x01, 0x10, {0x21, 0xAC, 0x03, 0xCF, 0x94, 0x75, 0x43, 0xDA, 0xA5, 0xEA, 0xFD, 0x84, 0x0E, 0x6C, 0x24, 0xAE} };
#endif /* __CID_EcoMZEXE1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_21AC03CF947543DAA5EAFD840E6C24AE;
#endif

#endif /* __ID_ECO_MZ_EXE_1_H__ */
