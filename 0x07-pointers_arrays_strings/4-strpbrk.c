#include "main.h"

/**
 * _strpbrk -  function locates the first occurrence in the string 
 * @s: string to be evaluated
 * @accept: character to be searched
 *
 *
 * Return: pointer to dest.
 */

char *_strpbrk(char *s, char *accept)
{

	int i = 0, j = 0, n = 0;


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
			if (s[i] == accept[j])
			{
				n++;
				s = s + i;
				break;
			}
		if (n >0)
			break;
	}
	return (s);
}
