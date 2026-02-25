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
		    _putchar('_');
	    }
    }
    return (0);
}

int _putchar(char c)
{
    return write(1, &c, 1);
}
