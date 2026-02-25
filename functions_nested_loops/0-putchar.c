#include "main.h"

/**
 * main - prints _putchar followed by a new line using a loop
 * Return: 0
 */
int main(void)
{
    char str[] = "_putchar";  // store the string in an array
    int i = 0;

    while (str[i] != '\0')    // loop until end of string
    {
        _putchar(str[i]);     // print one character
        i++;
    }

    _putchar('\n');           // print newline
    return 0;
}
