/*
	Author: Brendon Henry
	Date: May 21, 2017
	Author's Email: biddytodiworl@outlook.com

	This file tests the CopyFile function in the I/O module for functionality
	and correctness.
*/

#include "../../../src/inc/io.h"

int main(void) {
	const char *original = "original.txt";	/* Name of the original file */
	const char *copy = "copy.txt";	/* Name of the copy */

	puts("File Copying Test");
	if (!CopyFile(original, copy)) {	/* We couldn't copy the file */
		puts("Failed to copy file!");
		puts("Test failed.");
		return 0;
	}
	else {	/* We successfully copied the file */
		puts("Successfully copied file.");
		puts("Test successful.");
	}

	return 0;
}
