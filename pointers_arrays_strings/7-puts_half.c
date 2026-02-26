#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: input string
 */
void puts_half(char *str)
{
    int len = 0, i;
    
    /* find length of the string */
    while (str[len] != '\0')
        len++;

    /* compute starting index for second half */
    i = (len % 2 == 0) ? len / 2 : (len + 1) / 2;

    /* print from i to end */
    while (str[i] != '\0')
    {
        _putchar(str[i]);
        i++;
    }

    _putchar('\n');
}
