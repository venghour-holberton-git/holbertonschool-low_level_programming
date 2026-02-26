#include <stdio.h>
#include <string.h>

int main(void)
{
	char* n = "Holberton!";
	int i = 0;
	
	while (n[i] != '\0')
	{
		i++;
	}
	printf("i__ %d", i);
}
