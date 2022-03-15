#include <stdio.h>
#include "main.h"
/** main - main function
 * description - prints lowercase alphabet
 * return: always 0(success)
 */
/* Decription: prints lowercase*/void print_alphabet(void)
{
  char i;

  for ( i = 'a'; i <= 'z'; i++)
  {
    putchar(i);
  }
  putchar('\n')
  }
