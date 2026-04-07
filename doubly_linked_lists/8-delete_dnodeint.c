#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node at the index
 * @head: head of the node
 * @index: index to remove
 * Return: 1 if succeeded 0 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int current_index = 0;
	dlistint_t *current_node = *head;
	if (*head == NULL)
		return (0);
	while(current_node != NULL)
	{
		if (current_index == index)
		{
			if (current_node->next != NULL)
				current_node->next->prev = current_node->prev;
			if (current_node->prev != NULL)
			{
				current_node->prev->next = current_node->next;
			}
			else
			{
				*head = current_node->next;
			}
			free(current_node);
			return (1);
		}
		current_node = current_node->next;
		current_index++;
	}
	return (0);
}
