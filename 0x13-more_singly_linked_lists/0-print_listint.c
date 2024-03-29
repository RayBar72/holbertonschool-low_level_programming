#include "lists.h"

/**
 * print_listint -  function that prints all the elements of a listint_t list
 * @h: pointer to the first node of the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
