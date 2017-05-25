/*
	Author: Brendon Henry
	Date: May 21, 2017
	Author's Email: biddytodiworl@outlook.com

	This file tests the Factorial function in the Math module for
	functionality and correctness.
*/

#include "../../../src/inc/math.h"
#include <stdio.h>

int main(void) {
	int first_test = 5;	/* First test number */
	int second_test = 0;	/* Second test number */
	int third_test = 1;	/* Third test number */
	int fourth_test = -3;	/* Fourth test number */

	puts("Math Factorial Test");
	printf("Factorial of %d: %d\n", first_test, Factorial(first_test));
	printf("Factorial of %d: %d\n", second_test, Factorial(second_test));
	printf("Factorial of %d: %d\n", third_test, Factorial(third_test));
	printf("Factorial of %d: %d\n", fourth_test, Factorial(fourth_test));

	return 0;
}
