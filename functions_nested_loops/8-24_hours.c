#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((h / 10) + '0');  // tens of hour
			_putchar((h % 10) + '0');  // ones of hour
			_putchar(':');
			_putchar((m / 10) + '0');  // tens of minute
			_putchar((m % 10) + '0');  // ones of minute
			_putchar('\n');
		}
	}
}
