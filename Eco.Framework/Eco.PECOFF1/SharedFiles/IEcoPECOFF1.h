/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoPECOFF1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoPECOFF1
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

#ifndef __I_ECO_PE_COFF_1_H__
#define __I_ECO_PE_COFF_1_H__

#include "IEcoBase1.h"
#include "IEcoCOFF1.h"
#include "IEcoList1.h"
#include "IEcoPECOFF1ResourceDataEntry.h"
#include "IEcoPECOFF1ResourceDirectoryEntry.h"
#include "IEcoPECOFF1FirstLinkerMember.h"
#include "IEcoPECOFF1SecondLinkerMember.h"
#include "IEcoPECOFF1ObjectFileMember.h"
#include "IEcoPECOFF1BaseRelocationBlock.h"
#include "IEcoPECOFF1ImportDirectoryEntry.h"
#include "IEcoPECOFF1ImportLookupTable.h"
#include "IEcoPECOFF1ImportLibraryMember.h"
#include "IEcoPECOFF1FreeFormatContent.h"
#include "IEcoPECOFF1FreeFormatContent.h"
#include "IEcoPECOFF1SymbolTable.h"
#include "IEcoPECOFF1ObjectFile.h"
#include "IEcoPECOFF1ImageFile.h"

/* Machine Types */
#define PECOFF1_IMAGE_FILE_MACHINE_UNKNOWN  0x0
#define PECOFF1_IMAGE_FILE_MACHINE_ALPHA    0x184
#define PECOFF1_IMAGE_FILE_MACHINE_ARM      0x1c0
#define PECOFF1_IMAGE_FILE_MACHINE_ALPHA64  0x284
#define PECOFF1_IMAGE_FILE_MACHINE_I386     0x14c
#define PECOFF1_IMAGE_FILE_MACHINE_IA64     0x200
#define PECOFF1_IMAGE_FILE_MACHINE_M68K     0x268
#define PECOFF1_IMAGE_FILE_MACHINE_MIPS16   0x266
#define PECOFF1_IMAGE_FILE_MACHINE_MIPSFPU  0x366
#define PECOFF1_IMAGE_FILE_MACHINE_MIPSFPU16 0x466
#define PECOFF1_IMAGE_FILE_MACHINE_POWERPC  0x1f0
#define PECOFF1_IMAGE_FILE_MACHINE_R3000    0x162
#define PECOFF1_IMAGE_FILE_MACHINE_R4000    0x166
#define PECOFF1_IMAGE_FILE_MACHINE_R10000   0x168
#define PECOFF1_IMAGE_FILE_MACHINE_SH3      0x1a2
#define PECOFF1_IMAGE_FILE_MACHINE_SH4      0x1a6
#define PECOFF1_IMAGE_FILE_MACHINE_THUMB    0x1c2

/* Characteristics */
#define PECOFF1_IMAGE_FILE_RELOCS_STRIPPED      0x0001
#define PECOFF1_IMAGE_FILE_EXECUTABLE_IMAGE     0x0002
#define PECOFF1_IMAGE_FILE_LINE_NUMS_STRIPPED   0x0004
#define PECOFF1_IMAGE_FILE_LOCAL_SYMS_STRIPPED  0x0008
#define PECOFF1_IMAGE_FILE_AGGRESSIVE_WS_TRIM   0x0010
#define PECOFF1_IMAGE_FILE_LARGE_ADDRESS_AWARE  0x0020
#define PECOFF1_IMAGE_FILE_16BIT_MACHINE        0x0040
#define PECOFF1_IMAGE_FILE_BYTES_REVERSED_LO    0x0080
#define PECOFF1_IMAGE_FILE_32BIT_MACHINE        0x0100
#define PECOFF1_IMAGE_FILE_DEBUG_STRIPPED       0x0200
#define PECOFF1_IMAGE_FILE_REMOVABLE_RUN_FROM_SWAP 0x0400
#define PECOFF1_IMAGE_FILE_SYSTEM               0x1000
#define PECOFF1_IMAGE_FILE_UP_SYSTEM_ONLY       0x4000
#define PECOFF1_IMAGE_FILE_BYTES_REVERSED_HI    0x8000

/* Magic */
#define PECOFF1_IMAGE_NT_OPTIONAL_HDR32_MAGIC   0x10b
#define PECOFF1_IMAGE_NT_OPTIONAL_HDR64_MAGIC   0x20b
#define PECOFF1_IMAGE_ROM_OPTIONAL_HDR_MAGIC    0x107

/* IEcoPECOFF1 IID = {8C1CA67E-C984-4CC6-A084-C4AD592C78C5} */
#ifndef __IID_IEcoPECOFF1
static const UGUID IID_IEcoPECOFF1 = {0x01, 0x10, {0x8C, 0x1C, 0xA6, 0x7E, 0xC9, 0x84, 0x4C, 0xC6, 0xA0, 0x84, 0xC4, 0xAD, 0x59, 0x2C, 0x78, 0xC5} };
#endif /* __IID_IEcoPECOFF1 */

