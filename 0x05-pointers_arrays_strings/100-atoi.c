#include "main.h"

/**
 * _atoi - fuction that translates character to int
 * @s: string to be translated
 * Return: value of the int
 */

int _atoi(char *s)
{
	int i, j, emp = 0, signo = 0, exp = 1, num = 0, len = 0, c1 = 0;

	for (i = 0; s[i] != '\0'; i++)
		c1++;
	c1--;
	i = 0;
	for (i = 0; s[i] < 48 || s[i] > 57; i++)
		emp++;
	for (j = emp; !(s[j] < 48 || s[j] > 57); j++)
		len++;
	i = 0;
	while (i < emp)
	{
		if (s[i] == 45)
			signo++;
		i++;
	}
	if (signo % 2 != 0)
		exp = exp * (-1);
	i = 0;
	while (i < len)
	{
		j = emp + len - 1;
		num = (exp * ((s[j - i]) - 48)) + num;
		if (num < 2147483647 && num > -2147483648)
			exp = exp * 10;
		i++;
	}
	if (c1 < 0 || (len == 0 && emp > 0))
		num = 0;
	return (num);
}
