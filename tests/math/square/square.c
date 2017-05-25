/*
	Author: Brendon Henry
	Date: May 21, 2017
	Author's Email: biddytodiworl@outlook.com

	This file tests the Double function in the Math module for
	functionality and correctness.
*/

#include "../../../src/inc/math.h"
#include <stdio.h>

int main(void) {
	double first_test = 5;	/* First test number */
	double second_test = 0;	/* Second test number */
	double third_test = -3;	/* Third test number */

	puts("Math Square Test");
	printf("Square of %.1f: %.1f\n", first_test, Square(first_test));
	printf("Square of %.1f: %.1f\n", second_test, Square(second_test));
	printf("Square of %.1f: %.1f\n", third_test, Square(third_test));

	return 0;
}
