#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main- main function
 * Description- Prints the task phrase
 * Return: Returns void
 */

/* betty style doc for function main goes there */

int main (void)

{
	int n;
	int lastDigit;
	srand(time(0));
	n =rand() - RAND_MAX/2;
	/* your code goes there */
<<<<<<< HEAD
	if(n > 0)
		printf("%d is zero\n", n);
	else
		if (n == 0)
			printf("%d is zero\n", n);
		else
			printf("%d is negative\n", n);
=======
	lastDigit = n % 10;
	if (lastDigit)
		printf ("Last digit of %d is %d and is 0\n", n, lastDigit);
	else
		if (lastDigit < 6 && lastDigit! = 0)
			printf ("Last digit of %d and is less than 6 and not 0\n", n, lastDigit);
>>>>>>> 1021f03dae45a02802abe8da5e8e1a1ee0b1730d
	return (0);
}
