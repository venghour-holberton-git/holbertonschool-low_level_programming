#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string where src will be appended
 * @src: source string to append to dest
 *
 * Description: This function appends the src string to the end
 * of dest, overwriting the null byte at the end of dest, and
 * adds a new null terminator.
 *
 * Return: Pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
