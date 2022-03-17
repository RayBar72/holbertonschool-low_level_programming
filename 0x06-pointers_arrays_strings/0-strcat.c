#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string of destination
 * @src: string of source
 * Return: Pointer to resulting string destino.
 */

char *_strcat(char *dest, char *src)
{

	int ld = 0, ls = 0, i = 0;

	for (i = 0; dest[i] != 0; i++)
		ld++;
	i = 0;
	for (i = 0; src[i] != 0; i++)
		ls++;
	i = 0;
	while (src[i] != '\0')
	{
		dest[ld] = src[i];
		i++;
		ld++;
	}
	dest[ld] = 0;
	return (dest);
}
