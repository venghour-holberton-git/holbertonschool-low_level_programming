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

		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i )
		}
	}
	else
	{
		int i;

                for (i = n; i <= 98;  i++)
                {
                        printf("%d,  ", i);
                }
	}
	_putchar('\n');
}

