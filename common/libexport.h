#ifndef _LIBEXPORT_H
#define _LIBEXPORT_H

#ifdef _MSC_VER 
#ifdef DLLEXPORT
#define CEXPORT _declspec (dllexport)
#else
#define CEXPORT _declspec (dllimport)
#endif
#else
#define CEXPORT
#endif

#endif /* _LIBEXPORT_H*/
