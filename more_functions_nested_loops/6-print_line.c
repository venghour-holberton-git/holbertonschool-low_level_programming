#include "main.h"

/**
 * @n: number of times _ are print
 * print_line - print _
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
