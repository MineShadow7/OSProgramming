/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoTree1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoTree1
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

#ifndef __ID_ECO_TREE_1_H__
#define __ID_ECO_TREE_1_H__

#include "IEcoBase1.h"
#include "IEcoTree1.h"

/* EcoTree1 CID = {82F73722-057E-47F3-A293-1ED27087694D} */
#ifndef __CID_EcoTree1
static const UGUID CID_EcoTree1 = {0x01, 0x10, {0x82, 0xF7, 0x37, 0x22, 0x05, 0x7E, 0x47, 0xF3, 0xA2, 0x93, 0x1E, 0xD2, 0x70, 0x87, 0x69, 0x4D} };
#endif /* __CID_EcoTree1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_82F73722057E47F3A2931ED27087694D;
#endif

#endif /* __ID_ECO_TREE_1_H__ */

