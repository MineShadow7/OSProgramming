/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoSet1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoSet1
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

#ifndef __ID_ECO_SET_1_H__
#define __ID_ECO_SET_1_H__

#include "IEcoBase1.h"
#include "IEcoSet1.h"

/* EcoSet1 CID = {7750135D-34D7-4618-97B9-12F7CC615F72} */
#ifndef __CID_EcoSet1
static const UGUID CID_EcoSet1 = {0x01, 0x10, {0x77, 0x50, 0x13, 0x5D, 0x34, 0xD7, 0x46, 0x18, 0x97, 0xB9, 0x12, 0xF7, 0xCC, 0x61, 0x5F, 0x72} };
#endif /* __CID_EcoSet1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_7750135D34D7461897B912F7CC615F72;
#endif

#endif /* __ID_ECO_SET_1_H__ */
