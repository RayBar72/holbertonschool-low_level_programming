#include "lists.h"

/**
 * reverse_listint - reverse a list
 * @head: pointer to pointer
 * Return: pointer to first reversed
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *a = NULL, *b = NULL;

	if (!head || !*head)
		return (NULL);
	while (*head)
	{
		b = (*head)->next;
		(*head)->next = a;
		a = *head;
		*head = b;
	}
	return (*head = a);
}
