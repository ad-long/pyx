/* Generated by Cython 0.29.33 */

#ifndef __PYX_HAVE__libmyso
#define __PYX_HAVE__libmyso

#include "Python.h"

#ifndef __PYX_HAVE_API__libmyso

#ifndef __PYX_EXTERN_C
  #ifdef __cplusplus
    #define __PYX_EXTERN_C extern "C"
  #else
    #define __PYX_EXTERN_C extern
  #endif
#endif

#ifndef DL_IMPORT
  #define DL_IMPORT(_T) _T
#endif

__PYX_EXTERN_C int add(int, int);

#endif /* !__PYX_HAVE_API__libmyso */

/* WARNING: the interface of the module init function changed in CPython 3.5. */
/* It now returns a PyModuleDef instance instead of a PyModule instance. */

#if PY_MAJOR_VERSION < 3
PyMODINIT_FUNC initlibmyso(void);
#else
PyMODINIT_FUNC PyInit_libmyso(void);
#endif

#endif /* !__PYX_HAVE__libmyso */
