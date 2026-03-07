#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Description: The function parses the string for a number. It takes
 * into account all '+' and '-' signs preceding the number. If no
 * digits are found, it returns 0. Only int is used, no arrays or
 * hard-coded values. The function stops reading when the first
 * non-digit character is found after the number starts.
 *
 * Return: The converted integer, or 0 if no digits found.
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int num = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-' && !started)
			sign = -sign;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			started = 1;
			num = num * 10 + (s[i] - '0');
		}
		else if (started)
			break;
		i++;
	}

	return (num * sign);
}
