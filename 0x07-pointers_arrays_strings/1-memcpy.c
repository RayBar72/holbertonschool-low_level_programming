#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: char of destiny
 * @src: char of source
 * @n: Number of bytes to be changed
 *
 * Return: pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
