#include "hash_tables.h"

/**
 * hash_table_delete - function that frees a table
 * @ht: pointer to table
 */

void hash_table_delete(hash_table_t *ht)
{
hash_node_t *head = NULL, *next = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;
	for ( ; i < ht->size; i++)
	{
		head = ht->array[i];
		while ((next = head) != NULL)
		{
			head = head->next;
			free(next->value);
			free(next->key);
			free(next);
		}
	}
	free(ht->array);
	free(ht);
}
