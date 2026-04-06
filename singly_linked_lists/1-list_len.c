#include "lists.h"

/**
 * list_len - return the amount of elements
 * @h: input list
 * Return: the amount of elements on the list
 */
size_t list_len(const list_t *h)
{
	int i = 1;

	if (h == NULL)
		return (0);
	if (h->next != NULL)
	{
		i += list_len(h->next);
	}
	return (i);
}
