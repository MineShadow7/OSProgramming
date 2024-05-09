/*
 * <кодировка символов>
 *   Cyrillic (Windows) - Codepage 1251
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoDictionary1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию интерфейсов IdEcoDictionary1
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2016 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __ID_ECO_DICTIONARY_1_H__
#define __ID_ECO_DICTIONARY_1_H__

#include "IEcoBase1.h"
#include "IEcoDictionary1.h"

/* EcoDictionary1 CID = {2912A7C7-E0B8-4B4D-9BFE-9500EF4667D3} */
#ifndef __CID_EcoDictionary1
static const UGUID CID_EcoDictionary1 = {0x01, 0x10, {0x29, 0x12, 0xA7, 0xC7, 0xE0, 0xB8, 0x4B, 0x4D, 0x9B, 0xFE, 0x95, 0x00, 0xEF, 0x46, 0x67, 0xD3} };
#endif /* __CID_EcoDictionary1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_2912A7C7E0B84B4D9BFE9500EF4667D3;
#endif

#endif /* __ID_ECO_DICTIONARY_1_H__ */

