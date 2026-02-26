#include "main.h"

void rev_string(char *s)
{
	int i = 0, j = 0;
	char temp;

	while (s[i] != '\0')
	{
		i++;
	}
	for ( ; i > 0; i--)
	{
		temp = s[i - 1];
		s[i - 1] = s[j];
		s[j] = temp;
		j++;
	}
}
