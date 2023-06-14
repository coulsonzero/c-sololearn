#include <stdio.h>

#if SYSTEM == SYSV
    #define HDR "sysv.h"
#elif SYSTEM == BSD
    #define HDR "bsd.h"
#elif SYSTEM == MSDOS
    #define HDR "msdos.h"
#else
    #define HDR "default.h"
#endif
#include HDR


#ifndef HDR
    #define HDR
/* hdr.h文件的内容放在这里 */
#endif