#include <stdio.h>
/**
 * main - entry point
 * description - program that prints all possible combinations of single-digit numbers.
 * return: always 0 (success)
 */
int main(void)
{
	int number;

for (number = 48; number <= 57; number ++)
{
	putchar(number);

	if (number == 57)
	{
		break;
	}
	putchar (',');
	putchar (' ');
}
putchar ('n');
return (0);
}
