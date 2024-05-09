/*
 * <кодировка символов>
 *   Cyrillic (Windows) - Codepage 1251
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoObserver1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoObserver1
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

#ifndef __ID_ECO_OBSERVER_1_H__
#define __ID_ECO_OBSERVER_1_H__

#include "IEcoBase1.h"
#include "IEcoObserver1.h"

/* EcoObserver1 CID = {2A1A9CF6-0C72-4209-A401-543FF529E3B9} */
#ifndef __CID_EcoObserver1
static const UGUID CID_EcoObserver1 = {0x01, 0x10, {0x2A, 0x1A, 0x9C, 0xF6, 0x0C, 0x72, 0x42, 0x09, 0xA4, 0x01, 0x54, 0x3F, 0xF5, 0x29, 0xE3, 0xB9} };
#endif /* __CID_EcoObserver1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_2A1A9CF60C724209A401543FF529E3B9;
#endif

#endif /* __ID_ECO_OBSERVER_1_H__ */
