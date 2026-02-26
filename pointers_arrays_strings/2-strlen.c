#include "main.h"
#include <stdio.h>

/**
 * _strlen - return string length
 * @s: string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '0')
	{
		len++;
	}
	return len;
}
