/*
 * <кодировка символов>
 *   Cyrillic (Windows) - Codepage 1251
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoVisitor1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoVisitor1
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

#ifndef __ID_ECO_VISITOR_1_H__
#define __ID_ECO_VISITOR_1_H__

#include "IEcoBase1.h"
#include "IEcoVisitor1.h"

/* EcoVisitor1 CID = {4E7C20FE-FAF3-4106-9B5C-42497B462BBE} */
#ifndef __CID_EcoVisitor1
static const UGUID CID_EcoVisitor1 = {0x01, 0x10, {0x4E, 0x7C, 0x20, 0xFE, 0xFA, 0xF3, 0x41, 0x06, 0x9B, 0x5C, 0x42, 0x49, 0x7B, 0x46, 0x2B, 0xBE} };
#endif /* __CID_EcoVisitor1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_4E7C20FEFAF341069B5C42497B462BBE;
#endif

#endif /* __ID_ECO_VISITOR_1_H__ */
