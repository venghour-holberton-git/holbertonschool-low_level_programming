#include "lists.h"

/**
 * add_dnodeint -  add new node to the begining
 * @head: list head
 * @n: insert integer
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *current_node;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	current_node = *head;
	if (*head != NULL)
		current_node->prev = new_node;
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = current_node;
	*head = new_node;
	return (*head);
}
