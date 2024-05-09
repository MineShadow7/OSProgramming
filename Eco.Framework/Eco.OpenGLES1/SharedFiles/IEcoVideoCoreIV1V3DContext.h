/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoVideoCoreIV1V3DContext
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoVideoCoreIV1V3DContext
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

#ifndef __I_ECO_VIDEO_CORE_IV_1_V3D_CONTEXT_H__
#define __I_ECO_VIDEO_CORE_IV_1_V3D_CONTEXT_H__

#include "IEcoBase1.h"

typedef enum {
  PRIM_POINT = 0,
  PRIM_LINE = 1,
  PRIM_LINE_LOOP = 2,
  PRIM_LINE_STRIP = 3,
  PRIM_TRIANGLE = 4,
  PRIM_TRIANGLE_STRIP = 5,
  PRIM_TRIANGLE_FAN = 6,
} PRIMITIVE;

typedef enum {
    ECO_VC_IV_BINNING_MODE      = 0,
    ECO_VC_IV_RENDERING_MODE    = 1
} ECO_VC_IV_CONTROL_MODE_LISTS;

typedef enum {
    ECO_VC_IV_CODE_HALT                             = 0,
    ECO_VC_IV_CODE_NOP                              = 1,
    ECO_VC_IV_CODE_FLUSH                            = 4,
    ECO_VC_IV_CODE_FLUSH_ALL_STATE                  = 5,
    ECO_VC_IV_CODE_START_TILE_BINNING               = 6,
    ECO_VC_IV_CODE_INCREMENT_SEMAPHORE              = 7,
    ECO_VC_IV_CODE_WAIT_ON_SEMAPHORE                = 8,
    ECO_VC_IV_CODE_BRANCH                           = 16,
    ECO_VC_IV_CODE_BRANCH_TO_SUBLIST                = 17,
    ECO_VC_IV_CODE_RETURN_FROM_SUBLIST              = 18,
    ECO_VC_IV_CODE_STORE_MULTISAMPLE                = 24,
    ECO_VC_IV_CODE_STORE_MULTISAMPLE_END            = 25,
    ECO_VC_IV_CODE_STORE_FULL_TILE_BUFFER           = 26,
    ECO_VC_IV_CODE_RELOAD_FULL_TILE_BUFFER          = 27,
    ECO_VC_IV_CODE_STORE_TILE_BUFFER                = 28,
    ECO_VC_IV_CODE_LOAD_TILE_BUFFER                 = 29,
    ECO_VC_IV_CODE_INDEXED_PRIMITIVE_LIST           = 32,
    ECO_VC_IV_CODE_VERTEX_ARRAY_PRIMITIVES          = 33,
    ECO_VC_IV_CODE_VG_COORDINATE_ARRAY_PRIMITIVES   = 41,
    ECO_VC_IV_CODE_COMPRESSED_PRIMITIVE_LIST        = 48,
    ECO_VC_IV_CODE_CLIP_COMPRESSD_PRIMITIVE_LIST    = 49,
    ECO_VC_IV_CODE_PRIMITIVE_LIST_FORMAT            = 56,
    ECO_VC_IV_CODE_SHADER_STATE                     = 64,
    ECO_VC_IV_CODE_NV_SHADER_STATE                  = 65,
    ECO_VC_IV_CODE_VG_SHADER_STATE                  = 66,
    ECO_VC_IV_CODE_VG_INLINE_SHADER_RECORD          = 67,
    ECO_VC_IV_CODE_CONFIG_STATE                     = 96,
    ECO_VC_IV_CODE_FLAT_SHADE_FLAGS                 = 97,
    ECO_VC_IV_CODE_POINTS_SIZE                      = 98,
    ECO_VC_IV_CODE_LINE_WIDTH                       = 99,
    ECO_VC_IV_CODE_RHT_X_BOUNDARY                   = 100,
    ECO_VC_IV_CODE_DEPTH_OFFSET                     = 101,
    ECO_VC_IV_CODE_CLIP_WINDOW                      = 102,
    ECO_VC_IV_CODE_VIEWPORT_OFFSET                  = 103,
    ECO_VC_IV_CODE_Z_CLIPPING_PLANES                = 104,
    ECO_VC_IV_CODE_CLIPPER_XY_SCALING               = 105,
    ECO_VC_IV_CODE_CLIPPER_Z_ZSCALE_OFFSET          = 106,
    ECO_VC_IV_CODE_TILE_BINNING_CONFIG              = 112,
    ECO_VC_IV_CODE_TILE_RENDER_CONFIG               = 113,
    ECO_VC_IV_CODE_CLEAR_COLORS                     = 114,
    ECO_VC_IV_CODE_TILE_COORDINATES                 = 115
} ECO_VC_IV_CONTROL_CODES;

