#include "lists.h"

/**
 * free_list - frees a list_t
 * @head: mem dir of list_t
 */

void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
