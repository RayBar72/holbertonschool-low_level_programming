#include "main.h"

/**
 * _strspn - number of bytes in the initial segment of s
 * @s: the string
 * @accept: return bytes
 *
 * Return: Nothing.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
				n++;
		if (n - 1 != i)
			break;
	}
	return (n);
}
