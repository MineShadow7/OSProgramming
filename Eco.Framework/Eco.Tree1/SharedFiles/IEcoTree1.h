/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   IEcoTree1
 * </сводка>
 *
 * <описание>
 *   Данный заголовок описывает интерфейс IEcoTree1
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

#ifndef __I_ECO_TREE_1_H__
#define __I_ECO_TREE_1_H__

#include "IEcoBase1.h"
#include "IEcoList1.h"

/* IEcoTree1Node IID = {0D328339-654B-4C0B-B4D2-61C07732757A} */
#ifndef __IID_IEcoTree1Node
static const UGUID IID_IEcoTree1Node = {0x01, 0x10, {0x0D, 0x32, 0x83, 0x39, 0x65, 0x4B, 0x4C, 0x0B, 0xB4, 0xD2, 0x61, 0xC0, 0x77, 0x32, 0x75, 0x7A} };
#endif /* __IID_IEcoTree1Node */

typedef struct IEcoTree1Node* IEcoTree1NodePtr_t;

typedef struct IEcoTree1NodeVTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface )(/* in */ IEcoTree1NodePtr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef )(/* in */ IEcoTree1NodePtr_t me);
    uint32_t (ECOCALLMETHOD *Release )(/* in */ IEcoTree1NodePtr_t me);

    /* IEcoTree1Node */
    voidptr_t (ECOCALLMETHOD *get_Data)(/* in */ IEcoTree1NodePtr_t me);
    void (ECOCALLMETHOD *set_Data)(/* in */ IEcoTree1NodePtr_t me, /* in */ voidptr_t value);
    char_t* (ECOCALLMETHOD *get_Name)(/* in */ IEcoTree1NodePtr_t me);
    void (ECOCALLMETHOD *set_Name)(/* in */ IEcoTree1NodePtr_t me, /* in */ char_t* value);
    IEcoTree1NodePtr_t (ECOCALLMETHOD *get_Parent)(/* in */ IEcoTree1NodePtr_t me);
    void (ECOCALLMETHOD *set_Parent)(/* in */ IEcoTree1NodePtr_t me, /* in */ IEcoTree1NodePtr_t parent);
    IEcoTree1NodePtr_t (ECOCALLMETHOD *get_PrevSibling)(/* in */ IEcoTree1NodePtr_t me);
    void (ECOCALLMETHOD *set_PrevSibling)(/* in */ IEcoTree1NodePtr_t me, /* in */ IEcoTree1NodePtr_t sibling);
    IEcoTree1NodePtr_t (ECOCALLMETHOD *get_NextSibling)(/* in */ IEcoTree1NodePtr_t me);
    void (ECOCALLMETHOD *set_NextSibling)(/* in */ IEcoTree1NodePtr_t me, /* in */ IEcoTree1NodePtr_t sibling);
    IEcoList1* (ECOCALLMETHOD *get_Childrens)(/* in */ IEcoTree1NodePtr_t me);
    uint32_t (ECOCALLMETHOD *get_Degree)(/* in */ IEcoTree1NodePtr_t me);
    uint32_t (ECOCALLMETHOD *get_Depth)(/* in */ IEcoTree1NodePtr_t me);
    bool_t (ECOCALLMETHOD *IsRoot)(/* in */ IEcoTree1NodePtr_t me);
    bool_t (ECOCALLMETHOD *IsLeaf)(/* in */ IEcoTree1NodePtr_t me);
    bool_t (ECOCALLMETHOD *IsInternalNode)(/* in */ IEcoTree1NodePtr_t me);
    IEcoTree1NodePtr_t (ECOCALLMETHOD *AddChild)(/* in */ IEcoTree1NodePtr_t me, /* in */ IEcoTree1NodePtr_t child);
    IEcoTree1NodePtr_t (ECOCALLMETHOD *AddChildByData)(/* in */ IEcoTree1NodePtr_t me, /* in */ voidptr_t data);

} IEcoTree1NodeVTbl, *IEcoTree1NodeVTblPtr;

interface IEcoTree1Node {
    struct IEcoTree1NodeVTbl *pVTbl;
} IEcoTree1Node;

/* IEcoTree1 IID = {1D5C328E-BC90-4364-8DB7-F40A664A9D3E} */
#ifndef __IID_IEcoTree1
static const UGUID IID_IEcoTree1 = {0x01, 0x10, {0x1D, 0x5C, 0x32, 0x8E, 0xBC, 0x90, 0x43, 0x64, 0x8D, 0xB7, 0xF4, 0x0A, 0x66, 0x4A, 0x9D, 0x3E} };
#endif /* __IID_IEcoTree1 */

typedef struct IEcoTree1* IEcoTree1Ptr_t;

typedef struct IEcoTree1VTbl {

    /* IEcoUnknown */
    int16_t (ECOCALLMETHOD *QueryInterface)(/* in */ IEcoTree1Ptr_t me, /* in */ const UGUID* riid, /* out */ voidptr_t* ppv);
    uint32_t (ECOCALLMETHOD *AddRef)(/* in */ IEcoTree1Ptr_t me);
    uint32_t (ECOCALLMETHOD *Release)(/* in */ IEcoTree1Ptr_t me);

    /* IEcoTree1 */
    IEcoTree1Node* (ECOCALLMETHOD *CreateNode)(/* in */ IEcoTree1Ptr_t me, /* in */ IEcoUnknown* pIUnkOuter, /* in */ voidptr_t data, /* in */ char_t* name);
    IEcoTree1Node* (ECOCALLMETHOD *InsertNode)(/* in */ IEcoTree1Ptr_t me, /* in */ IEcoTree1NodePtr_t parent, /* in */ IEcoTree1NodePtr_t child);
    IEcoTree1Node* (ECOCALLMETHOD *InsertNodeByData)(/* in */ IEcoTree1Ptr_t me, /* in */ IEcoTree1NodePtr_t parent, /* in */ voidptr_t data, /* in */ char_t* name);
    int16_t (ECOCALLMETHOD *DeleteNode)(/* in */ IEcoTree1Ptr_t me, /* in */ IEcoTree1NodePtr_t node);
    IEcoList1* (ECOCALLMETHOD *get_Forest)(/* in */ IEcoTree1Ptr_t me);
    IEcoTree1Node* (ECOCALLMETHOD *get_LeastCommonAncestor)(/* in */ IEcoTree1Ptr_t me, /* in */ IEcoTree1NodePtr_t node1, /* in */ IEcoTree1NodePtr_t node2);
    IEcoTree1Node* (ECOCALLMETHOD *get_LeastCommonAncestorByList)(/* in */ IEcoTree1Ptr_t me, /* in */ struct IEcoList1* node_list);
    int16_t (ECOCALLMETHOD *Clear)(/* in */ IEcoTree1Ptr_t me);

} IEcoTree1VTbl, *IEcoTree1VTblPtr;

interface IEcoTree1 {
    struct IEcoTree1VTbl *pVTbl;
} IEcoTree1;


#endif /* __I_ECO_TREE_1_H__ */

