#include <stdio.h>
/**
 * main - main function
 * Descripiton - prints putchar
 * Return - always 0 (success)
 */

void print(char *s)
{
    int i=0;
    while (s[i] != '\0' )
    {
        putchar(s[i]);
        i++;
    }
}
    int main()
{
    char s[] = "_putchar";
    print(s);
    return (0);
    }
