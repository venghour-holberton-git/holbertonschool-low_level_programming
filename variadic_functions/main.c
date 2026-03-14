#include "variadic_functions.h"
#include "stdio.h"

int main (void)
{
	int total = sum_them_all(3, 2, 1, 8);
	printf("_total_ %d\n", total);
	return (0);
}
