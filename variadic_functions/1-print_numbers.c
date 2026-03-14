#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

/**
 * print_numbers - print all number with seperator
 * @separator: input seperator
 * @n: number of elements
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	while (i < n)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
		i++;
	}
	putchar('\n');
	va_end(args);
}

