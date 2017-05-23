#ifndef IO_H
#define IO_H

#include <stdio.h>

/* Implementation for bool in C89 */
typedef enum {
	false,
	true
} bool;

/* Function prototypes */
size_t GetFileSize(FILE *);	/* Get size of file */
size_t GetFileNameSize(const char *);	/* Get size of named file */
bool CopyFile(const char *, const char *);	/* Copy file to another file */

#endif
