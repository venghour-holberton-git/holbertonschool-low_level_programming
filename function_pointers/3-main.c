#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point for a simple calculator program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Description: Performs basic arithmetic (+, -, *, /, %) on two numbers
 *              provided as command-line arguments. Exits with an error code
 *              if the input is invalid or if there is division/modulo by zero.
 * Return: 0 on success, exits with 98, 99, or 100 on errors.
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
