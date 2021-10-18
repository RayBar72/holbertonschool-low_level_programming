#include "main.h"

/**
 * _strchr -  pointer to the first occurrence of the character c in the string s
 * @s: string to be evaluated
 * @c: character to be searched
 * @n: Number of bytes to be changed
 *
 * Return: pointer to dest.
 */

char *_strchr(char *s, char c)
{

	int i = 0, len = 0, j = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (s[i] == c && j == 0)
		{
			s = s + i;
			j++;
			break;
		}
	}
	if (j == 0)
		return (0);
	else
		return (s);
}
