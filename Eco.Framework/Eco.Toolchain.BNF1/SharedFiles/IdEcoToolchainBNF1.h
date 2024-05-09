/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IdEcoBNF1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию интерфейса IdEcoBNF1,
 *   согластно стандарту разработанному группой Network Working Group
 * </описание>
 *
 * <ссылка>
 *   Стандарт: Augmented BNF for Syntax Specifications: ABNF
 *             RFC: 5234
 *             January 2008
 *             Network Working Group
 *             file:///rfc5234.pdf
 * </ссылка>
 *
 * <автор>
 *   Copyright (c) 2018 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __ID_ECO_TOOLCHAIN_BACKUS_NAUR_FORM_1_H__
#define __ID_ECO_TOOLCHAIN_BACKUS_NAUR_FORM_1_H__

#include "IEcoBase1.h"
#include "IEcoToolchainBNF1.h"

/* EcoToolchainBNF1 CID = {323DD55E-33D0-40FA-9806-8E2FCB1CBD49} */
#ifndef __CID_EcoToolchainBNF1
static const UGUID CID_EcoToolchainBNF1 = {0x01, 0x10, {0x32, 0x3D, 0xD5, 0x5E, 0x33, 0xD0, 0x40, 0xFA, 0x98, 0x06, 0x8E, 0x2F, 0xCB, 0x1C, 0xBD, 0x49} };
#endif /* __CID_EcoToolchainBNF1 */

/* Фабрика компонента для динамической и статической компановки */
#ifdef ECO_DLL
ECO_EXPORT IEcoComponentFactory* ECOCALLMETHOD GetIEcoComponentFactoryPtr();
#elif ECO_LIB
extern IEcoComponentFactory* GetIEcoComponentFactoryPtr_323DD55E33D040FA98068E2FCB1CBD49;
#endif

#endif /* __ID_ECO_TOOLCHAIN_BACKUS_NAUR_FORM_1_H__ */
