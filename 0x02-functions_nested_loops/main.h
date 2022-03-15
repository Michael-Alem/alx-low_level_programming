#include <stdio.h>


void print(char *s)
{
    int i=0;
    while (s[i] != '\0' )
    {
        putchar(s[i]);
        i++;
    }
