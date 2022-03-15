#include "main.h"
#include <stdio.h>
/**
 *print_alphabet - main function
 * print - prints "lowercase"
 * Description - prints number of string
 * Return: always 0(success)
 */
/*
 * Description: prints loercase alphabet*/void print_alphabet(void)

{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
