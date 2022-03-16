#include "main.h"

/**
 * print_sign - Short description, single line
 * @c: contains value to be compared
 * Return: Always 0.
 */
int print_sign(int n)

{

if (n > 0)
{
_putchar ('+');
return (1);
}

else if (n == 0)
{
return (0);
_putchar ('0');
}
else
{
return (-1);
_putchar ('-');

}

}
