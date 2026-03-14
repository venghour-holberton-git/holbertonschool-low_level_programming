#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * description: using argc and argv to do math operation
 */

int main(int argc, char *argv[])
{
	int (*result)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!(
		strcmp(argv[2], "+") == 0 ||
		strcmp(argv[2], "-") == 0 ||
		strcmp(argv[2], "*") == 0 ||
		strcmp(argv[2], "/") == 0 ||
		strcmp(argv[2], "%") == 0
		))
	{
		printf("Error\n");
		exit(99);
	}
	if ((
		strcmp(argv[2], "/") == 0 ||
		strcmp(argv[2], "%") == 0) &&
		strcmp(argv[3], "0") == 0)
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(argv[2]);
	printf("%d\n", result(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
