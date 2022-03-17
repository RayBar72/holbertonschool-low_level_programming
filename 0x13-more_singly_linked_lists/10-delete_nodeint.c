#include "lists.h"

/**
 * delete_nodeint_at_index - fuction thar deletes a specific node
 * @head: pointer to pointer
 * @index: starting to zero, nodo to be erreased
 * Return: 1 if succed, -1 in other case
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *noda = NULL, *nodb = NULL;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);
	if (index == 0)
	{
		nodb = (*head)->next;
		free(*head);
		*head = nodb;
		return (1);
	}

	nodb = *head;
	for (i = 0; i < index; i++)
	{
		if (!nodb)
			return (-1);
		noda = nodb;
		nodb = nodb->next;
	}
	noda->next = nodb->next;
	free(nodb);
	return (1);
}
