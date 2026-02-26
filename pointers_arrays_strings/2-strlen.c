#include "main.h"

/**
 * _strlen - return string length
 * @s: string
 * Return: amount of char inside the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
