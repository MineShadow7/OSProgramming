/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoOpenGLES1Common
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoOpenGLES1Common
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

#ifndef __I_ECO_OPEN_GL_ES_1_COMMON_H__
#define __I_ECO_OPEN_GL_ES_1_COMMON_H__

#include "IEcoBase1.h"
#include "IEcoOpenGLES1CommonLite.h"

/* IEcoOpenGLES1Common IID = {9EA8520D-5626-4C6F-AFA6-18179C9F5AEE} */
#ifndef __IID_IEcoOpenGLES1Common
static const UGUID IID_IEcoOpenGLES1Common = {0x01, 0x10, {0x9E, 0xA8, 0x52, 0x0D, 0x56, 0x26, 0x4C, 0x6F, 0xAF, 0xA6, 0x18, 0x17, 0x9C, 0x9F, 0x5A, 0xEE} };
#endif /* __IID_IEcoOpenGLES1Common */

typedef struct IEcoOpenGLES1Common* IEcoOpenGLES1CommonPtr_t;

typedef struct IEcoOpenGLES1CommonVTbl {

    /* IEcoUnknown */
    int16_t (*QueryInterface)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t*  ppv);
    uint32_t (*AddRef)(/* in */ IEcoOpenGLES1CommonPtr_t me);
    uint32_t (*Release)(/* in */ IEcoOpenGLES1CommonPtr_t me);

    /* IEcoOpenGLES1CommonLite */
    void (*ActiveTexture)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum texture);
    void (*AlphaFuncx)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum func, /* in */ GLclampx ref);
    void (*BindBuffer)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLuint buffer);
    void (*BindTexture)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLuint texture);
    void (*BlendFunc)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum sfactor, /* in */ GLenum dfactor);
