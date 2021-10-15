#include "main.h"

/**
 *_strcmp - compares two strings
 * @s1: string one
 * @s2: string two
 * Return: value of comparation.
 */

int _strcmp(char *s1, char *s2)
{
	int i, x = 0, z, l1 = 0, l2 = 0;

	for (i = 0; s1[i] != '\0'; i++)
		l1++;
	for (i = 0; s2[i] != '\0'; i++)
		l2++;
	if (l1 >= l2)
		z = l1;
	else
		z = l2;
	for (i = 0; i < z; i++)
	{
		x = s1[i] - s2[i];
			if (x != 0)
				i = z;
	}
	return (x);
}
