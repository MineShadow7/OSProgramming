/*
 * <кодировка символов>
 *   Cyrillic (Windows) - Codepage 1251
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoIPCCMailbox1Framebuffer
 * </сводка>
 *
 * <описание>Rasp PI baremetal OpenGL ES vc4
 *   Данный заголовок описывает интерфейс IEcoIPCCMailbox1Framebuffer
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

#ifndef __I_ECO_IPCC_MAILBOX_1_FRAME_BUFFER__H__
#define __I_ECO_IPCC_MAILBOX_1_FRAME_BUFFER__H__

#include "IEcoBase1.h"

/* Определение списка каналов свойств ящика прошивки (8-й и 9-й каналы)*/
#define MB_CHANNEL_Framebuffer_ARM_GET_FIRMWARE_REVISION       0x00000001
#define MB_CHANNEL_Framebuffer_ARM_GET_BOARD_MODEL             0x00010001
#define MB_CHANNEL_Framebuffer_ARM_GET_BOARD_REVISION          0x00010002
#define MB_CHANNEL_Framebuffer_ARM_GET_BOARD_MAC_ADDRESS       0x00010003
#define MB_CHANNEL_Framebuffer_ARM_GET_BOARD_SERIAL            0x00010004
#define MB_CHANNEL_Framebuffer_ARM_GET_ARM_MEMORY              0x00010005
#define MB_CHANNEL_Framebuffer_ARM_GET_VC_MEMORY               0x00010006
#define MB_CHANNEL_Framebuffer_ARM_GET_CLOCKS                  0x00010007
#define MB_CHANNEL_Framebuffer_ARM_GET_POWER_STATE             0x00020001
#define MB_CHANNEL_Framebuffer_ARM_GET_TIMING                  0x00020002
#define MB_CHANNEL_Framebuffer_ARM_SET_POWER_STATE             0x00028001
#define MB_CHANNEL_Framebuffer_ARM_GET_GET_GPIO_STATE          0x00030041
#define MB_CHANNEL_Framebuffer_ARM_SET_GPIO_STATE              0x00038041
#define MB_CHANNEL_Framebuffer_ARM_GET_CLOCK_STATE             0x00030001
#define MB_CHANNEL_Framebuffer_ARM_GET_CLOCK_RATE              0x00030002
#define MB_CHANNEL_Framebuffer_ARM_GET_MAX_CLOCK_RATE          0x00030004
#define MB_CHANNEL_Framebuffer_ARM_GET_MIN_CLOCK_RATE          0x00030007
#define MB_CHANNEL_Framebuffer_ARM_GET_TURBO                   0x00030009
#define MB_CHANNEL_Framebuffer_ARM_SET_CLOCK_STATE             0x00038001
#define MB_CHANNEL_Framebuffer_ARM_SET_CLOCK_RATE              0x00038002
#define MB_CHANNEL_Framebuffer_ARM_SET_TURBO                   0x00038009
#define MB_CHANNEL_Framebuffer_ARM_GET_VOLTAGE                 0x00030003
#define MB_CHANNEL_Framebuffer_ARM_GET_MAX_VOLTAGE             0x00030005
#define MB_CHANNEL_Framebuffer_ARM_GET_MIN_VOLTAGE             0x00030008
#define MB_CHANNEL_Framebuffer_ARM_SET_VOLTAGE                 0x00038003
#define MB_CHANNEL_Framebuffer_ARM_GET_TEMPERATURE             0x00030006
#define MB_CHANNEL_Framebuffer_ARM_GET_MAX_TEMPERATURE         0x0003000A
#define MB_CHANNEL_Framebuffer_ARM_ALLOCATE_MEMORY             0x0003000C
#define MB_CHANNEL_Framebuffer_ARM_LOCK_MEMORY                 0x0003000D
#define MB_CHANNEL_Framebuffer_ARM_UNLOCK_MEMORY               0x0003000E
#define MB_CHANNEL_Framebuffer_ARM_RELEASE_MEMORY              0x0003000F
#define MB_CHANNEL_Framebuffer_ARM_EXECUTE_CODE                0x00030010
#define MB_CHANNEL_Framebuffer_ARM_EXECUTE_QPU                 0x00030011
#define MB_CHANNEL_Framebuffer_ARM_ENABLE_QPU                  0x00030012
#define MB_CHANNEL_Framebuffer_ARM_GET_DISPMANX_HANDLE         0x00030014
#define MB_CHANNEL_Framebuffer_ARM_GET_EDID_BLOCK              0x00030020
#define MB_CHANNEL_Framebuffer_ARM_GET_SDHOST_CLOCK            0x00030042
#define MB_CHANNEL_Framebuffer_ARM_SET_SDHOST_CLOCK            0x00038042
#define MB_CHANNEL_Framebuffer_ARM_ALLOCATE_FRAMEBUFFER        0x00040001
#define MB_CHANNEL_Framebuffer_ARM_BLANK_SCREEN                0x00040002
#define MB_CHANNEL_Framebuffer_ARM_GET_PHYSICAL_WIDTH_HEIGHT   0x00040003
#define MB_CHANNEL_Framebuffer_ARM_GET_VIRTUAL_WIDTH_HEIGHT    0x00040004
#define MB_CHANNEL_Framebuffer_ARM_GET_DEPTH                   0x00040005
#define MB_CHANNEL_Framebuffer_ARM_GET_PIXEL_ORDER             0x00040006
#define MB_CHANNEL_Framebuffer_ARM_GET_ALPHA_MODE              0x00040007
#define MB_CHANNEL_Framebuffer_ARM_GET_PITCH                   0x00040008
#define MB_CHANNEL_Framebuffer_ARM_GET_VIRTUAL_OFFSET          0x00040009
#define MB_CHANNEL_Framebuffer_ARM_GET_OVERSCAN                0x0004000A
#define MB_CHANNEL_Framebuffer_ARM_GET_PALETTE                 0x0004000B
#define MB_CHANNEL_Framebuffer_ARM_RELEASE_FRAMEBUFFER         0x00048001
#define MB_CHANNEL_Framebuffer_ARM_SET_PHYSICAL_WIDTH_HEIGHT   0x00048003
#define MB_CHANNEL_Framebuffer_ARM_SET_VIRTUAL_WIDTH_HEIGHT    0x00048004
#define MB_CHANNEL_Framebuffer_ARM_SET_DEPTH                   0x00048005
#define MB_CHANNEL_Framebuffer_ARM_SET_PIXEL_ORDER             0x00048006
#define MB_CHANNEL_Framebuffer_ARM_SET_ALPHA_MODE              0x00048007
#define MB_CHANNEL_Framebuffer_ARM_SET_VIRTUAL_OFFSET          0x00048009
#define MB_CHANNEL_Framebuffer_ARM_SET_OVERSCAN                0x0004800A
#define MB_CHANNEL_Framebuffer_ARM_SET_PALETTE                 0x0004800B
#define MB_CHANNEL_Framebuffer_ARM_SET_VSYNC                   0x0004800E
#define MB_CHANNEL_Framebuffer_ARM_SET_BACKLIGHT               0x0004800F
#define MB_CHANNEL_Framebuffer_ARM_VCHIQ_INIT                  0x00048010
#define MB_CHANNEL_Framebuffer_ARM_GET_COMMAND_LINE            0x00050001
#define MB_CHANNEL_Framebuffer_ARM_GET_DMA_CHANNELS            0x00060001
#define MB_CHANNEL_Framebuffer_ARM_SET_CURSOR_INFO             0x00008010
#define MB_CHANNEL_Framebuffer_ARM_SET_CURSOR_STATE            0x00008011

