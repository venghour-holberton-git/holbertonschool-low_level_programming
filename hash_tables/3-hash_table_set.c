#include "hash_tables.h"

/**
 * hash_table_set - add element into hash table
 * @ht: hash table
 * @key: hash key
 * @value: value
 * Return: 1 on sucess and 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index(key, ht->size);
	hash_node_t *new_node;
	hash_node_t *current_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->next = NULL;
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	current_node = ht->array[index];
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	current_node->next = new_node;
	return (1);
}
