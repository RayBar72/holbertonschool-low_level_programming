#include "main.h"
/**
 *_strncpy - copies a string
 * @dest: string of destination
 * @src: string of source
 * @n: number of bytes
 * Return: Concatenates strings.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
