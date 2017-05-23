/*
	Author: Brendon Henry
	Date: May 21, 2017
	Author's Email: biddytodiworl@outlook.com

	This file tests the Double and Cube functions in the Math module for
	functionality and correctness.
*/

#include "../../src/inc/math.h"
#include <stdio.h>

int main(void) {
	double num = 5.0;
	int factorial = Factorial(5);
	double square = Square(num);
	double cube = Cube(num);

	printf("num: %.2f\n", num);
	printf("square: %.2f\n", square);
	printf("cube: %.2f\n", cube);
	printf("factorial: %d\n", factorial);

	puts("Test successful.");
	return 0;
}
