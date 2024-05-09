/*
 * <кодировка символов>
 *   Cyrillic (UTF-8 with signature) - Codepage 65001
 * </кодировка символов>
 *
 * <сводка>
 *   depend.h
 * </сводка>
 *
 * <описание>
 *   Данный заголовок подключаеет зависимые от архитектуры и платформы заголовочные файлы
 *   ПРИМЕЧАНИЕ: Данный файл расширяемый и может менятся в зависимости от добавляемой поддержки той или иной архитектуры и платформы.
 *               
 * </описание>
 *
 * <автор>
 *   Copyright (c) 2016 Vladimir Bashev. All rights reserved.
 * </автор>
 *
 */

#ifndef __ECO_DEPEND_H__
#define __ECO_DEPEND_H__

/* Подключение заголовочных файлов для Эко ОС */
#ifdef ECO_OS

/* STD ANSI C 1998 */
#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* MISRA C 1998 */
/*typedef char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short wchar_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned int uint32_t;

typedef long long int int64_t;
typedef unsigned long long int uint64_t;
typedef long double ldouble_t;
*/

#ifndef ECO_BOOL_T_DEFINED
typedef unsigned char bool_t;
#define ECO_BOOL_T_DEFINED
#endif

#ifndef ECO_BYTE_T_DEFINED
typedef unsigned char byte_t;
#define ECO_BYTE_T_DEFINED
#endif

#ifndef ECO_CHAR_T_DEFINED
typedef char char_t;
#define ECO_CHAR_T_DEFINED
#endif

#ifndef ECO_UCHAR_T_DEFINED
typedef unsigned char uchar_t;
#define ECO_UCHAR_T_DEFINED
#endif

#ifndef ECO_FLOAT_T_DEFINED
typedef float float_t;
#define ECO_FLOAT_T_DEFINED
#endif

#ifndef ECO_DOUBLE_T_DEFINED
typedef double double_t;
#define ECO_DOUBLE_T_DEFINED
#endif

#ifndef ECO_LONG_T_DEFINED
typedef long long_t;
#define ECO_LONG_T_DEFINED
#endif

#ifndef ECO_ULONG_T_DEFINED
typedef unsigned long ulong_t;
#define ECO_ULONG_T_DEFINED
#endif

#ifndef ECO_VOID_PTR_T_DEFINED
typedef void* voidptr_t;
#define ECO_VOID_PTR_T_DEFINED
#endif

#ifndef ECO_DESCRIPTOR_T_DEFINED
typedef void* descriptor_t;
#define ECO_DESCRIPTOR_T_DEFINED
#endif

#define ECO_DIV_T_DEFINED
#define ECO_SIZE_T_DEFINED
#define ECO_WCHAR_T_DEFINED

/* Подключение заголовочных файлов для ОС Windows */
#elif ECO_WINDOWS

#define ECO_HUGE_VAL_DEFINED
#define ECO_DIV_T_DEFINED

/* STD ANSI C 1998 */
#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* MISRA C 1998 */
#include <stdint.h>

#ifndef ECO_BOOL_T_DEFINED
typedef unsigned char bool_t;
#define ECO_BOOL_T_DEFINED
#endif

#ifndef ECO_BYTE_T_DEFINED
typedef unsigned char byte_t;
#define ECO_BYTE_T_DEFINED
#endif

#ifndef ECO_CHAR_T_DEFINED
typedef char char_t;
#define ECO_CHAR_T_DEFINED
#endif

#ifndef ECO_UCHAR_T_DEFINED
typedef unsigned char uchar_t;
#define ECO_UCHAR_T_DEFINED
#endif

#ifndef ECO_FLOAT_T_DEFINED
typedef float float_t;
#define ECO_FLOAT_T_DEFINED
#endif

#ifndef ECO_DOUBLE_T_DEFINED
typedef double double_t;
#define ECO_DOUBLE_T_DEFINED
#endif

#ifndef ECO_LONG_T_DEFINED
typedef long long_t;
#define ECO_LONG_T_DEFINED
#endif

#ifndef ECO_ULONG_T_DEFINED
typedef unsigned long ulong_t;
#define ECO_ULONG_T_DEFINED
#endif

#ifndef ECO_VOID_PTR_T_DEFINED
typedef void* voidptr_t;
#define ECO_VOID_PTR_T_DEFINED
#endif

#ifndef ECO_DESCRIPTOR_T_DEFINED
typedef void* descriptor_t;
#define ECO_DESCRIPTOR_T_DEFINED
#endif

/* Windows OS optional */
#include "windows.h"
#include "dshow.h"
#pragma comment(lib, "strmiids.lib")
#include <CRTDBG.H>


/* Подключение заголовочных файлов для ОС Linux */
#elif ECO_LINUX

/* STD ANSI C 1998 */
#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* MISRA C 1998 */
#include <stdint.h>

