#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: pointer to a direction of memory
 * @str: string of the new node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)

{
	list_t *nuevo, *fin;
	char *s;
	int i;

	if (!str || !head)
		return (NULL);
	nuevo = malloc(sizeof(list_t));
	if (!nuevo)
	{
		free(nuevo);
		return (NULL);
	}
	for (i = 0; str[i]; i++)
		;
	s = strdup(str);
	if (!s)
	{
		free(s);
		return (NULL);
	}
	nuevo->str = s;
	nuevo->len = i;
	nuevo->next = NULL;
	if (!*head)
		*head = nuevo;
	else
	{
		fin = *head;
		while (fin->next)
		{
			fin = fin->next;
		}
		fin->next = nuevo;
	}
	return (nuevo);
}
