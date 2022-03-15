#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet times 10
 *
 * return 0
 */
void print_alphabet_x10(void)
{
	char i=0, j;

	while (i <=10)
	{
		for (j = 'a' ; j <= 'z' ; j++)
	{
			_putchar(j); 
	}
	_putchar('\n');
i++;
return(0);
	}
}