/* Linux OS */
#include <dlfcn.h>
#include <err.h>
#include <unistd.h>


#ifndef ECO_BOOL_T_DEFINED
typedef unsigned char bool_t;
#define ECO_BOOL_T_DEFINED
#endif

#ifndef ECO_BYTE_T_DEFINED
typedef unsigned char byte_t;
#define ECO_BYTE_T_DEFINED
#endif

#ifndef ECO_CHAR_T_DEFINED
typedef char char_t;
#define ECO_CHAR_T_DEFINED
#endif

#ifndef ECO_UCHAR_T_DEFINED
typedef unsigned char uchar_t;
#define ECO_UCHAR_T_DEFINED
#endif

#ifndef ECO_FLOAT_T_DEFINED
typedef float float_t;
#define ECO_FLOAT_T_DEFINED
#endif

#ifndef ECO_DOUBLE_T_DEFINED
typedef double double_t;
#define ECO_DOUBLE_T_DEFINED
#endif

#ifndef ECO_LONG_T_DEFINED
typedef long long_t;
#define ECO_LONG_T_DEFINED
#endif

#ifndef ECO_ULONG_T_DEFINED
typedef unsigned long ulong_t;
#define ECO_ULONG_T_DEFINED
#endif

#ifndef ECO_VOID_PTR_T_DEFINED
typedef void* voidptr_t;
#define ECO_VOID_PTR_T_DEFINED
#endif

#ifndef ECO_DESCRIPTOR_T_DEFINED
typedef void* descriptor_t;
#define ECO_DESCRIPTOR_T_DEFINED
#endif

#define ECO_DIV_T_DEFINED
#define ECO_SIZE_T_DEFINED
#define ECO_WCHAR_T_DEFINED


/* Подключение заголовочных файлов для ОС Mac OS X, iOS, tvOS */
#elif ECO_APPLE

/* STD ANSI C 1998 */
#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* MISRA C 1998 */
#include <stdint.h>


#ifndef ECO_BOOL_T_DEFINED
typedef unsigned char bool_t;
#define ECO_BOOL_T_DEFINED
#endif

#ifndef ECO_BYTE_T_DEFINED
typedef unsigned char byte_t;
#define ECO_BYTE_T_DEFINED
#endif

#ifndef ECO_CHAR_T_DEFINED
typedef char char_t;
#define ECO_CHAR_T_DEFINED
#endif

#ifndef ECO_UCHAR_T_DEFINED
typedef unsigned char uchar_t;
#define ECO_UCHAR_T_DEFINED
#endif

#ifndef ECO_FLOAT_T_DEFINED
typedef float float_t;
#define ECO_FLOAT_T_DEFINED
#endif

#ifndef ECO_DOUBLE_T_DEFINED
typedef double double_t;
#define ECO_DOUBLE_T_DEFINED
#endif

#ifndef ECO_LONG_T_DEFINED
typedef long long_t;
#define ECO_LONG_T_DEFINED
#endif

#ifndef ECO_ULONG_T_DEFINED
typedef unsigned long ulong_t;
#define ECO_ULONG_T_DEFINED
#endif

#ifndef ECO_VOID_PTR_T_DEFINED
typedef void* voidptr_t;
#define ECO_VOID_PTR_T_DEFINED
#endif

#ifndef ECO_DESCRIPTOR_T_DEFINED
typedef void* descriptor_t;
#define ECO_DESCRIPTOR_T_DEFINED
#endif

/* Подключение заголовочных файлов для ОС Android */
#elif ECO_ANDROID
/* STD ANSI C 1998 */
#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* MISRA C 1998 */
#include <stdint.h>

#ifndef ECO_BOOL_T_DEFINED
typedef unsigned char bool_t;
#define ECO_BOOL_T_DEFINED
#endif

#ifndef ECO_BYTE_T_DEFINED
typedef unsigned char byte_t;
#define ECO_BYTE_T_DEFINED
#endif

#ifndef ECO_CHAR_T_DEFINED
typedef char char_t;
#define ECO_CHAR_T_DEFINED
#endif

#ifndef ECO_UCHAR_T_DEFINED
typedef unsigned char uchar_t;
#define ECO_UCHAR_T_DEFINED
#endif

#ifndef ECO_FLOAT_T_DEFINED
typedef float float_t;
#define ECO_FLOAT_T_DEFINED
#endif

#ifndef ECO_DOUBLE_T_DEFINED
typedef double double_t;
#define ECO_DOUBLE_T_DEFINED
#endif

#ifndef ECO_LONG_T_DEFINED
typedef long long_t;
#define ECO_LONG_T_DEFINED
#endif

#ifndef ECO_ULONG_T_DEFINED
typedef unsigned long ulong_t;
#define ECO_ULONG_T_DEFINED
#endif

