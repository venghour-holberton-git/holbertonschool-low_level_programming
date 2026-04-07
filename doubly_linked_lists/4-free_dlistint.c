#include "lists.h"

/**
 * free_dlistint - free all list memory
 * @head: memory
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;
	free_dlistint(head->next);
	free(head);
}
