#include "main.h"

/**
 * swap_int - swap int value between pointer
 * @a: value 1
 * @b: value 2
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
