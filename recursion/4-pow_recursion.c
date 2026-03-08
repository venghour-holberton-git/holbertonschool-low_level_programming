#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base
 * @y: exponent
 *
 * Return: x raised to the power y, -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1); /* error for negative exponent */
	if (y == 0)
		return (1);  /* base case: any number^0 = 1 */

	return (x * _pow_recursion(x, y - 1));
}
