#ifndef IO_H
#define IO_H

#include <stdio.h>

#ifndef __cplusplus

typedef enum {
	false,
	true
} bool;	/* Define bool if C++ is not being used */

#else
extern "C" {
#endif

/* Function prototypes */
size_t GetFileSize(FILE *);	/* Get size of file */
size_t GetFileNameSize(const char *);	/* Get size of named file */
bool CopyFile(const char *, const char *);	/* Copy file to another file */

#ifdef __cplusplus
}
#endif

#endif
