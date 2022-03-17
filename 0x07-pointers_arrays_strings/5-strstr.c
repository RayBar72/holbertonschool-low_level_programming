#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring
 * @haystack: string to be evaluated
 * @needle: character to be searched
 *
 *
 * Return: pointer to dest.
 */

char *_strstr(char *haystack, char *needle)
{

	int i = 0, j = 0, len = 0;


	for (i = 0; needle[i] != '\0'; i++)
		len++;
	if (len == 0)
		return (haystack);

	for (i = 0; haystack[i] != '\0'; )
	{
		while (needle[j] != '\0' && haystack[i] == needle[0])
		{
			if (haystack[i + j] == needle[j])
				j++;

			else
				break;
			}

		if (needle[j] != '\0')
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}
