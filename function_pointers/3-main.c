#include "3-calc.h"
#include <stdio.h>

int main(void)
{
	int (*result)(int, int) = get_op_func("*");
	printf("__result__ %d _", result(3, 5));
	return (0);
}
