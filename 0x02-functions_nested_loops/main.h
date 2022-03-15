#include <stdio.h>
#include "main.c"
/**
 * main - main function
 * Descripiton - prints putchar
 * Return - always 0 (success)
 */

void print(char *s)
{
    int i=0;
    while (s[i] != '\0' && s[i] != '\n')
    {
        putchar(s[i]);
        i++;
    }
}
void print_alphabet(void)
{
  char i;

  for ( i = 'a'; i <= 'z'; i++)
    putchar(i);
}
