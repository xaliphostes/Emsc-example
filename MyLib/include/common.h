#ifndef __MYLOIB_COMMON_H__
#define __MYLOIB_COMMON_H__

#ifdef USE_EMSC
#  define MYLIB
#else
#  ifdef WIN32
#    ifdef MYLIB_EXPORTS
#      define  MYLIB __declspec(dllexport)
#    else
#      define  MYLIB __declspec(dllimport)
#    endif
#  else
#    define MYLIB
#  endif
#endif

#endif
