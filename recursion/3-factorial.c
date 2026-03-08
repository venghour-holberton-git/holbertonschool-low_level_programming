#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to calculate factorial
 *
 * Return: factorial of n, -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1); /* error for negative numbers */
	if (n == 0)
		return (1);  /* base case: 0! = 1 */

	return (n * factorial(n - 1));
}
