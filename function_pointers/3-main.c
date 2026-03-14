#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int (*result)(int, int) = get_op_func(argv[2]);
		printf("%d\n", result(atoi(argv[1]), atoi(argv[3])));
	}
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
