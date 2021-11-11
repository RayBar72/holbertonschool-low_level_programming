#include "lists.h"

/**
 * add_node - function that add node to the beginning of list
 * @head: pointer
 * @str: pointer
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new;
	char *s;
	int i;

	if (!str || !head)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (!new)
	{
		return (NULL);
	}

	for (i = 0; str[i]; i++)
		;

	s = strdup(str);
	if (!s)
	{
		free(new);
		return (NULL);
	}

	new->str = s;
	new->len = i;
	new->next = *head;

	return (*head = new);
}
