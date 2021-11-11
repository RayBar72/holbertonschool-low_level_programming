#include "lists.h"

/**
 * add_node - function that add node to the beginning of list
 * @head: pointer
 * @str: pointer
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *nuevo;
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
	nuevo->next = *head;

	return (*head = nuevo);
}
