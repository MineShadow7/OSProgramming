/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoPECOFF1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoPECOFF1
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

#ifndef __ID_ECO_PE_COFF_1_H__
#define __ID_ECO_PE_COFF_1_H__

#include "IEcoBase1.h"
#include "IEcoPECOFF1.h"

/* EcoPECOFF1 CID = {46511227-059E-4D48-8D6F-A8123FA0A383} */
#ifndef __CID_EcoPECOFF1
static const UGUID CID_EcoPECOFF1 = {0x01, 0x10, {0x46, 0x51, 0x12, 0x27, 0x05, 0x9E, 0x4D, 0x48, 0x8D, 0x6F, 0xA8, 0x12, 0x3F, 0xA0, 0xA3, 0x83} };
#endif /* __CID_EcoPECOFF1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_46511227059E4D488D6FA8123FA0A383;
#endif

#endif /* __ID_ECO_PE_COFF_1_H__ */
