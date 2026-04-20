#include "hash_tables.h"

/** hash_table_print - print hash table
 * @ht: hash_table to be print
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int index = 0;
	int first = 1;

	if (ht == NULL)
		return;
	printf("{");
	while (index < ht->size)
	{
		if (ht->array[index] != NULL)
		{
			current_node = ht->array[index];
			while (current_node != NULL)
			{
				if (!first)
					printf(", ");
				first = 0;
				printf("'%s': '%s'", current_node->key, current_node->value);
				current_node = current_node->next;
			}
		}
		index++;
	}
	printf("}\n");
}

