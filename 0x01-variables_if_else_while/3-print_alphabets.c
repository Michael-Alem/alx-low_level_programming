#include <stdio.h>
/**
 * main-Main function
 * Description - Lower Case alphabet letters
 * Return: void
 */
int main(void)
{
	char c;

	for (c = 'a' ; c <= 'z' ; ++c)
		putchar(c);
	for (c = 'A' ; c <= 'Z' ; ++c)
		putchar(c);
	putchar('\n');
	return (0);
}
