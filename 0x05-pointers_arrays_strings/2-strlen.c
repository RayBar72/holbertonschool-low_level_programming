#include "main.h"

/**
 * _strlen - Function that returns the length of a string.
 * @s: pointer.
 *
 * Return: the value of the lenght of string.
 */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
