#include "main.h"

/**
 * print_name - prints a name using a function pointer
 * @name: name to be printed
 * @f: pointer to the function that prints the name
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
