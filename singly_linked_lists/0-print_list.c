#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	int i = 1;
	if (h->next != NULL)
		i += print_list(h->next);
	return (i);
}
