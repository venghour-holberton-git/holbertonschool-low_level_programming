#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: list head
 * @index: index of element
 * Return: the nth node of a dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_node;
	unsigned int current_index = 0;

	current_node = head;
	while (current_node != NULL)
	{
		if (current_index == index)
			return (current_node);
		current_node = current_node->next;
		current_index++;
	}
	return (NULL);
}
