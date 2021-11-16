#include "lists.h"

/**
 * listint_len -  function that prints all the elements of a listint_t list
 * @h: pointer to the first node of the list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
