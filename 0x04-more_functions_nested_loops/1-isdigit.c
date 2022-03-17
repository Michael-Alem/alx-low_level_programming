#include "main.h"
/**
 * _isdigital - if it is a digit
 * @c: print int
 * Return: always 0
 */

int _isdigital(int c)
{
	if (c >= 48 && c<= 57)
	{
		return (1);
	}
	else
	{
		return(0);
	}
}
