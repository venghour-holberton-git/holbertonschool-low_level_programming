#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * description - print putchar
 * Return: 0
 */
int main(void)
{
    char str[] = "_putchar";
    int i = 0;

    while (str[i] != '\0')
    {
        printf("%c" ,str[i]);
        i++;
    }
    printf("\n");
    return (0);
}
