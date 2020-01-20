/*
 * tutu_typedef.h
 * yclu@spectimbre.com
 *
 */

#ifndef _TUTU_TYPEDEF_H_
#define _TUTU_TYPEDEF_H_

#ifndef W8
typedef signed char			W8;
#endif

#ifndef UW8
typedef unsigned char       UW8;
#endif

#ifndef W16
typedef short int           W16;
#endif

#ifndef UW16
typedef unsigned short int  UW16;
#endif

#ifndef W32
typedef int                 W32;
#endif

#ifndef UW32
typedef unsigned int        UW32;
#endif

#ifndef W64
typedef signed long long    W64;
#endif

#ifndef UW64
typedef unsigned long long  UW64;
#endif

#if !defined(NULL)
#define NULL				((void*)0)
#endif

// Error messages
#define TUTU_MEMERR			3
#define TUTU_UNSUPPORTED	2
#define TUTU_OK				1
#define TUTU_FAIL			0

#define MAKETUTUVER(major, minor, revision) ((UW32)(UW8)(major)|((UW32)(UW8)(minor)<<8)|((UW32)(UW8)(revision)<<16))

#endif // _TUTU_TYPEDEF_H_
