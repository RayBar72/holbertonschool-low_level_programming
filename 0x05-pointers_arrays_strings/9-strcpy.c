#include "main.h"

/**
 * _strcpy - Copies the string pointed
 * @dest: array of end.
 * @src: array of origin.
 *
 * Return: strign to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, count = 0;

	for (i = 0; src[i] != '\0'; i++)
		count++;
	count--;
	i = 0;

	for (i = 0; i <= count; i++)
	{
		*(dest + i) = *(src + i);
	}
	dest[i] = '\0';
	return (dest);
}