typedef struct __attribute__((packed)) ECO_VC_IV_DATA_BRANCH {
    uint32_t AbsoluteBranchAddress;
} ECO_VC_IV_DATA_BRANCH;

typedef struct __attribute__((packed)) ECO_VC_IV_DATA_BRANCH_TO_SUBLIST {
    uint32_t AbsoluteBranchAddress;
} ECO_VC_IV_DATA_BRANCH_TO_SUBLIST;

typedef struct __attribute__((packed)) ECO_VC_IV_DATA_STORE_TILE_BUFFER {
    struct {
        uint16_t BufferToStore              : 3;
        uint16_t Unused0                    : 1;
        uint16_t Format                     : 2;
        uint16_t Mode                       : 2;
        uint16_t PixelColorFormat           : 2;
        uint16_t Unused1                    : 2;
        uint16_t DisableDoubleBufferSwap    : 1;
        uint16_t DisableColorBufferClear    : 1;
        uint16_t DisableZStencilBufferClear : 1;
        uint16_t DisableVGMaskBufferClear   : 1;
    } Bits0_15;
    struct {
        uint32_t DisableColorBufferDump     : 1;
        uint32_t DisableZStencilBufferDump  : 1;
        uint32_t DisableVGMaskBufferDump    : 1;
        uint32_t LastTileOfFrame            : 1;
        uint32_t MemoryBaseAddressOfFrame   : 28;
    } Bits16_48;
} ECO_VC_IV_DATA_STORE_TILE_BUFFER;

typedef struct __attribute__((packed)) ECO_VC_IV_DATA_TILE_BINNING_CONFIG {
    uint32_t TileMemoryAddress;
    uint32_t TileMemorySize;
    uint32_t TileStateBaseAddress;
    uint8_t Width;
    uint8_t Height;
    struct {
        uint8_t MultisampleMode     : 1;
        uint8_t HDRMode             : 1;
        uint8_t AutoInitialise      : 1;
        uint8_t InitialBlockSize    : 2;
        uint8_t BlockSize           : 2;
        uint8_t DoubleBuffer        : 1;
    } Bits;
} ECO_VC_IV_DATA_TILE_BINNING_CONFIG;

typedef struct __attribute__((packed)) ECO_VC_IV_DATA_TILE_RENDER_CONFIG {
    uint32_t MemoryAddress;
    uint16_t Width;
    uint16_t Height;
    struct {
        uint16_t MultisampleMode    : 1;
        uint16_t HDRMode            : 1;
        uint16_t NonHDRMode         : 2;
        uint16_t DecimateMode       : 2;
        uint16_t MemoryFormat       : 2;
        uint16_t EnableVGMask       : 1;
        uint16_t SelectCoverageMode : 1;
        uint16_t EarlyZDirection    : 1;
        uint16_t EarlyZDisable      : 1;
        uint16_t DoubleBuffer       : 1;
        uint16_t Unused             : 3;
    } Bits;
} ECO_VC_IV_DATA_TILE_RENDER_CONFIG;

