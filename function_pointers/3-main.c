#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] != '+' || argv[2] != '-' || argv[2] != '*' || argv[2] != '/' || argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2] == '/' || argv[2] == '%') && argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	int (*result)(int, int) = get_op_func(argv[2]);
	printf("%d\n", result(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
