/*
 * <кодировка символов>
 *   Cyrillic (Windows) - Codepage 1251
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoStack1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoStack1
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

#ifndef __ID_ECO_STACK_1_H__
#define __ID_ECO_STACK_1_H__

#include "IEcoBase1.h"
#include "IEcoStack1.h"

/* EcoStack1 CID = {18129B1D-CF92-48D9-A778-7F9206E2D6DC} */
#ifndef __CID_EcoStack1
static const UGUID CID_EcoStack1 = {0x01, 0x10, {0x18, 0x12, 0x9B, 0x1D, 0xCF, 0x92, 0x48, 0xD9, 0xA7, 0x78, 0x7F, 0x92, 0x06, 0xE2, 0xD6, 0xDC} };
#endif /* __CID_EcoStack1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_18129B1DCF9248D9A7787F9206E2D6DC;
#endif

#endif /* __ID_ECO_STACK_1_H__ */

