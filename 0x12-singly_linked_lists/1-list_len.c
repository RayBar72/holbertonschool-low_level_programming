#include "lists.h"

/**
 * list_len  - function that returns number of elements list
 * @h: pointer
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	if (!h)
	{
		return (0);
	}

	return (list_len(h->next) + 1);

}