typedef struct IEcoPECOFF1* IEcoPECOFF1Ptr_t;

typedef struct IEcoPECOFF1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoPECOFF1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoPECOFF1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoPECOFF1Ptr_t me);

    /* IEcoPECOFF1 */
    IEcoPECOFF1ObjectFile* (ECOCALLMETHOD *readObjectFile)(/* in */ IEcoPECOFF1Ptr_t me, /* in */ char_t* fileName);
    int16_t (ECOCALLMETHOD *writeObjectFile)(/* in */ IEcoPECOFF1Ptr_t me, /* in */ IEcoPECOFF1ObjectFile* pIObjectFile, /* in */ char_t* fileName);
    IEcoPECOFF1ImageFile* (ECOCALLMETHOD *readImageFile)(/* in */ IEcoPECOFF1Ptr_t me, /* in */ char_t* fileName);
    int16_t (ECOCALLMETHOD *writeImageFile)(/* in */ IEcoPECOFF1Ptr_t me, /* in */ IEcoPECOFF1ImageFile* pIImageFile, /* in */ char_t* fileName);
    IEcoCOFF1ArchiveFile* (ECOCALLMETHOD *readArchiveFile)(/* in */ IEcoPECOFF1Ptr_t me, /* in */ char_t* fileName);
    int16_t (ECOCALLMETHOD *writeArchiveFile)(/* in */ IEcoPECOFF1Ptr_t me, /* in */ IEcoCOFF1ArchiveFile* pIArchiveFile, /* in */ char_t* fileName);

    IEcoPECOFF1ObjectFile* (ECOCALLMETHOD *createObjectFile)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoPECOFF1ImageFile* (ECOCALLMETHOD *createImageFile)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoCOFF1ArchiveFile* (ECOCALLMETHOD *createArchiveFile)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoCOFF1FileHeader* (ECOCALLMETHOD *createCOFFFileHeader)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoCOFF1OptionalHeader* (ECOCALLMETHOD *createCOFFOptionalHeader)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoCOFF1SectionHeader* (ECOCALLMETHOD *createCOFFSectionHeader)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoCOFF1RelocationTableEntry* (ECOCALLMETHOD *createCOFFRelocationTableEntry)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoCOFF1ArchiveMemberHeader* (ECOCALLMETHOD *createCOFFArchiveMemberHeader)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoMZEXE1ImageFile* (ECOCALLMETHOD *createMSDOSImageFile)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoMZEXE1ExecutableHeader* (ECOCALLMETHOD *createMSDOSExecutableHeader)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoMZEXE1HeaderExpansion* (ECOCALLMETHOD *createMSDOSHeaderExpansion)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoMZEXE1FreeFormatContent* (ECOCALLMETHOD *createMSDOSFreeFormatContent)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoPECOFF1WindowsSpecificFields* (ECOCALLMETHOD *createWindowsSpecificFields)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoPECOFF1DataDirectories* (ECOCALLMETHOD *createDataDirectories)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoPECOFF1ResourceDataEntry* (ECOCALLMETHOD *createResourceDataEntry)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoPECOFF1ResourceDirectoryEntry* (ECOCALLMETHOD *createResourceDirectoryEntry)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoPECOFF1ResourceDirectoryTable* (ECOCALLMETHOD *createResourceDirectoryTable)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoPECOFF1BaseRelocationBlock* (ECOCALLMETHOD *createBaseRelocationBlock)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoPECOFF1ImportDirectoryEntry* (ECOCALLMETHOD *createImportDirectoryEntry)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoPECOFF1ImportLookupTable* (ECOCALLMETHOD *createImportLookupTable)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoPECOFF1FreeFormatContent* (ECOCALLMETHOD *createFreeFormatContent)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoPECOFF1SymbolTable* (ECOCALLMETHOD *createSymbolTable)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoPECOFF1FirstLinkerMember* (ECOCALLMETHOD *createFirstLinkerMember)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoPECOFF1SecondLinkerMember* (ECOCALLMETHOD *createSecondLinkerMember)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoPECOFF1ObjectFileMember* (ECOCALLMETHOD *createObjectFileMember)(/* in */ IEcoPECOFF1Ptr_t me);
    IEcoPECOFF1ImportLibraryMember* (ECOCALLMETHOD *createImportLibraryMember)(/* in */ IEcoPECOFF1Ptr_t me);

} IEcoPECOFF1VTbl, *IEcoPECOFF1VTblPtr;

interface IEcoPECOFF1 {
    struct IEcoPECOFF1VTbl *pVTbl;
} IEcoPECOFF1;


#endif /* __I_ECO_PE_COFF_1_H__ */
