#include "main.h"

/**
 * leet - function that string into 1337
 * @s: string
 *
 * Return: String 1337
 */

char *leet(char *s)
{
	int i = 0, j = 0;
	char sus2[] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	char tuti[] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
			if (s[i] == tuti[j])
				s[i] = sus2[j];
		i++;
	}
	return (s);
}
