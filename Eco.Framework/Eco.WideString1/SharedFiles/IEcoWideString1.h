/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoWideString1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoWideString1
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

#ifndef __I_ECO_WIDE_STRING_1_H__
#define __I_ECO_WIDE_STRING_1_H__

#include "IEcoBase1.h"

#define ECO_WIDE_STRING_1_TRIM_ALL      0
#define ECO_WIDE_STRING_1_TRIM_BOTH     1
#define ECO_WIDE_STRING_1_TRIM_START    2
#define ECO_WIDE_STRING_1_TRIM_END      3

/* IEcoWideString1 IID = {6DBF44D2-1EC5-4360-BEA6-149134CD078B} */
#ifndef __IID_IEcoWideString1
static const UGUID IID_IEcoWideString1 = {0x01, 0x10, {0x6D, 0xBF, 0x44, 0xD2, 0x1E, 0xC5, 0x43, 0x60, 0xBE, 0xA6, 0x14, 0x91, 0x34, 0xCD, 0x07, 0x8B}};
#endif /* __IID_IEcoWideString1 */

typedef struct IEcoWideString1* IEcoWideString1Ptr_t;

typedef struct IEcoWideString1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoWideString1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoWideString1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoWideString1Ptr_t me);

    /* IEcoWideString1 */
    wchar_t* (ECOCALLMETHOD *Clone)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *psz);
    int16_t (ECOCALLMETHOD *Compare)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *psz1, /* in */ wchar_t *psz2);
    int16_t (ECOCALLMETHOD *CompareCaseInsensitive)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *psz1, /* in */ wchar_t *psz2);
    uint32_t (ECOCALLMETHOD *RetrieveSize)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *psz);
    wchar_t* (ECOCALLMETHOD *SearchSubstring)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *psz, /* in */ wchar_t *pszSearch);
    wchar_t* (ECOCALLMETHOD *SearchFirstCharacter)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *psz, /* in */ uint16_t Character);
    wchar_t* (ECOCALLMETHOD *SearchLastCharacter)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *psz, /* in */ uint16_t Character);
    wchar_t* (ECOCALLMETHOD *SearchAnyCharacter)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *psz, /* in */ wchar_t *pszCharacter);
    wchar_t* (ECOCALLMETHOD *Append)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *psz1, /* in */ wchar_t *psz2);
    wchar_t* (ECOCALLMETHOD *Assign)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *psz1, /* in */ wchar_t *psz2);
    int32_t (ECOCALLMETHOD *ConvertToLong)(/* in */ IEcoWideString1Ptr_t me, /* in */ const wchar_t *psz, /* in */ wchar_t **endptr, /* in */ int16_t base);
    int32_t (ECOCALLMETHOD *ConvertDecToInt)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *psz);
    int32_t (ECOCALLMETHOD *ConvertHexToInt)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *psz);
    int32_t (ECOCALLMETHOD *ConvertBinToInt)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *psz);
    int32_t (ECOCALLMETHOD *ConvertOctToInt)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *psz);
    wchar_t* (ECOCALLMETHOD *ConvertLongToString)(/* in */ IEcoWideString1Ptr_t me, /* in */ int32_t value, /* in */ int16_t base, /* in */ bool_t alt);
    wchar_t* (ECOCALLMETHOD *ConvertIntToString)(/* in */ IEcoWideString1Ptr_t me, /* in */ int32_t value);
    wchar_t* (ECOCALLMETHOD *ConvertIntToFormatString)(/* in */ IEcoWideString1Ptr_t me, /* in */ int32_t value, /* in */ wchar_t *format);
    bool_t (ECOCALLMETHOD *IsAlpha)(/* in */ IEcoWideString1Ptr_t me, /* in */ uint16_t Character);
    bool_t (ECOCALLMETHOD *IsDigit)(/* in */ IEcoWideString1Ptr_t me, /* in */ uint16_t Character);
    bool_t (ECOCALLMETHOD *IsHexDigit)(/* in */ IEcoWideString1Ptr_t me, /* in */ uint16_t Character);
    bool_t (ECOCALLMETHOD *IsAlphanumeric)(/* in */ IEcoWideString1Ptr_t me, /* in */ uint16_t Character);
    bool_t (ECOCALLMETHOD *IsPunctuation)(/* in */ IEcoWideString1Ptr_t me, /* in */ uint16_t Character);
    bool_t (ECOCALLMETHOD *IsLower)(/* in */ IEcoWideString1Ptr_t me, /* in */ uint16_t Character);
    bool_t (ECOCALLMETHOD *IsUpper)(/* in */ IEcoWideString1Ptr_t me, /* in */ uint16_t Character);
    bool_t (ECOCALLMETHOD *IsSpace)(/* in */ IEcoWideString1Ptr_t me, /* in */ uint16_t Character);
    uint16_t (ECOCALLMETHOD *ToLower)(/* in */ IEcoWideString1Ptr_t me, /* in */ uint16_t Character);
    uint16_t (ECOCALLMETHOD *ToUpper)(/* in */ IEcoWideString1Ptr_t me, /* in */ uint16_t Character);
    wchar_t* (ECOCALLMETHOD *ToFormatString)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *format, /* in */ ...);
    wchar_t* (ECOCALLMETHOD *VarArgListToFormatString)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *format, /* in */ va_list arg);
    wchar_t* (ECOCALLMETHOD *ToLowerString)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *psz);
    wchar_t* (ECOCALLMETHOD *ToUpperString)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *psz);
    void (ECOCALLMETHOD *Free)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *psz);
    wchar_t* (ECOCALLMETHOD *Replace)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *pszString, /* in */ wchar_t *pszSubString, /* in */ wchar_t *pszReplacement);
    wchar_t* (ECOCALLMETHOD *Substring)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t *psz, /* in */ uint32_t start, /* in */ uint32_t length);
    wchar_t* (ECOCALLMETHOD *Repeate)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t* psz, /* in */ uint32_t count);
    wchar_t* (ECOCALLMETHOD *Trim)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t* psz, /* in */ wchar_t trimChars[], /* in */ uint32_t length, /* in */ uint8_t flag);
    int16_t (ECOCALLMETHOD *Split)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t* psz, /* in */ wchar_t separators[], /* in */ uint32_t lengthSeparators, /* out */ wchar_t** pszArray[], /* out */ uint32_t* lengthArray);
    wchar_t* (ECOCALLMETHOD *Join)(/* in */ IEcoWideString1Ptr_t me, /* in */ wchar_t* separator, /* in */ wchar_t* pszArray[], /* in */ uint32_t lengthArray);

} IEcoWideString1VTbl, *IEcoWideString1VTblPtr;

interface IEcoWideString1 {
    struct IEcoWideString1VTbl *pVTbl;
} IEcoWideString1;


#endif /* __I_ECO_WIDE_STRING_1_H__ */
