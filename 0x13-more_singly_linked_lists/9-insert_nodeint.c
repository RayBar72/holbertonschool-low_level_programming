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
	listint_t *new, *next, *prev = NULL;
	unsigned int i;

	if (!head)
		return (NULL);

	next = *head;
	for (i = 0; i < idx; i++)
	{
		if (!next)
			return (NULL);
		prev = next;
		next = next->next;
	}

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = next;

	if (prev)
		prev->next = new;
	else
		*head = new;

	return (new);
}