#ifndef ECO_DESCRIPTOR_T_DEFINED
typedef void* descriptor_t;
#define ECO_DESCRIPTOR_T_DEFINED
#endif

/* Подключение заголовочных файлов */
#elif ECO_K210
/* STD ANSI C 1998 */
#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* MISRA C 1998 */
#include <stdint.h>


#ifndef ECO_BOOL_T_DEFINED
typedef unsigned char bool_t;
#define ECO_BOOL_T_DEFINED
#endif

#ifndef ECO_BYTE_T_DEFINED
typedef unsigned char byte_t;
#define ECO_BYTE_T_DEFINED
#endif

#ifndef ECO_CHAR_T_DEFINED
typedef char char_t;
#define ECO_CHAR_T_DEFINED
#endif

#ifndef ECO_UCHAR_T_DEFINED
typedef unsigned char uchar_t;
#define ECO_UCHAR_T_DEFINED
#endif

#ifndef ECO_FLOAT_T_DEFINED
typedef float float_t;
#define ECO_FLOAT_T_DEFINED
#endif

#ifndef ECO_DOUBLE_T_DEFINED
typedef double double_t;
#define ECO_DOUBLE_T_DEFINED
#endif

#ifndef ECO_LONG_T_DEFINED
typedef long long_t;
#define ECO_LONG_T_DEFINED
#endif

#ifndef ECO_VOID_PTR_T_DEFINED
typedef void* voidptr_t;
#define ECO_VOID_PTR_T_DEFINED
#endif

#ifndef ECO_ULONG_T_DEFINED
typedef unsigned long ulong_t;
#define ECO_ULONG_T_DEFINED
#endif

/* Подключение заголовочных файлов */
#elif ECO_STM32
/* STD ANSI C 1998 */
#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* MISRA C 1998 */
#include <stdint.h>


#ifndef ECO_BOOL_T_DEFINED
typedef unsigned char bool_t;
#define ECO_BOOL_T_DEFINED
#endif

#ifndef ECO_BYTE_T_DEFINED
typedef unsigned char byte_t;
#define ECO_BYTE_T_DEFINED
#endif

#ifndef ECO_CHAR_T_DEFINED
typedef char char_t;
#define ECO_CHAR_T_DEFINED
#endif

#ifndef ECO_UCHAR_T_DEFINED
typedef unsigned char uchar_t;
#define ECO_UCHAR_T_DEFINED
#endif

#ifndef ECO_FLOAT_T_DEFINED
typedef float float_t;
#define ECO_FLOAT_T_DEFINED
#endif

#ifndef ECO_DOUBLE_T_DEFINED
typedef double double_t;
#define ECO_DOUBLE_T_DEFINED
#endif

#ifndef ECO_LONG_T_DEFINED
typedef long long_t;
#define ECO_LONG_T_DEFINED
#endif

#ifndef ECO_ULONG_T_DEFINED
typedef unsigned long ulong_t;
#define ECO_ULONG_T_DEFINED
#endif

#ifndef ECO_VOID_PTR_T_DEFINED
typedef void* voidptr_t;
#define ECO_VOID_PTR_T_DEFINED
#endif

#ifndef ECO_DESCRIPTOR_T_DEFINED
typedef void* descriptor_t;
#define ECO_DESCRIPTOR_T_DEFINED
#endif

/* Подключение заголовочных файлов */
#elif ECO_PIC32
/* STD ANSI C 1998 */
#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* MISRA C 1998 */
#include <stdint.h>


#ifndef ECO_BOOL_T_DEFINED
typedef unsigned char bool_t;
#define ECO_BOOL_T_DEFINED
#endif

#ifndef ECO_BYTE_T_DEFINED
typedef unsigned char byte_t;
#define ECO_BYTE_T_DEFINED
#endif

#ifndef ECO_CHAR_T_DEFINED
typedef char char_t;
#define ECO_CHAR_T_DEFINED
#endif

#ifndef ECO_UCHAR_T_DEFINED
typedef unsigned char uchar_t;
#define ECO_UCHAR_T_DEFINED
#endif

#ifndef ECO_FLOAT_T_DEFINED
typedef float float_t;
#define ECO_FLOAT_T_DEFINED
#endif

#ifndef ECO_DOUBLE_T_DEFINED
typedef double double_t;
#define ECO_DOUBLE_T_DEFINED
#endif

#ifndef ECO_LONG_T_DEFINED
typedef long long_t;
#define ECO_LONG_T_DEFINED
#endif

#ifndef ECO_ULONG_T_DEFINED
typedef unsigned long ulong_t;
#define ECO_ULONG_T_DEFINED
#endif

#ifndef ECO_VOID_PTR_T_DEFINED
typedef void* voidptr_t;
#define ECO_VOID_PTR_T_DEFINED
#endif

