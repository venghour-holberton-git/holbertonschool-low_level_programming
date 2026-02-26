#include "main.h"

/**
 * _put - print string
 * @str: string parameter
 * Description: print string with new line at the end
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

