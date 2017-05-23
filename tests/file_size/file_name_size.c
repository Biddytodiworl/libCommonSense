/*
	Author: Brendon Henry
	Date: May 21, 2017
	Author's Email: biddytodiworl@outlook.com

	This file tests the GetFileNameSize function in the I/O module for
	functionality and correctness.
*/

#include "../../src/inc/io.h"

int main(void) {
	const char *file = "file.txt";	/* Name of the file whose size is needed */
	long size = GetFileNameSize(file);	/* Contains the file size */
	if (0 == size) {
		puts("Failed to get file size!");
		puts("Test failed.");
		return 0;
	}	/* IF the file is empty, which it shouldn't be for the sake for testing */

	printf("Size of %s: %lu\n", file, size);	/* Output the size of the file, 1024
	for CRLF and 992 for LF */
	puts("Test successful.");
	return 0;
}
