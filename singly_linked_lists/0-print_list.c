#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	int i = 1;
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
