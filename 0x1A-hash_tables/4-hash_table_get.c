#include "hash_tables.h"

/**
 * search_head - looks at hash ind. post for the existence
 * @head: pointer to positiones
 * @key: of the node
 * Return: pointer or string
 */
static hash_node_t *search_head(hash_node_t *head, char *key)
{
	while ((head))
	{
		if (strcmp(head->key, key))
			head = head->next;
		else
			return (head);
	}
	return (NULL);
}

/**
 * hash_table_get - function that get value for a key
 * @ht: pointer
 * @key: key
 * Return: valuo or NULL
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index = 0;
hash_node_t *search = NULL;


	if (!ht || !key)
		return (NULL);
	index = key_index((unsigned char *) key, ht->size);
	search = search_head(ht->array[index], (char *) key);
	if (search)
		return (search->value);
	return (NULL);
}
