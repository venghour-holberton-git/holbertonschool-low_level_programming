#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: list header
 * @idx: index to be inserted
 * @n: int to be inserted
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int current_index = 0;
	dlistint_t *current_node;

	current_node = *h;
	while (current_node != NULL)
	{
		if (current_index == idx)
		{
			dlistint_t *new_node;

			new_node = malloc(sizeof(dlistint_t));
			if (new_node == NULL)
				return (NULL);
			new_node->n = n;
			new_node->next = current_node;
			if (current_node->prev != NULL)
			{
				current_node->prev->next = new_node;
				new_node->prev = current_node->prev;
			}
			else
			{
				new_node->prev = NULL;
				*h = new_node;
			}
			current_node->prev = new_node;
			return (new_node);
		}
		current_node = current_node->next;
		current_index++;
	}
	if (current_index == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
