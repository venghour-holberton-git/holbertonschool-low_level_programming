#include "main.h"

void rev_string(char *s)
{
	int i = 0, j = 0;
	char* temp = "";

	while (s[i] != '\0')
	{
		i++;
	}
	for ( ; i > 0; i--)
	{
		temp[j] = s[i];
	}
	s = temp;
}
