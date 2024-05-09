/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoQueue1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию интерфейсов IdEcoQueue1
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2016 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __ID_ECO_QUEUE_1_H__
#define __ID_ECO_QUEUE_1_H__

#include "IEcoBase1.h"
#include "IEcoQueue1.h"

/* EcoQueue1 CID = {25D72F83-A256-4F4E-9F59-E489BE85E2A4} */
#ifndef __CID_EcoQueue1
static const UGUID CID_EcoQueue1 = {0x01, 0x10, {0x25, 0xD7, 0x2F, 0x83, 0xA2, 0x56, 0x4F, 0x4E, 0x9F, 0x59, 0xE4, 0x89, 0xBE, 0x85, 0xE2, 0xA4} };
#endif /* __CID_EcoQueue1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_25D72F83A2564F4E9F59E489BE85E2A4;
#endif

#endif /* __ID_ECO_QUEUE_1_H__ */

