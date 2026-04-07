#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: list header
 * @idx: index to be inserted
 * @n: int to be inserted
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int current_index = 0;
	dlistint_t *current_node;

	current_node = *h;
	while (current_node->next != NULL)
	{
		if (current_index == idx)
		{
			dlistint_t *new_node;
			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->next = current_node;
			new_node->prev = current_node->prev;
			current_node->prev->next = new_node;
			current_node->prev = new_node;
			return (new_node);
		}
		current_node = current_node->next;
		current_index++;
	}
	return (NULL);
}
