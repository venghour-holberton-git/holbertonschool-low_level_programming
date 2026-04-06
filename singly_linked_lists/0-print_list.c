#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/*
 * print_list - prints all the strings in the list
 * @h: pointer to the list
 *
 * Return: number of elements in the list
 */
size_t print_list(const list_t *h)
{
	int i = 1;

	if (h == NULL)
		return (0);
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		printf("[%u] %s\n", h->len, h->str);
	}
	if (h->next != NULL)
	{
		i += print_list(h->next);
	}
	return (i);
}
