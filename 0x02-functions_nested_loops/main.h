#include <stdio.h>
#include "main.c"
/**
 * main - main function
 * Descripiton - prints putchar
 * Return - always 0 (success)
 */

void putchar_string(char *s)
{
    int i = 0;
  while (s[i] != '\n' && s[i] != '\0')
  {
      putchar (s[i]);
      ++i;
  }
}

void print_alphabet(void)
    
