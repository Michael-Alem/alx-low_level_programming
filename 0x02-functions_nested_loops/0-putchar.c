#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * main - main function
 * print - prints "_putchar"
 * Description - prints number of string
 * Return: always 0(success)
 */
void print(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
}
int main(void)
{
	char s[] = "_putchar\n";

	print(s);
	return (0);
}
