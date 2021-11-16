#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node a a given posit
 * @head: pointer to a pointer
 * @idx: where new node should be added (index starts at 0)
 * @n: value in new node
 * Return: the address of new node or null if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *noda, *nodb, *new;
	unsigned int i = 0;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	nodb = *head;
	for (i = 0; i < idx; i++)
	{
		if (!nodb)
			return (NULL);
		noda = nodb;
		nodb = nodb->next;
	}
	noda->next = new;
	new->n = n;
	new->next = nodb;
	return (new);
}
