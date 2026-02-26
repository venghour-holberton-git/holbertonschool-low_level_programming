#include <stdio.h>
#include <string.h>
#include <unistd.h>

int _putchar(char c);
int main(void)
{
	char* n = "Holberton!";
	int i = 0;
	
	while (n[i] != '\0')
	{
		_putchar(n[i]);
		i++;
	}
	printf("\n");
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
