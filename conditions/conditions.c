// Here is a general form of the decision making stuctures in C.
/*
int target = 10;
if (target == 10) {
	printf("Target is equal to 10");
}
*/

// The if statement allows us to check if an expression is true or false, and execute different code according to the result.
// To evaluate whether two variables are equal, the `==` operator is used, just like in the example above.
// Inequality operators can also be used to evaluate expressions, for example:

/*
int foo = 1;
int bar = 2;

if (foo < bar) {
	printf("foo is smaller than bar.");
}

if (foo > bar) {
	printf("foo is greater than bar.");
}
*/

// We can use the `else` keyword to execute code when our our expression evaluates to false.

/*
int foo = 1;
int bar = 2;

if (foo < bar) {
	printf("foo is smaller than bar.");
}
else {
	printf("foo is greater than bar.");
}
*/

// Sometimes we will have more than two outcomes to choose from. In these cases we can "chain" multiple `if else` statements together.

/*
int foo = 1;
int bar = 2;

if (foo < bar) {
	printf("foo is smaller than bar.");
}
elseif (foo == bar) {
	printf("foo is equal to bar.");
}
else {
	printf("foo it greater than bar.");
}
*/

// You can also nest `if else` statements like the following:

/*
int peanuts_eaten = 22;
int peanuts_in_jar = 100;
int max_peanut_limit = 50;

if (peanuts_in_jar > 80) {
	if (peanuts_eaten < max_peanut_limit) {
		printf("Take as many peanuts as you want!\n");
	}
}
else {
	if (peanuts_eaten > peanuts_in_jar) {
		printf("You can't have anymore peanuts!\n");
	}
	else {
		printf("Alright, just one more peanut.\n");
	}
}
*/

// Two or more expressions can be evaluated together using logical operators to check if two expressions evaluate to `true` together, or at least one of them. To check if two expressions both evaluate to `true`, use the AND operator `&&`. To check if at least one of the expressions evaluate to `true`, use the OR operator `||`.

/*
int foo = 1;
int bar = 2;
int moo = 3;

if (foo < bar && moo > bar) {
	printf("foo is smaller than bar AND moo is larger than bar.");
}

if (foo < bar || moo > bar) {
	printf("foo is smaller than bar OR moo is larger than bar.");
}
*/

// The NOT operator `!` can also be used likewise:

/*
int target = 9;
if (target != 10) {
	printf("Target is not equal to 10");
}
*/

#include <stdio.h>

void guessNumber(int guess) {
	if (guess == 555) {
		printf("Correct. You guessed it!\n");
	}
	else if (guess < 555) {
		printf("Your guess is too low.\n");
	}
	else {
		printf("Your guess it too high.\n");
	}
}

int main() {
	guessNumber(500);
	guessNumber(600);
	guessNumber(555);
}