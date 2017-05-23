/*
	Author: Brendon Henry
	Date: May 20, 2017
	Author's Email: biddytodiworl@outlook.com

	This file implements common math operations for libCommonSense. Some of these
	are simple wrappers.
*/

#include "inc/math.h"

/*
	double Square(const double num)

	DESCRIPTION:
	Calculates the square of the number num.

	PARAMETERS:
	1) num
		TYPE: double
		DESCRIPTION:
		The number that needs to be squared.


	RETURNS: double
	If the function succeeds, the return value is the squared value of the
	number.
*/

double Square(const double num) {
	return num * num;
}

/*
	double Cube(const double num)

	DESCRIPTION:
	Calculates the square of the number num.

	PARAMETERS:
	1) num
		TYPE: double
		DESCRIPTION:
		The number that needs to be cubed.


	RETURNS: double
	If the function succeeds, the return value is the cubed value of the
	number.
*/

double Cube(const double num) {
	return num * num * num;
}

/*
	int Factorial(const int num)

	DESCRIPTION:
	Calculates the factorial of num.

	PARAMETERS:
	1) num
		TYPE: int
		DESCRIPTION:
		The number whose factorial will be calculated.


	RETURNS: int
	The function returns the factorial of num. If num is 1 or 0, the function
	return 1. If num is negative, the function returns 0.
*/

int Factorial(const int num) {
	int i = 1;
	int factorial = 1;

	if (0 == num || 1 == num) {	/* The factorial of 1 and 0 is 1 */
		return 1;
	}
	else if (num < 0) {
		return 0;	/* Return 0 because negative factorials don't exist */
	}

	for (; i <= num; i++) {
		factorial *= i;	/* Calculate factorial */
	}

	return factorial;
}
