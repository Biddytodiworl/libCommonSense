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
