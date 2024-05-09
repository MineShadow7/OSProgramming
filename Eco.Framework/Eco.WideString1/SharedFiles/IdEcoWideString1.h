/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoWideString1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoWideString1
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

#ifndef __ID_ECO_WIDE_STRING_1_H__
#define __ID_ECO_WIDE_STRING_1_H__

#include "IEcoBase1.h"
#include "IEcoWideString1.h"

/* EcoWideString1 CID = {737E8AD7-A23A-4CFB-B1B6-48A5B7F1E835} */
#ifndef __CID_EcoWideString1
static const UGUID CID_EcoWideString1 = {0x01, 0x10, {0x73, 0x7E, 0x8A, 0xD7, 0xA2, 0x3A, 0x4C, 0xFB, 0xB1, 0xB6, 0x48, 0xA5, 0xB7, 0xF1, 0xE8, 0x35} };
#endif /* __CID_EcoWideString1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_737E8AD7A23A4CFBB1B648A5B7F1E835;
#endif

#endif /* __ID_ECO_WIDE_STRING_1_H__ */
