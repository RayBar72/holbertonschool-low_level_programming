#include "main.h"

/**
 * cap_string - function that chapitalizes
 * @s: string
 *
 * Return: Capitalized characters
 */

char *cap_string(char *s)
{
	int i = 0, j = 0;
	char c[] = {' ', '\n', ',', ';', '.', '!', '?',
		    '"', '(', ')', '\t', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
		for (j = 0; c[j] != '\0'; j++)
			if (s[i] == c[j])
				if (s[i + 1] >= 97 && s[i + 1] <= 122)
				{
				s[i + 1] = s[i + 1] - 32;
				}
	return (s);
}
