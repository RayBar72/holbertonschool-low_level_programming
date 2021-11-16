#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - check the code
 * @head: pointer to pointer
 * @n: const int for the node
 * Return: dir of new element or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
/*crear nuevo nodo*/
/*apuntar al anterior*/
/*retornar*/
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
