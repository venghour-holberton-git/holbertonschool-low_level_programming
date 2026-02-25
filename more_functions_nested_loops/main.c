#include "main.h"
#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int i, j;
    for (i = 0; i < 10; i++){
	    for (j = 0; j <= 14; j++)
	    {
		    if (j >= 10)
		    {
			    _putchar(j/10 + '0');
		    }
		    _putchar(j % 10 + '0');
	    }
	    _putchar('\n');
    }
    return (0);
}

int _putchar(char c)
{
    return write(1, &c, 1);
}
