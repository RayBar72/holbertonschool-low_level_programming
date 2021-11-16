#include "lists.h"

/**
 * pop_listint - function thar frees listint_t
 * @head: pointer to pointer to structure
 * Return: node dat, 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *next;
	int x;

	if (!head || !(*head))
		return (0);
	x = (*head)->n;
	next = (*head)->next;
	free(*head);
	*head = next;
	return (x);
}
