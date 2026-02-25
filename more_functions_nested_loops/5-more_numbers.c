#include "main.h"

/**
 * print 0 - 14 10 times
 */

void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char c;

		for (c = '0'; i <= '14'; i++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
