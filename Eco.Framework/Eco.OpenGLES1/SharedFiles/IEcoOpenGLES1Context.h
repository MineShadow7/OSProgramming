/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoOpenGLES1Context
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoOpenGLES1Context
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

#ifndef __I_ECO_OPEN_GL_ES_1_CONTEXT_H__
#define __I_ECO_OPEN_GL_ES_1_CONTEXT_H__

#include "IEcoBase1.h"

/* IEcoOpenGLES1Context IID = {3789C62D-3299-467B-9F58-2D6A7EF465A7} */
#ifndef __IID_IEcoOpenGLES1Context
static const UGUID IID_IEcoOpenGLES1Context = {0x01, 0x10, {0x37, 0x89, 0xC6, 0x2D, 0x32, 0x99, 0x46, 0x7B, 0x9F, 0x58, 0x2D, 0x6A, 0x7E, 0xF4, 0x65, 0xA7} };
#endif /* __IID_IEcoOpenGLES1Context */

typedef struct IEcoOpenGLES1Context* IEcoOpenGLES1ContextPtr_t;

typedef struct IEcoOpenGLES1ContextVTbl {

    /* IEcoUnknown */
    int16_t (*QueryInterface)(/* in */ IEcoOpenGLES1ContextPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t*  ppv);
    uint32_t (*AddRef)(/* in */ IEcoOpenGLES1ContextPtr_t me);
    uint32_t (*Release)(/* in */ IEcoOpenGLES1ContextPtr_t me);

    /* IEcoOpenGLES1Context */
} IEcoOpenGLES1ContextVTbl, *IEcoOpenGLES1ContextVTblPtr;

interface IEcoOpenGLES1Context {
    struct IEcoOpenGLES1ContextVTbl *pVTbl;
} IEcoOpenGLES1Context;

#endif /* __I_ECO_OPEN_GL_ES_1_CONTEXT_H__ */
