/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoCommandArguments1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает реализацию интерфейсов IEcoCommandArguments1
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2016 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __I_ECO_COMMAND_ARGUMENTS_1_H__
#define __I_ECO_COMMAND_ARGUMENTS_1_H__

#include "IEcoBase1.h"

/* IEcoCommandArguments1 IID = {00000000-0000-0000-0000-000000000110} */
#ifndef __IID_IEcoCommandArguments1
static const UGUID IID_IEcoCommandArguments1 = { 0x01, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10 };
#endif /* __IID_IEcoCommandArguments1 */

typedef struct IEcoCommandArguments1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ struct IEcoCommandArguments1* me, /* in */ const UGUID* riid, /* out */ void **ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ struct IEcoCommandArguments1* me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ struct IEcoCommandArguments1* me);

    /* IEcoCommandArguments1 */
    int16_t (ECOCALLMETHOD *get_Count)(/* in */ struct IEcoCommandArguments1* me);
    char_t** (ECOCALLMETHOD *get_Args)(/* in */ struct IEcoCommandArguments1* me);
    char_t* (ECOCALLMETHOD *get_Path)(/* in */ struct IEcoCommandArguments1* me);
    char_t* (ECOCALLMETHOD *get_Arg)(/* in */ struct IEcoCommandArguments1* me, /* in */ int16_t index);

} IEcoCommandArguments1VTbl, *IEcoCommandArguments1VTblPtr;

interface IEcoCommandArguments1 {
    struct IEcoCommandArguments1VTbl *pVTbl;
} IEcoCommandArguments1;

#endif /* __I_ECO_COMMAND_ARGUMENTS_1_H__ */
