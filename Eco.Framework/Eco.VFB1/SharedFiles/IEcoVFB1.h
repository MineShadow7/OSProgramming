/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoVFB1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoVFB1
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

#ifndef __I_ECO_VIRTUAL_FRAME_BUFFER_1_H__
#define __I_ECO_VIRTUAL_FRAME_BUFFER_1_H__

#include "IEcoBase1.h"

#define CHARACTER_ATTRIBUTE_FORE_COLOR_BLACK                0x00
#define CHARACTER_ATTRIBUTE_FORE_COLOR_BLUE                 0x01
#define CHARACTER_ATTRIBUTE_FORE_COLOR_GREEN                0x02
#define CHARACTER_ATTRIBUTE_FORE_COLOR_CYAN                 0x03
#define CHARACTER_ATTRIBUTE_FORE_COLOR_RED                  0x04
#define CHARACTER_ATTRIBUTE_FORE_COLOR_MAGENTA              0x05
#define CHARACTER_ATTRIBUTE_FORE_COLOR_BROWN                0x06
#define CHARACTER_ATTRIBUTE_FORE_COLOR_LIGHT_GRAY           0x07
#define CHARACTER_ATTRIBUTE_FORE_COLOR_DARK_GRAY            0x08
#define CHARACTER_ATTRIBUTE_FORE_COLOR_LIGHT_BLUE           0x09
#define CHARACTER_ATTRIBUTE_FORE_COLOR_LIGHT_GREEN          0x0A
#define CHARACTER_ATTRIBUTE_FORE_COLOR_LIGHT_CYAN           0x0B
#define CHARACTER_ATTRIBUTE_FORE_COLOR_LIGHT_RED            0x0C
#define CHARACTER_ATTRIBUTE_FORE_COLOR_LIGHT_MAGENTA        0x0D
#define CHARACTER_ATTRIBUTE_FORE_COLOR_YELLOW               0x0E
#define CHARACTER_ATTRIBUTE_FORE_COLOR_WHITTE               0x0F
#define CHARACTER_ATTRIBUTE_BACKGROUND_COLOR_BLACK          0x00
#define CHARACTER_ATTRIBUTE_BACKGROUND_COLOR_BLUE           0x10
#define CHARACTER_ATTRIBUTE_BACKGROUND_COLOR_GREEN          0x20
#define CHARACTER_ATTRIBUTE_BACKGROUND_COLOR_CYAN           0x30
#define CHARACTER_ATTRIBUTE_BACKGROUND_COLOR_RED            0x40
#define CHARACTER_ATTRIBUTE_BACKGROUND_COLOR_MAGENTA        0x50
#define CHARACTER_ATTRIBUTE_BACKGROUND_COLOR_BROWN          0x60
#define CHARACTER_ATTRIBUTE_BACKGROUND_COLOR_LIGHT_GRAY     0x70
#define CHARACTER_ATTRIBUTE_BACKGROUND_COLOR_DARK_GRAY      0x80
#define CHARACTER_ATTRIBUTE_BACKGROUND_COLOR_LIGHT_BLUE     0x90
#define CHARACTER_ATTRIBUTE_BACKGROUND_COLOR_LIGHT_GREEN    0xA0
#define CHARACTER_ATTRIBUTE_BACKGROUND_COLOR_LIGHT_CYAN     0xB0
#define CHARACTER_ATTRIBUTE_BACKGROUND_COLOR_LIGHT_RED      0xC0
#define CHARACTER_ATTRIBUTE_BACKGROUND_COLOR_LIGHT_MAGENTA  0xD0
#define CHARACTER_ATTRIBUTE_BACKGROUND_COLOR_YELLOW         0xE0
#define CHARACTER_ATTRIBUTE_BACKGROUND_COLOR_WHITTE         0xF0

/* IEcoVFB1 IID = {8A4E6AAC-872D-4DA6-ACFC-FDAA253F2DA1} */
#ifndef __IID_IEcoVFB1
static const UGUID IID_IEcoVFB1 = {0x01, 0x10, {0x8A, 0x4E, 0x6A, 0xAC, 0x87, 0x2D, 0x4D, 0xA6, 0xAC, 0xFC, 0xFD, 0xAA, 0x25, 0x3F, 0x2D, 0xA1} };
#endif /* __IID_IEcoVFB1 */

