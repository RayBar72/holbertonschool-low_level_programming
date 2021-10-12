#include "main.h"

/**
 * rev_string - Function that change the order of a string.
 * @s: string to be write inverse.
 *
 */

void rev_string(char *s)
{
	int i, d, count = 0;
	char temporal;

	for (i = 0; s[i] != '\0'; i++)
		count++;

	for (i = 0, d = count - 1; i <
		     (count / 2); i++, d--)
	{
		temporal = s[i];
		s[i] = s[d];
		s[d] = temporal;
	}
}
