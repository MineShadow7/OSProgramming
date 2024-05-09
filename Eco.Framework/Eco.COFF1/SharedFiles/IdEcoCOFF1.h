/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoCOFF1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoCOFF1
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

#ifndef __ID_ECO_COFF_1_H__
#define __ID_ECO_COFF_1_H__

#include "IEcoBase1.h"
#include "IEcoCOFF1.h"

/* EcoCOFF1 CID = {1CDF093D-22EF-4917-BC29-1E4889866214} */
#ifndef __CID_EcoCOFF1
static const UGUID CID_EcoCOFF1 = {0x01, 0x10, {0x1C, 0xDF, 0x09, 0x3D, 0x22, 0xEF, 0x49, 0x17, 0xBC, 0x29, 0x1E, 0x48, 0x89, 0x86, 0x62, 0x14} };
#endif /* __CID_EcoCOFF1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_1CDF093D22EF4917BC291E4889866214;
#endif

#endif /* __ID_ECO_COFF_1_H__ */