typedef struct IEcoVFB1* IEcoVFB1Ptr_t;

typedef struct IEcoVFB1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoVFB1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoVFB1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoVFB1Ptr_t me);

    /* IEcoVFB1 */
    int8_t (ECOCALLMETHOD *set_VideoMode)(/* in */ IEcoVFB1Ptr_t me, /* in */ uint8_t videoMode);
    int8_t (ECOCALLMETHOD *set_CursorShape)(/* in */ IEcoVFB1Ptr_t me, /* in */ uint8_t* cursorStartLine, /* in */ uint8_t cursorBottomLine);
    int8_t (ECOCALLMETHOD *set_CursorPosition)(/* in */ IEcoVFB1Ptr_t me, /* in */ uint8_t pageNumber, /* in */ uint16_t X, /* in */ uint16_t Y);
    int8_t (ECOCALLMETHOD *get_CursorPosition)(/* in */ IEcoVFB1Ptr_t me, /* in */ uint8_t pageNumber, /* in */ uint8_t column, /* in */ uint8_t row, /* out */ uint8_t* cursorStartLine, /* out */ uint8_t* cursorBottomLine);
    int8_t (ECOCALLMETHOD *SelectActiveVideoPage)(/* in */ IEcoVFB1Ptr_t me, /* in */ uint8_t pageNumber);
    int8_t (ECOCALLMETHOD *ScrollUpWindow)(/* in */ IEcoVFB1Ptr_t me, /* in */ uint8_t numberLines, /* in */ uint8_t attribute, /* in */ uint8_t columnLeftCorner, /* in */ uint8_t rowLeftCorner, /* in */ uint8_t columnRightCorner, /* in */ uint8_t rowRightCorner);
    int8_t (ECOCALLMETHOD *ScrollDownWindow)(/* in */ IEcoVFB1Ptr_t me, /* in */ uint8_t numberLines, /* in */ uint8_t attribute, /* in */ uint8_t columnLeftCorner, /* in */ uint8_t rowLeftCorner, /* in */ uint8_t columnRightCorner, /* in */ uint8_t rowRightCorner);
    int8_t (ECOCALLMETHOD *ReadCharacterAtCursorPosition)(/* in */ IEcoVFB1Ptr_t me, /* in */ uint8_t pageNumber, /* out */ uint8_t* attribute, /* out */ uint8_t* character);
    int8_t (ECOCALLMETHOD *WriteCharacterAtCursorPosition)(/* in */ IEcoVFB1Ptr_t me, /* in */ uint8_t pageNumber, /*in */ uint8_t attribute, /* in */ uint8_t character, /* in */ uint8_t count);
    int8_t (ECOCALLMETHOD *set_ColorPixel)(/* in */ IEcoVFB1Ptr_t me, /* in */ uint8_t  pixelColor, /* in */ uint16_t x, /* in */ uint16_t y);
    int8_t (ECOCALLMETHOD *get_ColorPixel)(/* in */ IEcoVFB1Ptr_t me, /* out */ uint8_t*  pixelColor, /* in */ uint16_t x, /* in */ uint16_t y);
    int8_t (ECOCALLMETHOD *TeletypeOutput)(/* in */ IEcoVFB1Ptr_t me, /* in */ uint8_t character);
    int8_t (ECOCALLMETHOD *WriteString)(/* in */ IEcoVFB1Ptr_t me, /* in */ uint8_t mode, /* in */ uint8_t pageNumber, /* in */ uint8_t column, /* in */ uint8_t row, /* in */ uint8_t attribute, /* in */ char_t* string, /* in */ uint16_t length);
    uint32_t (ECOCALLMETHOD *get_Width)(/* in */ IEcoVFB1Ptr_t me);
    uint32_t (ECOCALLMETHOD *get_Height)(/* in */ IEcoVFB1Ptr_t me);
    uint32_t (ECOCALLMETHOD *get_Depth)(/* in */ IEcoVFB1Ptr_t me);

} IEcoVFB1VTbl, *IEcoVFB1VTblPtr;

interface IEcoVFB1 {
    struct IEcoVFB1VTbl *pVTbl;
} IEcoVFB1;


#endif /* __I_ECO_VIRTUAL_FRAME_BUFFER_1_H__ */
