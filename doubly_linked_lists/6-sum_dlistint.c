#include "lists.h"

/**
 * sum_dlistint - sum and return all int in the list
 * @head: list to be sum
 * Return: the sum result
 */

int sum_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return (0);
	return (head->n + sum_dlistint(head->next));
}