#ifndef ECO_DESCRIPTOR_T_DEFINED
typedef void* descriptor_t;
#define ECO_DESCRIPTOR_T_DEFINED
#endif


/* Подключение заголовочных файлов */
#elif ECO_AVR8
/* STD ANSI C 1998 */
#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* MISRA C 1998 */
#include <stdint.h>

#include <avr/io.h>
#include <avr/interrupt.h>

#ifndef ECO_BOOL_T_DEFINED
typedef unsigned char bool_t;
#define ECO_BOOL_T_DEFINED
#endif

#ifndef ECO_BYTE_T_DEFINED
typedef unsigned char byte_t;
#define ECO_BYTE_T_DEFINED
#endif

#ifndef ECO_CHAR_T_DEFINED
typedef char char_t;
#define ECO_CHAR_T_DEFINED
#endif

#ifndef ECO_UCHAR_T_DEFINED
typedef unsigned char uchar_t;
#define ECO_UCHAR_T_DEFINED
#endif

#ifndef ECO_FLOAT_T_DEFINED
typedef float float_t;
#define ECO_FLOAT_T_DEFINED
#endif

#ifndef ECO_DOUBLE_T_DEFINED
typedef double double_t;
#define ECO_DOUBLE_T_DEFINED
#endif

#ifndef ECO_LONG_T_DEFINED
typedef long long_t;
#define ECO_LONG_T_DEFINED
#endif

#ifndef ECO_ULONG_T_DEFINED
typedef unsigned long ulong_t;
#define ECO_ULONG_T_DEFINED
#endif

#ifndef ECO_VOID_PTR_T_DEFINED
typedef void* voidptr_t;
#define ECO_VOID_PTR_T_DEFINED
#endif

#ifndef ECO_DESCRIPTOR_T_DEFINED
typedef void* descriptor_t;
#define ECO_DESCRIPTOR_T_DEFINED
#endif

/* Подключение заголовочных файлов */
#elif ECO_BCM283X
/* STD ANSI C 1998 */
#include <assert.h>
#include <ctype.h>
#include <math.h>
#include <errno.h>
#include <float.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

/* MISRA C 1998 */
#include <stdint.h>


#ifndef ECO_BOOL_T_DEFINED
typedef unsigned char bool_t;
#define ECO_BOOL_T_DEFINED
#endif

#ifndef ECO_BYTE_T_DEFINED
typedef unsigned char byte_t;
#define ECO_BYTE_T_DEFINED
#endif

#ifndef ECO_CHAR_T_DEFINED
typedef char char_t;
#define ECO_CHAR_T_DEFINED
#endif

#ifndef ECO_UCHAR_T_DEFINED
typedef unsigned char uchar_t;
#define ECO_UCHAR_T_DEFINED
#endif

#ifndef ECO_FLOAT_T_DEFINED
typedef float float_t;
#define ECO_FLOAT_T_DEFINED
#endif

#ifndef ECO_DOUBLE_T_DEFINED
typedef double double_t;
#define ECO_DOUBLE_T_DEFINED
#endif

#ifndef ECO_LONG_T_DEFINED
typedef long long_t;
#define ECO_LONG_T_DEFINED
#endif

#ifndef ECO_ULONG_T_DEFINED
typedef unsigned long ulong_t;
#define ECO_ULONG_T_DEFINED
#endif

#ifndef ECO_VOID_PTR_T_DEFINED
typedef void* voidptr_t;
#define ECO_VOID_PTR_T_DEFINED
#endif

#ifndef ECO_DESCRIPTOR_T_DEFINED
typedef void* descriptor_t;
#define ECO_DESCRIPTOR_T_DEFINED
#endif

#define ECO_HUGE_VAL_DEFINED

#else
#error Please define the platform or architecture
#endif

#ifdef ECO_WIN32
#define ECO_EXPORT __declspec(dllexport)
#else
#define ECO_EXPORT
#endif

#ifdef ECO_WIN32
#define ECOCDECLMETHOD __cdecl
#define ECOCALLMETHOD __stdcall
#define ECOSTDCALLMETHOD __stdcall
#define ECOFASTCALLMETHOD __fastcall
#define ECOPASCALMETHOD
#define ECOSAFECALLMETHOD
#define ECOTHISCALLMETHOD
#define ECOVECTORCALLMETHOD
#else
#define ECOCDECLMETHOD
#define ECOCALLMETHOD
#define ECOSTDCALLMETHOD
#define ECOFASTCALLMETHOD
#define ECOPASCALMETHOD
#define ECOSAFECALLMETHOD
#define ECOTHISCALLMETHOD
#define ECOVECTORCALLMETHOD
#endif

/* Порядок байтов */
#include "byteswap.h"
/* Атомарные операции */
#include "atomic.h"

#endif /* __ECO_DEPEND_H__ */
