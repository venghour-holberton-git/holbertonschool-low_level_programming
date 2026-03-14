#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum all parameter
 * @n: number of parameter
 * Return: the sum of all parameter
 */

int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	unsigned int i = 0;

	va_list args;
	va_start(args, n);
	
	if (n == 0)
	{
		return total;
	}
	while (i < n)
	{
		total += va_arg(args, int);
		i++;
	}
	va_end(args);
	return (total);
}
