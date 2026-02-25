#include "main.h"

void print_triangle(int size)
{
	int i,j;

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
		
