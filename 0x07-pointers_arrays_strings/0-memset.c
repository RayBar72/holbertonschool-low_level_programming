#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed to by s with
 * @s: the string
 * @b: character to be in the memory
 * @n: Number of bytes to be changed
 *
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{

	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
