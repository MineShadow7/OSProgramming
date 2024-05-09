/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoPECOFF1SymbolTable
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoPECOFF1SymbolTable
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

#ifndef __I_ECO_PE_COFF_1_SYMBOL_TABLE_H__
#define __I_ECO_PE_COFF_1_SYMBOL_TABLE_H__

#include "IEcoBase1.h"
#include "IEcoList1.h"

/* Section values. */
#define PECOFF1_IMAGE_SYM_UNDEFINED             0
#define PECOFF1_IMAGE_SYM_ABSOLUTE              -1
#define PECOFF1_IMAGE_SYM_DEBUG                 -2

/* Type (fundamental) values. */
#define PECOFF1_IMAGE_SYM_TYPE_NULL             0x0000
#define PECOFF1_IMAGE_SYM_TYPE_VOID             0x0001
#define PECOFF1_IMAGE_SYM_TYPE_CHAR             0x0002
#define PECOFF1_IMAGE_SYM_TYPE_SHORT            0x0003
#define PECOFF1_IMAGE_SYM_TYPE_INT              0x0004
#define PECOFF1_IMAGE_SYM_TYPE_LONG             0x0005
#define PECOFF1_IMAGE_SYM_TYPE_FLOAT            0x0006
#define PECOFF1_IMAGE_SYM_TYPE_DOUBLE           0x0007
#define PECOFF1_IMAGE_SYM_TYPE_STRUCT           0x0008
#define PECOFF1_IMAGE_SYM_TYPE_UNION            0x0009
#define PECOFF1_IMAGE_SYM_TYPE_ENUM             0x000A
#define PECOFF1_IMAGE_SYM_TYPE_MOE              0x000B
#define PECOFF1_IMAGE_SYM_TYPE_BYTE             0x000C
#define PECOFF1_IMAGE_SYM_TYPE_WORD             0x000D
#define PECOFF1_IMAGE_SYM_TYPE_UINT             0x000E
#define PECOFF1_IMAGE_SYM_TYPE_DWORD            0x000F
#define PECOFF1_IMAGE_SYM_TYPE_PCODE            0x8000

/* Type (derived) values. */
#define PECOFF1_IMAGE_SYM_DTYPE_NULL            0
#define PECOFF1_IMAGE_SYM_DTYPE_POINTER         1
#define PECOFF1_IMAGE_SYM_DTYPE_FUNCTION        2
#define PECOFF1_IMAGE_SYM_DTYPE_ARRAY           3

/* Storage classes. */
#define PECOFF1_IMAGE_SYM_CLASS_END_OF_FUNCTION     -1
#define PECOFF1_IMAGE_SYM_CLASS_NULL                0x0000
#define PECOFF1_IMAGE_SYM_CLASS_AUTOMATIC           0x0001
#define PECOFF1_IMAGE_SYM_CLASS_EXTERNAL            0x0002
#define PECOFF1_IMAGE_SYM_CLASS_STATIC              0x0003
#define PECOFF1_IMAGE_SYM_CLASS_REGISTER            0x0004
#define PECOFF1_IMAGE_SYM_CLASS_EXTERNAL_DEF        0x0005
#define PECOFF1_IMAGE_SYM_CLASS_LABEL               0x0006
#define PECOFF1_IMAGE_SYM_CLASS_UNDEFINED_LABEL     0x0007
#define PECOFF1_IMAGE_SYM_CLASS_MEMBER_OF_STRUCT    0x0008
#define PECOFF1_IMAGE_SYM_CLASS_ARGUMENT            0x0009
#define PECOFF1_IMAGE_SYM_CLASS_STRUCT_TAG          0x000A
#define PECOFF1_IMAGE_SYM_CLASS_MEMBER_OF_UNION     0x000B
#define PECOFF1_IMAGE_SYM_CLASS_UNION_TAG           0x000C
#define PECOFF1_IMAGE_SYM_CLASS_TYPE_DEFINITION     0x000D
#define PECOFF1_IMAGE_SYM_CLASS_UNDEFINED_STATIC    0x000E
#define PECOFF1_IMAGE_SYM_CLASS_ENUM_TAG            0x000F
#define PECOFF1_IMAGE_SYM_CLASS_MEMBER_OF_ENUM      0x0010
#define PECOFF1_IMAGE_SYM_CLASS_REGISTER_PARAM      0x0011
#define PECOFF1_IMAGE_SYM_CLASS_BIT_FIELD           0x0012
#define PECOFF1_IMAGE_SYM_CLASS_FAR_EXTERNAL        0x0044
#define PECOFF1_IMAGE_SYM_CLASS_BLOCK               0x0064
#define PECOFF1_IMAGE_SYM_CLASS_FUNCTION            0x0065
#define PECOFF1_IMAGE_SYM_CLASS_END_OF_STRUCT       0x0066
#define PECOFF1_IMAGE_SYM_CLASS_FILE                0x0067
#define PECOFF1_IMAGE_SYM_CLASS_SECTION             0x0068
#define PECOFF1_IMAGE_SYM_CLASS_WEAK_EXTERNAL       0x0069
#define PECOFF1_IMAGE_SYM_CLASS_CLR_TOKEN           0x006B

