#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to a direction of memory
 * @str: string of the new node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *new, *fin;
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
	new->next = NULL;
	if (!*head)
		*head = new;
	else
	{
		fin = *head;
		while (fin->next)
		{
			fin = fin->next;
		}
		fin->next = new;
	}
	return (new);
}
