#include "lists.h"

/**
 * add_nodeint_end - check the code
 * @head: pointer to pointer
 * @n: const int for the node
 * Return: dir of new element or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (!*head)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = new;
	}
	return (new);
}
