#if !defined(__LIBDEFS_H)
#define LIBDEFS_H

/*
   {{{ includes 
 */

#define MUTILS_USE_MHASH_CONFIG

#include <mutils/mincludes.h>
#include <mutils/mglobal.h>
#include <mutils/mtypes.h>
#include <mutils/mutils.h>

# define WIN32DLL_DEFINE

#define RAND32 (mutils_word32) ((mutils_word32)rand() << 17 ^ (mutils_word32)rand() << 9 ^ rand())

#endif
