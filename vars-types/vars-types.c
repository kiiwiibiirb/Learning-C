// C has several types of variables, but there are a few basic types
// - Integers, which are whole numbers that are positive or negative.
// - Unsigned Integers, which are whole numbers that can only be positive
// - Floating Point Numbers, which are numbers with fractions.

// - Integers are defined with `char`, `int`, `short`, `long` and `long long`.
// - Unsigned Integers are defined with with same variables but with `unsigned` at the beginning.
// - floating Point Numbers are defined with `float` and `double`.

// C doesn't have a boolean type. It is usually defined by doing the following:
//
// #define BOOL char
// #define FALSE 0
// #define TRUE 1

// For numbers, use the type `int`, which an integer in the size of a "word" the default number size of the machine which your program is compiled on. For modern computers, it'll be a 32-bit number (is it?) with means the number can be anywhere between -2 billion to 2 billion (roughly)

#include <stdio.h>
int main() {
	int a = 3; // This sets `a` to the integer `3`.
	float b = 4.5; // This sets `b` to the floating point `4.5`.
	double c = 5.25; // This sets `c` to the double of `5.25`
	float sum = a + b + c; // This sets `sum` to the sum of all three variables, which will be a floating point number.

	printf("The sum of a, b and c is %f.", sum); // This prints out the sum of a, b and c (duh)
	return 0; // Still don't know what this does.
}