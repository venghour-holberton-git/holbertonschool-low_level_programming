#include "lists.h"

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
