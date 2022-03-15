#include <stdio.h>
#include "main.h"
/** print_alphabet - main function
 * Description - prints lowercase alphabet
 * Return: always 0(success)
 */
void print_alphabet(void)
  
{
  char i;

  for( i = 'a'; i <= 'z'; i++)
  {
    putchar(i);
  }
  putchar('\n');
}
