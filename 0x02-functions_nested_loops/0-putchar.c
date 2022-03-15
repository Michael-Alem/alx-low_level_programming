#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * main - main function
 * print - prints "_putchar"
 * Description - prints number of string
 * Return: always 0(success)
 */
void print_put(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
}