/* Определение списка каналов свойств ящика прошивки (8-й и 9-й каналы)*/
#define MB_CHANNEL_PROPERTY_ARM_GET_FIRMWARE_REVISION       0x00000001
#define MB_CHANNEL_PROPERTY_ARM_GET_BOARD_MODEL             0x00010001
#define MB_CHANNEL_PROPERTY_ARM_GET_BOARD_REVISION          0x00010002
#define MB_CHANNEL_PROPERTY_ARM_GET_BOARD_MAC_ADDRESS       0x00010003
#define MB_CHANNEL_PROPERTY_ARM_GET_BOARD_SERIAL            0x00010004
#define MB_CHANNEL_PROPERTY_ARM_GET_ARM_MEMORY              0x00010005
#define MB_CHANNEL_PROPERTY_ARM_GET_VC_MEMORY               0x00010006
#define MB_CHANNEL_PROPERTY_ARM_GET_CLOCKS                  0x00010007
#define MB_CHANNEL_PROPERTY_ARM_GET_POWER_STATE             0x00020001
#define MB_CHANNEL_PROPERTY_ARM_GET_TIMING                  0x00020002
#define MB_CHANNEL_PROPERTY_ARM_SET_POWER_STATE             0x00028001
#define MB_CHANNEL_PROPERTY_ARM_GET_GET_GPIO_STATE          0x00030041
#define MB_CHANNEL_PROPERTY_ARM_SET_GPIO_STATE              0x00038041
#define MB_CHANNEL_PROPERTY_ARM_GET_CLOCK_STATE             0x00030001
#define MB_CHANNEL_PROPERTY_ARM_GET_CLOCK_RATE              0x00030002
#define MB_CHANNEL_PROPERTY_ARM_GET_MAX_CLOCK_RATE          0x00030004
#define MB_CHANNEL_PROPERTY_ARM_GET_MIN_CLOCK_RATE          0x00030007
#define MB_CHANNEL_PROPERTY_ARM_GET_TURBO                   0x00030009
#define MB_CHANNEL_PROPERTY_ARM_SET_CLOCK_STATE             0x00038001
#define MB_CHANNEL_PROPERTY_ARM_SET_CLOCK_RATE              0x00038002
#define MB_CHANNEL_PROPERTY_ARM_SET_TURBO                   0x00038009
#define MB_CHANNEL_PROPERTY_ARM_GET_VOLTAGE                 0x00030003
#define MB_CHANNEL_PROPERTY_ARM_GET_MAX_VOLTAGE             0x00030005
#define MB_CHANNEL_PROPERTY_ARM_GET_MIN_VOLTAGE             0x00030008
#define MB_CHANNEL_PROPERTY_ARM_SET_VOLTAGE                 0x00038003
#define MB_CHANNEL_PROPERTY_ARM_GET_TEMPERATURE             0x00030006
#define MB_CHANNEL_PROPERTY_ARM_GET_MAX_TEMPERATURE         0x0003000A
#define MB_CHANNEL_PROPERTY_ARM_ALLOCATE_MEMORY             0x0003000C
#define MB_CHANNEL_PROPERTY_ARM_LOCK_MEMORY                 0x0003000D
#define MB_CHANNEL_PROPERTY_ARM_UNLOCK_MEMORY               0x0003000E
#define MB_CHANNEL_PROPERTY_ARM_RELEASE_MEMORY              0x0003000F
#define MB_CHANNEL_PROPERTY_ARM_EXECUTE_CODE                0x00030010
#define MB_CHANNEL_PROPERTY_ARM_EXECUTE_QPU                 0x00030011
#define MB_CHANNEL_PROPERTY_ARM_ENABLE_QPU                  0x00030012
#define MB_CHANNEL_PROPERTY_ARM_GET_DISPMANX_HANDLE         0x00030014
#define MB_CHANNEL_PROPERTY_ARM_GET_EDID_BLOCK              0x00030020
#define MB_CHANNEL_PROPERTY_ARM_GET_SDHOST_CLOCK            0x00030042
#define MB_CHANNEL_PROPERTY_ARM_SET_SDHOST_CLOCK            0x00038042
#define MB_CHANNEL_PROPERTY_ARM_ALLOCATE_FRAMEBUFFER        0x00040001
#define MB_CHANNEL_PROPERTY_ARM_BLANK_SCREEN                0x00040002
#define MB_CHANNEL_PROPERTY_ARM_GET_PHYSICAL_WIDTH_HEIGHT   0x00040003
#define MB_CHANNEL_PROPERTY_ARM_GET_VIRTUAL_WIDTH_HEIGHT    0x00040004
#define MB_CHANNEL_PROPERTY_ARM_GET_DEPTH                   0x00040005
#define MB_CHANNEL_PROPERTY_ARM_GET_PIXEL_ORDER             0x00040006
#define MB_CHANNEL_PROPERTY_ARM_GET_ALPHA_MODE              0x00040007
#define MB_CHANNEL_PROPERTY_ARM_GET_PITCH                   0x00040008
#define MB_CHANNEL_PROPERTY_ARM_GET_VIRTUAL_OFFSET          0x00040009
#define MB_CHANNEL_PROPERTY_ARM_GET_OVERSCAN                0x0004000A
#define MB_CHANNEL_PROPERTY_ARM_GET_PALETTE                 0x0004000B
#define MB_CHANNEL_PROPERTY_ARM_RELEASE_FRAMEBUFFER         0x00048001
#define MB_CHANNEL_PROPERTY_ARM_SET_PHYSICAL_WIDTH_HEIGHT   0x00048003
#define MB_CHANNEL_PROPERTY_ARM_SET_VIRTUAL_WIDTH_HEIGHT    0x00048004
#define MB_CHANNEL_PROPERTY_ARM_SET_DEPTH                   0x00048005
#define MB_CHANNEL_PROPERTY_ARM_SET_PIXEL_ORDER             0x00048006
#define MB_CHANNEL_PROPERTY_ARM_SET_ALPHA_MODE              0x00048007
#define MB_CHANNEL_PROPERTY_ARM_SET_VIRTUAL_OFFSET          0x00048009
#define MB_CHANNEL_PROPERTY_ARM_SET_OVERSCAN                0x0004800A
#define MB_CHANNEL_PROPERTY_ARM_SET_PALETTE                 0x0004800B
#define MB_CHANNEL_PROPERTY_ARM_SET_VSYNC                   0x0004800E
#define MB_CHANNEL_PROPERTY_ARM_SET_BACKLIGHT               0x0004800F
#define MB_CHANNEL_PROPERTY_ARM_VCHIQ_INIT                  0x00048010
#define MB_CHANNEL_PROPERTY_ARM_GET_COMMAND_LINE            0x00050001
#define MB_CHANNEL_PROPERTY_ARM_GET_DMA_CHANNELS            0x00060001
#define MB_CHANNEL_PROPERTY_ARM_SET_CURSOR_INFO             0x00008010
#define MB_CHANNEL_PROPERTY_ARM_SET_CURSOR_STATE            0x00008011

typedef enum {
    CLK_EMMC_ID     = 0x1,  // Mailbox Tag Channel EMMC clock ID 
    CLK_UART_ID     = 0x2,  // Mailbox Tag Channel uart clock ID
    CLK_ARM_ID      = 0x3,  // Mailbox Tag Channel ARM clock ID
    CLK_CORE_ID     = 0x4,  // Mailbox Tag Channel SOC core clock ID
    CLK_V3D_ID      = 0x5,  // Mailbox Tag Channel V3D clock ID
    CLK_H264_ID     = 0x6,  // Mailbox Tag Channel H264 clock ID
    CLK_ISP_ID      = 0x7,  // Mailbox Tag Channel ISP clock ID
    CLK_SDRAM_ID    = 0x8,  // Mailbox Tag Channel SDRAM clock ID
    CLK_PIXEL_ID    = 0x9,  // Mailbox Tag Channel PIXEL clock ID
    CLK_PWM_ID      = 0xA,  // Mailbox Tag Channel PWM clock ID
} MB_CLOCK_ID;

#endif /* __I_ECO_IPCC_MAILBOX_1_FRAME_BUFFER__H__ */

