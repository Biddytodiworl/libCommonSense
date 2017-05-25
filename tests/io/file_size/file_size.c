/*
	Author: Brendon Henry
	Date: May 21, 2017
	Author's Email: biddytodiworl@outlook.com

	This file tests the GetFileSize function in the I/O module for
	functionality and correctness.
*/

#include "../../../src/inc/io.h"

int main(void) {
	long size = 0;	/* Holds the file size */
	FILE *file = fopen("file.txt", "r");	/* The handle to the file whose size
	is needed */

	puts("File Size Retriever Test (by FILE variable)");
	if (NULL == file) {
		puts("Could not open file. File doesn't exist.");
		puts("Test failed.");
	}	/* If we couldn't open the file */

	size = GetFileSize(file);
	if (0 == size) {
		puts("Failed to get file size!");
		puts("Test failed.");
		return 0;
	}	/* If the file is empty, which it shouldn't be for the sake of testing */

	printf("Size of file.txt: %lu\n", size);	/* Output the file size, 1024 for
	CRLF and 992 for LF */
	puts("Test successful.");

	fclose(file);
	return 0;
}
