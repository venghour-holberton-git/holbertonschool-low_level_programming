#include "main.h"

/**
 * print_triangle - print triangle
 * @size: triangle size
 * Description: print triangle of size n
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(' ');
		}
		for ( ; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
