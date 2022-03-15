#include <stdio.h>
#include "main.h"
#include "main.c"
/** main - main function
 * description - prints lowercase alphabet
 * return: always 0(success)
 */
int main()
{
  char i;

  for ( i = 'a'; i <= 'z'; i++)
    putchar(i);
    return (0);
}