typedef struct __attribute__((packed)) ECO_VC_IV_DATA_CLEAR_COLORS {
    struct {
        uint32_t rgba8888x1;
        uint32_t rgba8888x2;
    } ClearColor;
    struct {
        uint32_t ClearZ         : 24;
        uint32_t ClearVGMask    : 8;
    } ClearDepth;
    uint8_t ClearStencil;
} ECO_VC_IV_DATA_CLEAR_COLORS;

typedef struct __attribute__((packed)) ECO_VC_IV_DATA_TILE_COORDINATES {
    uint8_t Column;
    uint8_t Row;
} ECO_VC_IV_DATA_TILE_COORDINATES;

typedef struct __attribute__((packed)) ECO_VC_IV_V3D_MEM_BUFFER {
    uint32_t MemHandle;
    uint32_t MemSize;
    uint32_t BaseAddr;
    uint8_t *pStartAddr;
    uint8_t *pEndAddr;
} ECO_VC_IV_V3D_MEM_BUFFER;

/* IEcoVideoCoreIV1V3DContext IID = {3377E94B-10ED-4471-99CA-A7AB6B165EAC} */
#ifndef __IID_IEcoVideoCoreIV1V3DContext
static const UGUID IID_IEcoVideoCoreIV1V3DContext = {0x01, 0x10, 0x33, 0x77, 0xE9, 0x4B, 0x10, 0xED, 0x44, 0x71, 0x99, 0xCA, 0xA7, 0xAB, 0x6B, 0x16, 0x5E, 0xAC};
#endif /* __IID_IEcoVideoCoreIV1V3DContext */

typedef struct IEcoVideoCoreIV1V3DContextVTbl {

    /* IEcoUnknown */
    int16_t (*QueryInterface)(/* in */ struct IEcoVideoCoreIV1V3DContext* me, /* in */ const UGUID* riid, /* out */ void **ppv);
    uint32_t (*AddRef)(/* in */ struct IEcoVideoCoreIV1V3DContext* me);
    uint32_t (*Release)(/* in */ struct IEcoVideoCoreIV1V3DContext* me);

    /* IEcoVideoCoreIV1V3DContext */
    int16_t (*AllocMemBuffer)(/* in */ struct IEcoVideoCoreIV1V3DContext* me, /* in */ uint32_t size, /* out */ ECO_VC_IV_V3D_MEM_BUFFER** ppMemBuffer);
    int16_t (*FreeMemBuffer)(/* in */ struct IEcoVideoCoreIV1V3DContext* me, /* in */ ECO_VC_IV_V3D_MEM_BUFFER* pMemBuffer);
    ECO_VC_IV_V3D_MEM_BUFFER* (*get_ControlList)(/* in */ struct IEcoVideoCoreIV1V3DContext* me, /* in */ uint8_t mode);
    void (*set_ControlList)(/* in */ struct IEcoVideoCoreIV1V3DContext* me, /* in */ uint8_t mode, /* in */ ECO_VC_IV_V3D_MEM_BUFFER* pControlList);
    int16_t (*EmitControlRecord)(/* in */ struct IEcoVideoCoreIV1V3DContext* me, /* in */ ECO_VC_IV_V3D_MEM_BUFFER* pControlList, /* in */ uint8_t idCode, /* in */ uint8_t* pData, /* in */ uint32_t length);
    int16_t (*RenderFrame)(/* in */ struct IEcoVideoCoreIV1V3DContext* me, /* in */ ECO_VC_IV_V3D_MEM_BUFFER* pBinningControlList, /* in */ ECO_VC_IV_V3D_MEM_BUFFER* pRenderingControlList);

} IEcoVideoCoreIV1V3DContextVTbl, *IEcoVideoCoreIV1V3DContextVTblPtr;

interface IEcoVideoCoreIV1V3DContext {
    struct IEcoVideoCoreIV1V3DContextVTbl *pVTbl;
} IEcoVideoCoreIV1V3DContext;

#endif /* __I_ECO_VIDEO_CORE_IV_1_V3D_CONTEXT_H__ */
