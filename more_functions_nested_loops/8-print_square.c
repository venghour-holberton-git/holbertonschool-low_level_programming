#include "main.h"

/**
 * print_squre - print square
 * @size: square size
 * Description: print char in a sqaure format
 */

void print_square(int size)
{
	int i, j;
	for (i = 0; i <= size; i++)
	{
		for (j = 0; j <= size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
