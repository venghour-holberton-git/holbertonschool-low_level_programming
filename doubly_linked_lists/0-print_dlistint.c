#include "lists.h"

/**
 * print_dlistint - print all elements in the list
 * @h: input list
 * Return: number of elements in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 1;
	printf("%d\n", h->n);
	if (h->next != NULL)
		count += print_dlistint(h->next);
	return (count);
}
