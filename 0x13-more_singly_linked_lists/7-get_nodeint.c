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

/**
 * get_nodeint_at_index - fuction that returns ntn node
 * @head: pointer to list
 * @index: number of node
 * Return: null if does not exist, else the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *point;
	unsigned int i = 0;

	if (!head || (listint_len(head) - 1) <= index)
		return (NULL);

	while (i < index)
	{
		point = head->next;
		head = point;
		i++;
	}
	return (head);
}
