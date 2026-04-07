#include "lists.h"

/**
 * dlistint_len - return number of elements in the link
 * @h: link
 * Return: number of element in the link
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 1;

	if (h == NULL)
		return (0);
	count += dlistint_len(h->next);
	return (count);
}
