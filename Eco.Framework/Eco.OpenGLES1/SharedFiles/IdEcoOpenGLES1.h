/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoOpenGLES1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IdEcoOpenGLES1
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

#ifndef __ID_ECO_OPEN_GL_ES_1_H__
#define __ID_ECO_OPEN_GL_ES_1_H__

#include "IEcoBase1.h"
#include "IEcoOpenGLES1.h"

/* EcoOpenGLES1 CID = {80052674-C7A6-4B99-93E2-B7C03BA6551F} */
#ifndef __CID_EcoOpenGLES1
static const UGUID CID_EcoOpenGLES1 = {0x01, 0x10, {0x80, 0x05, 0x26, 0x74, 0xC7, 0xA6, 0x4B, 0x99, 0x93, 0xE2, 0xB7, 0xC0, 0x3B, 0xA6, 0x55, 0x1F} };
#endif /* __CID_EcoOpenGLES1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_80052674C7A64B9993E2B7C03BA6551F;
#endif

#endif /* __ID_ECO_OPEN_GL_ES_1_H__ */
