/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoOpenGLES1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoOpenGLES1
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

#ifndef __I_ECO_OPEN_GL_ES_1_H__
#define __I_ECO_OPEN_GL_ES_1_H__

#include "IEcoBase1.h"
#include "IEcoOpenGLES1Context.h"
#include "IEcoOpenGLES1Common.h"

/* OpenGL ES profile ID */
#define ECO_GL_ES_1_PROFILE_IDENTIFIER_COMMON       0
#define ECO_GL_ES_1_PROFILE_IDENTIFIER_COMMON_LITE  1

/* OpenGL ES query attributes */
#define ECO_GL_ES_1_ATTRIBUTE_HEIGHT                0x1010
#define ECO_GL_ES_1_ATTRIBUTE_WIDTH                 0x1011

/* IEcoOpenGLES1 IID = {D9DC3C5A-23D5-4582-A722-F7797F14D499} */
#ifndef __IID_IEcoOpenGLES1
static const UGUID IID_IEcoOpenGLES1 = {0x01, 0x10, {0xD9, 0xDC, 0x3C, 0x5A, 0x23, 0xD5, 0x45, 0x82, 0xA7, 0x22, 0xF7, 0x79, 0x7F, 0x14, 0xD4, 0x99} };
#endif /* __IID_IEcoOpenGLES1 */

typedef struct IEcoOpenGLES1* IEcoOpenGLES1Ptr_t;

typedef struct IEcoOpenGLES1VTbl {

    /* IEcoUnknown */
    int16_t (*QueryInterface)(/* in */ IEcoOpenGLES1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t*  ppv);
    uint32_t (*AddRef)(/* in */ IEcoOpenGLES1Ptr_t me);
    uint32_t (*Release)(/* in */ IEcoOpenGLES1Ptr_t me);

    /* IEcoOpenGLES1 */
    IEcoUnknown* (*get_Commands)(/* in */ IEcoOpenGLES1Ptr_t me, /* in */ uint8_t profileId);
    IEcoOpenGLES1Context* (*CreateContext)(/* in */ IEcoOpenGLES1Ptr_t me, /* in */ ...);
    int16_t (*MakeCurrent)(/* in */ IEcoOpenGLES1Ptr_t me, /* in */ IEcoOpenGLES1Context* pIRenderContext);
    bool_t (*QueryInfo)(/* in */ IEcoOpenGLES1Ptr_t me, /* in */ uint16_t attr, /* in */ voidptr_t value);
    bool_t (*SwapBuffers)(/* in */ IEcoOpenGLES1Ptr_t me);

} IEcoOpenGLES1VTbl, *IEcoOpenGLES1VTblPtr;

interface IEcoOpenGLES1 {
    struct IEcoOpenGLES1VTbl *pVTbl;
} IEcoOpenGLES1;


#endif /* __I_ECO_OPEN_GL_ES_1_H__ */
