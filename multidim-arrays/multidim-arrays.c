// The basic array is considered one-dimensional, but C can create and use multi-dimensional arrays! This is the general form of a multi-dimensional array declaration:
//
// type name[size1][size2]...[sizeN];

// Here's an example basic mutli-dimensional array:
//
// int foo[1][2][3];

// Here's another:
//
// char vowels[1][5] = {
// 		{'a', 'e', 'i', 'o', 'u'}
// };

// The simplest form of multi-dimensional array is the two-dimensional array. A two-dimensional array is basically a list of one-dimensional arrays. To declare a two-dimensional integer array of size [x][y], you would write something like the following:
//
// type arrayName [x][y];

// Where `type` can be any C data type and `arrayName` will be a valid C identifier, or variable. A two-dimensional array can be considered as a table which will have [x] number of rows and [y] number of columns.

// Multi-dimensional arrays may be used by specifying bracketed [] values for each row. The following example is an array with 3 rows and each row has 4 columns. To make it easier, you can forget the 3 and keep it blank, it'll still work.
//
/*

int a[3][4] = {
	{0, 1, 2, 3} ,
	{4, 5, 6, 7} ,
	{8, 9, 10, 11}
}

*/

// You can also do that in one line, like this:
//
// int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
//

// An element in a two-dimensional array is accessed by using the row index and column index of the array, like so;
//
// int val = a[2][3]
//
// That would take the 4th element [3] from the 3rd row [2] of the array.

#include <stdio.h>

int main() {
	int grades[2][5];
	float average;
	int i;
	int j;

	grades[0][0] = 80;
	grades[0][1] = 70;
	grades[0][2] = 65;
	grades[0][3] = 89;
	grades[0][4] = 90;

	grades[1][0] = 85;
	grades[1][1] = 80;
	grades[1][2] = 80;
	grades[1][3] = 82;
	grades[1][4] = 87;

	for (i = 0; i < 2; i++) {
		average = 0;
		for (j = 0; j < 5; j++) {
			average += grades[i][j];
		}
		average /= 5.0;
		printf("The average marks obtained in subject %d is: %.2f\n", i, average);
	}

	return 0;
}