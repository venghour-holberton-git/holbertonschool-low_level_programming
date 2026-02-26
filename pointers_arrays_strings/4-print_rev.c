#include "main.h"

/**
 * print_rev - print reverse
 * @s: string parameter
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for ( ;i > 0; i--)
	{
		_putchar(s[i-1]);
	}
	_putchar('\n');
}
