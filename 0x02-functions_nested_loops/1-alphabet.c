#include <stdio.h>
#include "main.h"
#include "main.c"
/** main - main function
 * description - prints lowercase alphabet
 * return: always 0(success)
 */
void print_alphabet(void)
{
  char i;

  for ( i = 'a'; i <= 'z'; i++)
    putchar(i);
}
int main(void)
{
  print_alphabet();
  putchar ('\n');
  return (0);
}
