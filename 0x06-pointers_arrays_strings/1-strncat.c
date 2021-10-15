#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string of destination
 * @src: string of source
 * @n: number of bytes
 * Return: Concatenates strings.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, ld = 0, ls = 0;

	for (i = 0; dest[i] != '\0'; i++)
		ld++;
	i = 0;
	for (i = 0; src[i] != '\0'; i++)
		ls++;
	i = 0;
	for (i = ld, j = 0; j < n && src[j] != '\0'; i++, j++)
		dest[i] = src[j];
	dest[i + 1] = 0;
	return (dest);
}
