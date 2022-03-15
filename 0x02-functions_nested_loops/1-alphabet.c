#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - main function
 * Description: prints lowercase
 * Return: void
 */
/*
 * Description: prints lowercase alphabet*/
void print_alphabet(void)
{
	char i;
	for(i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n')
}
