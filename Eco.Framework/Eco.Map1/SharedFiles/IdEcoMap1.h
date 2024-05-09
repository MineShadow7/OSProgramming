/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoMap1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoMap1
 * </описание>
 *
 * <ссылка>
 *
 * </ссылка>
 *
 * <автор>
 *   Copyright (c) 2021 Margarita Mezina. All rights reserved.
 * </автор>
 *
 */

#ifndef __ID_ECO_MAP_1_H__
#define __ID_ECO_MAP_1_H__

#include "IEcoBase1.h"
#include "IEcoMap1.h"

/* EcoMap1 CID = {0D7907DB-E1C1-4B9E-9B9F-D9E8D9E251DF} */
#ifndef __CID_EcoMap1
static const UGUID CID_EcoMap1 = {0x01, 0x10, {0x0D, 0x79, 0x07, 0xDB, 0xE1, 0xC1, 0x4B, 0x9E, 0x9B, 0x9F, 0xD9, 0xE8, 0xD9, 0xE2, 0x51, 0xDF} };
#endif /* __CID_EcoMap1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_0D7907DBE1C14B9E9B9FD9E8D9E251DF;
#endif

#endif /* __ID_ECO_MAP_1_H__ */