/* Descriptor */
typedef struct PECOFF1_SYMBOL_TABLE_RECORD_DESCRIPTOR {
    union {
        byte_t ShortName[8];
        struct {
            uint32_t Zeroes;
            uint32_t Offset;
        } Name;
        uint32_t LongName[2];
    } N;
    uint32_t Value;
    uint16_t SectionNumber;
    uint16_t Type;
    byte_t StorageClass;
    byte_t NumberOfAuxSymbols;
} PECOFF1_SYMBOL_TABLE_RECORD_DESCRIPTOR;

typedef struct PECOFF1_AUX_SYMBOL_TOKEN_DEF {
    byte_t  bAuxType;                  // IMAGE_AUX_SYMBOL_TYPE
    byte_t  bReserved;                 // Must be 0
    uint32_t SymbolTableIndex;
    byte_t  rgbReserved[12];           // Must be 0
} PECOFF1_AUX_SYMBOL_TOKEN_DEF;

typedef union PECOFF1_AUXILIARY_SYMBOL_DESCRIPTOR {
    struct {
        uint32_t    TagIndex;                      // struct, union, or enum tag index
        union {
            struct {
                uint16_t    Linenumber;             // declaration line number
                uint16_t    Size;                   // size of struct, union, or enum
            } LnSz;
           uint32_t    TotalSize;
        } Misc;
        union {
            struct {                            // if ISFCN, tag, or .bb
                uint32_t    PointerToLinenumber;
                uint32_t    PointerToNextFunction;
            } Function;
            struct {                            // if ISARY, up to 4 dimen.
                uint16_t     Dimension[4];
            } Array;
        } FcnAry;
        uint16_t    TvIndex;                        // tv index
    } Sym;
    struct {
        byte_t    Name[18];
    } File;
    struct {
        uint32_t   Length;                         // section length
        uint16_t    NumberOfRelocations;            // number of relocation entries
        uint16_t    NumberOfLinenumbers;            // number of line numbers
        uint32_t   CheckSum;                       // checksum for communal
        uint16_t   Number;                         // section number to associate with
        byte_t    Selection;                      // communal selection type
    byte_t    bReserved;
    uint16_t   HighNumber;                     // high bits of the section number
    } Section;
    PECOFF1_AUX_SYMBOL_TOKEN_DEF TokenDef;   
    struct {
        uint32_t crc;
        byte_t  rgbReserved[14];
    } CRC;
} PECOFF1_AUXILIARY_SYMBOL_DESCRIPTOR;

/* IEcoPECOFF1SymbolTable IID = {5528B3FE-D774-4AD0-AFB9-17FB5C58D0CC} */
#ifndef __IID_IEcoPECOFF1SymbolTable
static const UGUID IID_IEcoPECOFF1SymbolTable = { 0x01, 0x10, {0x55, 0x28, 0xB3, 0xFE, 0xD7, 0x74, 0x4A, 0xD0, 0xAF, 0xB9, 0x17, 0xFB, 0x5C, 0x58, 0xD0, 0xCC} };
#endif /* __IID_IEcoPECOFF1SymbolTable */

typedef struct IEcoPECOFF1SymbolTable* IEcoPECOFF1SymbolTablePtr_t;

typedef struct IEcoPECOFF1SymbolTableVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoPECOFF1SymbolTablePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoPECOFF1SymbolTablePtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoPECOFF1SymbolTablePtr_t me);

    /* IEcoPECOFF1SymbolTable */
    IEcoList1* (ECOCALLMETHOD *get_Records)(/* in */ IEcoPECOFF1SymbolTablePtr_t me);
    void (ECOCALLMETHOD *set_Records)(/* in */ IEcoPECOFF1SymbolTablePtr_t me, /* in */ IEcoList1* pIRecords);
    IEcoList1* (ECOCALLMETHOD *get_StringTable)(/* in */ IEcoPECOFF1SymbolTablePtr_t me);
    void (ECOCALLMETHOD *set_StringTable)(/* in */ IEcoPECOFF1SymbolTablePtr_t me, /* in */ IEcoList1* pIStringTable);
} IEcoPECOFF1SymbolTableVTbl, *IEcoPECOFF1SymbolTableVTblPtr;

interface IEcoPECOFF1SymbolTable {
    struct IEcoPECOFF1SymbolTableVTbl *pVTbl;
} IEcoPECOFF1SymbolTable;

#endif /* __I_ECO_PE_COFF_1_SYMBOL_TABLE_H__ */
