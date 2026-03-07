#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination buffer where src will be copied
 * @src: source string to copy
 * @n: maximum number of bytes to copy
 *
 * Description: Copies at most n characters from src into dest.
 * If src is shorter than n, the remaining bytes in dest are
 * filled with null bytes.
 *
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
