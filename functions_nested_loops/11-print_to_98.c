#include "main.h"

/**
 * print from n to 98
 * @n: enter parameter
 */

void print_to_98(int n)
{
	if(n >= 98)
	{
		int i;

		for (i = n; i <= 98; i--)
		{
			_putchar(i);
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		int i;

                for (i = n; i >= 98; i++)
                {
                        _putchar(i);
                        _putchar(',');
                        _putchar(' ');
                }
	}
	_putchar('\n');
}

