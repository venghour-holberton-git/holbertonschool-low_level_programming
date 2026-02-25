#include "main.h"
#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_diagonal(int n);

int main(void)
{
    print_diagonal(3);
    print_diagonal(8);
    return (0);
}

void print_diagonal(int n)
{
	int i, j;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

int _putchar(char c)
{
    return write(1, &c, 1);
}
