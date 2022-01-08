#include "lists.h"

/**
 * insert_node -  function that returns new nod
 * @h: pointer to the list
 * @n: value of node
 * Return: number of element
 */

dlistint_t *insert_node(dlistint_t *h, int n)
{
	dlistint_t *new;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = h->next;
	new->prev = h;
	if (h->next)
		h->next->prev = new;
	h->next = new;
	return (new);
}

/**
 * insert_dnodeint_at_index - returns the nth node of a dlistint_t
 * @h: pointer to the list
 * @idx: number of node starting at 0
 * @n: value of node
 * Return: node and NULL if it does not exist
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *recorre;

	if (!h)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	recorre = *h;
	while (--idx)
		if (recorre)
			recorre = recorre->next;
		else
			return (NULL);
	return (insert_node(recorre, n));
}
