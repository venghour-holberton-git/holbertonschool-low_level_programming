#include "lists.h"

/**
 * add_node_end - add new node to the end of the list
 * @head: node head
 * @str: string to be added
 * Return: address of new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *new_node;
	list_t *current_node;

	while (str[len] != '\0')
	{
		len++;
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	current_node = *head;
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	current_node->next = new_node;
	return (new_node);
}
