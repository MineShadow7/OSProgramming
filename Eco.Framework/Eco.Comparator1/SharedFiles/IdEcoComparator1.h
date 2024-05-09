/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoComparator1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoComparator1
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

#ifndef __ID_ECO_COMPARATOR_1_H__
#define __ID_ECO_COMPARATOR_1_H__

#include "IEcoBase1.h"
#include "IEcoComparator1.h"

/* EcoComparator1 CID = {C7ED3BA4-B6EB-4385-BBDB-3C6AC5C7A394} */
#ifndef __CID_EcoComparator1
static const UGUID CID_EcoComparator1 = {0x01, 0x10, {0xC7, 0xED, 0x3B, 0xA4, 0xB6, 0xEB, 0x43, 0x85, 0xBB, 0xDB, 0x3C, 0x6A, 0xC5, 0xC7, 0xA3, 0x94}};
#endif /* __CID_EcoComparator1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_C7ED3BA4B6EB4385BBDB3C6AC5C7A394;
#endif

#endif /* __ID_ECO_COMPARATOR_1_H__ */
