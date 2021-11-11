#include "lists.h"


/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to lis h
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{

	int i = 1;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}

	else
	{
		printf("[%d] %s\n", h->len, h->str);
	}

	if (h->next != NULL)
	{
		i = print_list(h->next) + 1;
	}
	return (i);
}
