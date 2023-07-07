#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: A pointer to the hash table to print.
 *
 * Description: Key: value pairs printed in order
 */

void hash_table_print(const hash_table_t *ht)
{

	unsigned long int i = 0;
	unsigned int count = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);
			count++;

			if (count == ht->size)
				printf("");
			else
				printf(", ");

			current = current->next;
		}
	}
	printf("}\n");
}
