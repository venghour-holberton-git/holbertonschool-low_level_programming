#include "main.h"
#include <unistd.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_diagonal(int n);
void print_triangle(int size);

int main(void)
{
    print_triangle(5);
    return (0);
}

void print_triangle(int size)
{
        int i,j;

        for (i = 0; i < size; i++)
        {
                for (j = 0; j < size - i - 1; j++)
                {
                        _putchar(' ');
                }
                for ( ; j < size; j++)
                {
                        _putchar('#');
                }
		_putchar('\n');
        }
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
