#include "main.h"

/**
 * _abs - Short description, single line
 * @n: contains value to be compared
 * Return: Always 0.
 */
int print_last_digit(int n)
int lastDigit

{
if (n < 0)
{
lastDigit = (-1 *(n%10))
_putchar (lastDigit + '0')
return (lastDigit);
}

else
{
lastDigit = (n%10)
_putchar (lastDigit + '0')
return (lastDigit);
}

}
