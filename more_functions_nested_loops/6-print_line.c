#include "main.h"

/**
 * print_line - prints a line of n underscores
 * @n: number of times the _ character should be printed
 *
 * Description: This function prints a straight line using the
 * _ character, repeated n times, followed by a new line.
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
