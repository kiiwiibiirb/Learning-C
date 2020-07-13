// Arrays are special special variables which can hold more than one value under the same variable name, organized with an index. They are defined using this syntax:

// int numbers[10];

// Accessing a number from the array is done using the same syntax. Arrays in C are zero-based, meaning that instead of the first array starting at 1, it'll start at 0.

// Arrays can only have one type of variable, because they are implemented as a sequence of values in the computer's memory. Because of that, accessing a specific array is very efficient.

#include <stdio.h>

int main() {
	int grades[3]; // makes an array named `grades` with 3 integers
	int average;

	grades[0] = 80; // first integer is 80
	grades[1] = 85; // second it 85
	grades[2] = 90; // third is 90

	average = (grades[0] + grades[1] + grades[2]) / 3; // Takes all three integers in the array and divides them by 3.
	printf("The average of the 3 grades is: %d", average); // Prints out the average of the three grades.
	return 0;
}