//2.0    void (*BufferData)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, GLsizeiptr size, const GLvoid *data, GLenum usage);
//2.0    void (*BufferSubData)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid *data);
    void (*Clear)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLbitfield mask);
    void (*ClearColorx)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLclampx red, /* in */ GLclampx green, /* in */ GLclampx blue, /* in */ GLclampx alpha);
    void (*ClearDepthx)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLclampx depth);
    void (*ClearStencil)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLint s);
    void (*ClientActiveTexture)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum texture);
    void (*ClipPlanex)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum plane, /* in */ const GLfixed *equation);
    void (*Color4ub)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLubyte red, /* in */ GLubyte green, /* in */ GLubyte blue, /* in */ GLubyte alpha);
    void (*Color4x)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfixed red, /* in */ GLfixed green, /* in */ GLfixed blue, /* in */ GLfixed alpha);
    void (*ColorMask)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLboolean red, /* in */ GLboolean green, /* in */ GLboolean blue, /* in */ GLboolean alpha);
    void (*ColorPointer)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLint size, /* in */ GLenum type, /* in */ GLsizei stride, /* in */ const GLvoid *pointer);
    void (*CompressedTexImage2D)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLint level, /* in */ GLenum internalformat, /* in */ GLsizei width, /* in */ GLsizei height, /* in */ GLint border, /* in */ GLsizei imageSize, /* in */ const GLvoid *data);
    void (*CompressedTexSubImage2D)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLint level, /* in */ GLint xoffset, /* in */ GLint yoffset, /* in */ GLsizei width, /* in */ GLsizei height, /* in */ GLenum format, /* in */ GLsizei imageSize, /* in */ const GLvoid *data);
    void (*CopyTexImage2D)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLint level, /* in */ GLenum internalformat, /* in */ GLint x, /* in */ GLint y, /* in */ GLsizei width, /* in */ GLsizei height, /* in */ GLint border);
    void (*CopyTexSubImage2D)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLint level, /* in */ GLint xoffset, /* in */ GLint yoffset, /* in */ GLint x, /* in */ GLint y, /* in */ GLsizei width, /* in */ GLsizei height);
    void (*CullFace)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum mode);
    void (*DeleteBuffers)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLsizei n, /* in */ const GLuint *buffers);
    void (*DeleteTextures)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLsizei n, /* in */ const GLuint *textures);
    void (*DepthFunc)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum func);
    void (*DepthMask)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLboolean flag);
    void (*DepthRangex)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLclampx zNear, /* in */ GLclampx zFar);
    void (*Disable)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum cap);
    void (*DisableClientState)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum array);
    void (*DrawArrays)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum mode, /* in */ GLint first, /* in */ GLsizei count);
    void (*DrawElements)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum mode, /* in */ GLsizei count, /* in */ GLenum type, /* in */ const GLvoid *indices);
    void (*Enable)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum cap);
    void (*EnableClientState)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum array);
    void (*Finish)(/* in */ IEcoOpenGLES1CommonPtr_t me);
    void (*Flush)(/* in */ IEcoOpenGLES1CommonPtr_t me);
    void (*Fogx)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ GLfixed param);
    void (*Fogxv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ const GLfixed *params);
    void (*FrontFace)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum mode);
    void (*Frustumx)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfixed left, /* in */ GLfixed right, /* in */ GLfixed bottom, /* in */ GLfixed top, /* in */ GLfixed zNear, /* in */ GLfixed zFar);
    void (*GetBooleanv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ GLboolean *params);
    void (*GetBufferParameteriv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLenum pname, /* in */ GLint *params);
    void (*GetClipPlanex)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ GLfixed eqn[4]);
    void (*GenBuffers)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLsizei n, /* in */ GLuint *buffers);
    void (*GenTextures)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLsizei n, /* in */ GLuint *textures);
    GLenum (*GetError)(/* in */ IEcoOpenGLES1CommonPtr_t me);
    void (*GetFixedv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ GLfixed *params);
    void (*GetIntegerv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ GLint *params);
    void (*GetLightxv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum light, /* in */ GLenum pname, /* in */ GLfixed *params);
    void (*GetMaterialxv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum face, /* in */ GLenum pname, /* in */ GLfixed *params);
    void (*GetPointerv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ GLvoid **params);
    const GLubyte* (*glGetString)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum name);
    void (*GetTexEnviv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum env, /* in */ GLenum pname, /* in */ GLint *params);
    void (*GetTexEnvxv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum env, /* in */ GLenum pname, /* in */ GLfixed *params);
    void (*GetTexParameteriv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLenum pname, /* in */ GLint *params);
    void (*GetTexParameterxv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLenum pname, /* in */ GLfixed *params);
    void (*Hint)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLenum mode);
    GLboolean (*IsBuffer)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLuint buffer);
    GLboolean (*IsEnabled)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum cap);
    GLboolean (*IsTexture)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLuint texture);
    void (*LightModelx)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ GLfixed param);
    void (*LightModelxv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ const GLfixed *params);
    void (*Lightx)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum light, /* in */ GLenum pname, /* in */ GLfixed param);
    void (*Lightxv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum light, /* in */ GLenum pname, /* in */ const GLfixed *params);
    void (*LineWidthx)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfixed width);
    void (*LoadIdentity)(/* in */ IEcoOpenGLES1CommonPtr_t me);
    void (*LoadMatrixx)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ const GLfixed *m);
    void (*LogicOp)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum opcode);
    void (*Materialx)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum face, /* in */ GLenum pname, /* in */ GLfixed param);
    void (*Materialxv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum face, /* in */ GLenum pname, /* in */ const GLfixed *params);
    void (*MatrixMode)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum mode);
    void (*MultMatrixx)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ const GLfixed *m);
    void (*MultiTexCoord4x)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLfixed s, /* in */ GLfixed t, /* in */ GLfixed r, /* in */ GLfixed q);
    void (*Normal3x)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfixed nx, /* in */ GLfixed ny, /* in */ GLfixed nz);
    void (*NormalPointer)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum type, /* in */ GLsizei stride, /* in */ const GLvoid *pointer);
    void (*Orthox)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfixed left, /* in */ GLfixed right, /* in */ GLfixed bottom, /* in */ GLfixed top, /* in */ GLfixed zNear, /* in */ GLfixed zFar);
    void (*PixelStorei)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ GLint param);
    void (*PointParameterx)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ GLfixed param);
    void (*PointParameterxv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ const GLfixed *params);
    void (*PointSizex)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfixed size);
    void (*PolygonOffsetx)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfixed factor, /* in */ GLfixed units);
    void (*PopMatrix)(/* in */ IEcoOpenGLES1CommonPtr_t me);
    void (*PushMatrix)(/* in */ IEcoOpenGLES1CommonPtr_t me);
    void (*ReadPixels)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLint x, /* in */ GLint y, /* in */ GLsizei width, /* in */ GLsizei height, /* in */ GLenum format, /* in */ GLenum type, /* in */ GLvoid *pixels);
    void (*Rotatex)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfixed angle, /* in */ GLfixed x, /* in */ GLfixed y, /* in */ GLfixed z);
    void (*SampleCoverage)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLclampf value, /* in */ GLboolean invert);
    void (*SampleCoveragex)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLclampx value, /* in */ GLboolean invert);
    void (*Scalex)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfixed x, /* in */ GLfixed y, /* in */ GLfixed z);
    void (*Scissor)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLint x, /* in */ GLint y, /* in */ GLsizei width, /* in */ GLsizei height);
    void (*ShadeModel)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum mode);
    void (*StencilFunc)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum func, /* in */ GLint ref, /* in */ GLuint mask);
    void (*StencilMask)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLuint mask);
    void (*StencilOp)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum fail, /* in */ GLenum zfail, /* in */ GLenum zpass);
    void (*TexCoordPointer)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLint size, /* in */ GLenum type, /* in */ GLsizei stride, /* in */ const GLvoid *pointer);
    void (*TexEnvi)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLenum pname, /* in */ GLint param);
    void (*TexEnvx)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLenum pname, /* in */ GLfixed param);
    void (*TexEnviv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLenum pname, /* in */ const GLint *params);
    void (*TexEnvxv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLenum pname, /* in */ const GLfixed *params);
    void (*TexImage2D)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLint level, /* in */ GLint internalformat, /* in */ GLsizei width, /* in */ GLsizei height, /* in */ GLint border, /* in */ GLenum format, /* in */ GLenum type, /* in */ const GLvoid *pixels);
    void (*TexParameteri)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLenum pname, /* in */ GLint param);
    void (*TexParameterx)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLenum pname, /* in */ GLfixed param);
    void (*TexParameteriv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLenum pname, /* in */ const GLint *params);
    void (*TexParameterxv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLenum pname, /* in */ const GLfixed *params);
    void (*TexSubImage2D)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLint level, /* in */ GLint xoffset, /* in */ GLint yoffset, /* in */ GLsizei width, /* in */ GLsizei height, /* in */ GLenum format, /* in */ GLenum type, /* in */ const GLvoid *pixels);
    void (*Translatex)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfixed x, /* in */ GLfixed y, /* in */ GLfixed z);
    void (*VertexPointer)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLint size, /* in */ GLenum type, /* in */ GLsizei stride, /* in */ const GLvoid *pointer);
    void (*Viewport)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLint x, /* in */ GLint y, /* in */ GLsizei width, /* in */ GLsizei height);

    /* IEcoOpenGLES1Common */
    void (*AlphaFunc)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum func, /* in */ GLclampf ref);
    void (*ClearColor)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLclampf red, /* in */ GLclampf green, /* in */ GLclampf blue, /* in */ GLclampf alpha);
    void (*ClearDepthf)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLclampf depth);
    void (*ClipPlanef)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum plane, /* in */ const GLfloat *equation);
    void (*Color4f)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfloat red, /* in */ GLfloat green, /* in */ GLfloat blue, /* in */ GLfloat alpha);
    void (*DepthRangef)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLclampf zNear, /* in */ GLclampf zFar);
    void (*Fogf)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ GLfloat param);
    void (*Fogfv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ const GLfloat *params);
    void (*Frustumf)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfloat left, /* in */ GLfloat right, /* in */ GLfloat bottom, /* in */ GLfloat top, /* in */ GLfloat zNear, /* in */ GLfloat zFar);
    void (*GetClipPlanef)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ GLfloat eqn[4]);
    void (*GetFloatv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ GLfloat *params);
    void (*GetLightfv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum light, /* in */ GLenum pname, /* in */ GLfloat *params);
    void (*GetMaterialfv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum face, /* in */ GLenum pname, /* in */ GLfloat *params);
    void (*GetTexEnvfv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum env, /* in */ GLenum pname, /* in */ GLfloat *params);
    void (*GetTexParameterfv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLenum pname, /* in */ GLfloat *params);
    void (*LightModelf)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ GLfloat param);
    void (*LightModelfv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ const GLfloat *params);
    void (*Lightf)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum light, /* in */ GLenum pname, /* in */ GLfloat param);
    void (*Lightfv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum light, /* in */ GLenum pname, /* in */ const GLfloat *params);
    void (*LineWidth)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfloat width);
    void (*LoadMatrixf)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ const GLfloat *m);
    void (*Materialf)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum face, /* in */ GLenum pname, /* in */ GLfloat param);
    void (*Materialfv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum face, /* in */ GLenum pname, /* in */ const GLfloat *params);
    void (*MultMatrixf)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ const GLfloat *m);
    void (*MultiTexCoord4f)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLfloat s, /* in */ GLfloat t, /* in */ GLfloat r, /* in */ GLfloat q);
    void (*Normal3f)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfloat nx, /* in */ GLfloat ny, /* in */ GLfloat nz);
    void (*Orthof)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfloat left, /* in */ GLfloat right, /* in */ GLfloat bottom, /* in */ GLfloat top, /* in */ GLfloat zNear, /* in */ GLfloat zFar);
    void (*PointParameterf)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ GLfloat param);
    void (*PointParameterfv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum pname, /* in */ const GLfloat *params);
    void (*PointSize)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfloat size);
    void (*PolygonOffset)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfloat factor, /* in */ GLfloat units);
    void (*Rotatef)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfloat angle, /* in */ GLfloat x, /* in */ GLfloat y, /* in */ GLfloat z);
    void (*Scalef)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfloat x, /* in */ GLfloat y, /* in */ GLfloat z);
    void (*TexEnvf)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLenum pname, /* in */ GLfloat param);
    void (*TexEnvfv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLenum pname, /* in */ const GLfloat *params);
    void (*TexParameterf)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLenum pname, /* in */ GLfloat param);
    void (*TexParameterfv)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLenum target, /* in */ GLenum pname, /* in */ const GLfloat *params);
    void (*Translatef)(/* in */ IEcoOpenGLES1CommonPtr_t me, /* in */ GLfloat x, /* in */ GLfloat y, /* in */ GLfloat z);

} IEcoOpenGLES1CommonVTbl, *IEcoOpenGLES1CommonVTblPtr;

interface IEcoOpenGLES1Common {
    struct IEcoOpenGLES1CommonVTbl *pVTbl;
} IEcoOpenGLES1Common;

#endif /* __I_ECO_OPEN_GL_ES_1_COMMON_H__ */
