//
// Created by mineshadow on 02.05.24.
//

#ifndef __C_QUICKSORT_H
#define __C_QUICKSORT_H

#include "IEcoLab1.h"
#include "IEcoSystem1.h"
#include "IdEcoMemoryManager1.h"
#include <stdio.h>
#include <stdint.h>

typedef struct QuickSort{

    /* Таблица функций интерфейса IQuickSort */
    IQuickSortVTbl* m_pVTblIQuickSort;
    /* Счетчик ссылок */
    uint32_t m_cRef;

    /* Интерфейс для работы с памятью */
    IEcoMemoryAllocator1* m_pIMem;

    /* Системный интерфейс */
    IEcoSystem1* m_pISys;

    /* Данные экземпляра */
    char_t* m_Name;

    void (*swap)(uint32_t* a, uint32_t* b);
    void (*quickSort)(uint32_t arr[], uint32_t low, uint32_t high);
    void (*printArray)(uint32_t arr[], uint32_t size);
} QuickSort, *QuickSortPtr;

// Init object
uint16_t ECOCALLMETHOD initQuickSort(/*in*/ struct QuickSort* me, /* in */ IEcoUnknown *pIUnkSystem);
/* Создание экземпляра */
uint16_t ECOCALLMETHOD createQuickSort(/* in */ IEcoUnknown* pIUnkSystem, /* in */ IEcoUnknown* pIUnkOuter, /* out */ IQuickSort** ppIQuickSort);
/* Удаление */
void ECOCALLMETHOD deleteQuickSort(/* in */ IQuickSort* pQuickSort);

#endif // __C_QUICKSORT_H
