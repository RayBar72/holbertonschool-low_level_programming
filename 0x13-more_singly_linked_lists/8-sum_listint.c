#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - function that sums all the data of list
 * @head: pointer to the function
 * Return: 0 if an empty list or the sum
 */

int sum_listint(listint_t *head)
{
	int x = 0;

	if (!head)
		return (0);
	while (head)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}
