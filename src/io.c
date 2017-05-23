/*
	Author: Brendon Henry
	Date: May 20, 2017
	Author's Email: biddytodiworl@outlook.com

	This file implements common file I/O procedures for libCommonSense.
*/

#include "inc/io.h"
#include <stdlib.h>

/*
	size_t GetFileSize(FILE *file_handle)

	DESCRIPTION:
	Calculates the size of the file specified by file_handle.

	PARAMETERS:
	1) file_handle
		TYPE: FILE *
		DESCRIPTION:
		Handle to the file whose size needs to be calculated. You
		MUST have at least read permissions to this file.


	RETURNS: size_t
	If the function succeeds, the return value is the number, in bytes,
	of the file specified by file_hanldle. If an error occurs while obtaining
	the file name, the return value is 0.
*/

size_t GetFileSize(FILE *file_handle) {
	size_t size = 0;	/* Holds the file size */

	/* Check if the handle is valid */
	if (NULL == file_handle) {
		return 0;
	}	/* If file_handle is NULL */

	/* Calculate the file size */
	fseek(file_handle, 0, SEEK_END);
	size = ftell(file_handle);
	fseek(file_handle, 0, SEEK_SET);

	return size;
}

/*
	size_t GetFileNameSize(const char *name)

	DESCRIPTION:
	Calculates the size of the file specified by name.

	PARAMETERS:
	1) name
		TYPE: const char *
		DESCRIPTION:
		Pointer to the name of the file whose size needs to
		be calculated. You MUST have at least read permissions to this file.


	RETURNS: size_t
	If the function succeeds, the return value is the number, in bytes,
	of the file specified by file_name. If an eror occured while obtaining
	the file size, the return value is 0.
*/

size_t GetFileNameSize(const char *name) {
	size_t size = 0;	/* Holds the file size */

	FILE *file = fopen(name, "r");
	if (NULL == file) {
		return 0;
	}	/* If the pointer to the file name is NULL */

	/* Calculate the file size */
	fseek(file, 0, SEEK_END);
	size = ftell(file);
	fseek(file, 0, SEEK_SET);

	fclose(file);
	return size;
}

/*
	bool CopyFile(const char *src_file, const char *dest_file)

	DESCRIPTION:
	Copies the contents of the file named by src_file to the file named by
	dest_file. The text is copied as ASCII text.

	PARAMETERS:
	1) src_file
		TYPE: const char *
		DESCRIPTION:
		Pointer to the name of the file whose contents will be copied.
		You MUST have read permission to this file.

	2) dest_file
		TYPE: const char *
		DESCRIPTION:
		Pointer to the name of the file that will receive the contents copied.
		You MUST have read and write permissions to the file. NOTE: ALL previous
		data saved in this file will be destroyed.


	RETURNS: bool
	If the function succeeds, the return value is non-zero/true, If an eror
	occured while copying the file, the return value is 0/false.
*/

bool CopyFile(const char *src_file, const char *dest_file) {
	/* Variable declarations */
	enum {BUFFER_SIZE = 512};	/* Declare a buffer size */
	char text[BUFFER_SIZE] = "";	/* Contains the file contents to copy */
	size_t size = 0;	/* Size of the file */
	FILE *src = NULL;	/* Handle to the source file */
	FILE *dest = NULL;	/* Handle to the destination file */

	/* Open the files */
	src = fopen(src_file, "r");
	dest = fopen(dest_file, "w");

	if (NULL == src_file) {
		return false;
	}	/* If the handle to the source file is NULL */
	else if (NULL == dest_file) {
		return false;
	}	/* If the handle to the destination file is NULL */

	size = GetFileSize(src);	/* Obtain the file size */
	if (0 == size) {
		/* Close the file because there is nothing to copy */
		fclose(dest);
		fclose(src);
		return true;
	}	/* If size is 0 */

	while ((size = fread(text, sizeof(char), BUFFER_SIZE, src)) > 0) {
		fwrite(text, sizeof(char), size, dest);	/* Write file contents */
	}

	/* Close the files */
	fclose(src);
	fclose(dest);

	return true;	/* Success */
}
