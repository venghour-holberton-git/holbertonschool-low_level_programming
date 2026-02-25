#include "main.h"

/**
 * print_diagonal - print char in diagonal
 * @n: size in y direction
 * Description: print diagonal
 */

void print_diagonal(int n)
{
        int i, j;

	if (n <= 0)
    	{
        	_putchar('\n'); // always print a newline
        	return;
    	}
        for (i = 0; i < n; i++)
        {
                for (j = 0; j < i; j++)
                {
                        _putchar(' ');
                }
                _putchar('\\');
                _putchar('\n');
        }
}
