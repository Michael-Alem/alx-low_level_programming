#include "main.h"
#include <string.h>
#include <stdio.h>

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
    char s[] = "_putchar\n";
    print(s);
    return (0);
}
