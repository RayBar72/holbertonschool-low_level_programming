#include "lists.h"

/**
 * free_listint2 - function thar frees listint_t
 * @head: pointer to pointer to structure
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (!head)
		return;
	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	*head = NULL;
}
