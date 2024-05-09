/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoData1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoData1
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

#ifndef __ID_ECO_DATA_1_H__
#define __ID_ECO_DATA_1_H__

#include "IEcoBase1.h"
#include "IEcoData1.h"

/* EcoData1 CID = {5A0F0DD5-7E64-48EC-9EE0-E5D67572B47E} */
#ifndef __CID_EcoData1
static const UGUID CID_EcoData1 = {0x01, 0x10, {0x5A, 0x0F, 0x0D, 0xD5, 0x7E, 0x64, 0x48, 0xEC, 0x9E, 0xE0, 0xE5, 0xD6, 0x75, 0x72, 0xB4, 0x7E} };
#endif /* __CID_EcoData1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_5A0F0DD57E6448EC9EE0E5D67572B47E;
#endif

#endif /* __ID_ECO_DATA_1_H__ */
