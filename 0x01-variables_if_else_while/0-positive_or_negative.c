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
	lastDigit = n % 10;
	if (lastDigit)
		printf ('Last digit of %d is %d and is 0\n", n, lastDigit);
	else
		if (lastDigit < 6 && lastDigit ! = 0)
			printf ("Last digit of %d and is less than 6 nd not 0\n", n, lastDigit);
	return (0);
}
