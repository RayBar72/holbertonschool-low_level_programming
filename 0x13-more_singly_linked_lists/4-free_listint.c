#include "lists.h"

/**
 * free_listint - function thar frees listint_t
 * @head: pointer to structure
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
	free(head);
}
