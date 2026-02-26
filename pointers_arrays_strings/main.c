#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "main.h"

int _putchar(char c);
int main(void)
{
	char* str = "Holberton!";
	rev_string(str);
	printf("%s", str);
	return (0);

}

int _putchar(char c)
{
	return (write(1, &c, 1));
}
