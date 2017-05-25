/*
	Author: Brendon Henry
	Date: May 21, 2017
	Author's Email: biddytodiworl@outlook.com

	This file tests the Cube function in the Math module for
	functionality and correctness.
*/

#include "../../../src/inc/math.h"
#include <stdio.h>

int main(void) {
	double first_test = 5;	/* First test number */
	double second_test = 0;	/* Second test number */
	double third_test = -3;	/* Third test number */

	puts("Math Cube Test");
	printf("Square of %.1f: %.1f\n", first_test, Cube(first_test));
	printf("Cube of %.1f: %.1f\n", second_test, Cube(second_test));
	printf("Cube of %.1f: %.1f\n", third_test, Cube(third_test));

	return 0;
}
