#include "main.h"

/**
 * _atoi - fuction that translates character to int
 * @s: string to be translated
 * Return: value of the int
 */

int _atoi(char *s)
{
	int i, j, emp = 0, signo = 0, exp = 1, numero = 0, len = 0, count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	count--;
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
	i = 0;
	while (i < len)
	{
		j = emp + len - 1;
		numero = (exp * ((s[j - i]) - 48)) + numero;
		if (numero < 2147483647)
			exp = exp * 10;
		i++;
	}
	if (signo % 2 != 0)
		numero = numero * (-1);
	if (count == 0)
		numero = 0;
	return (numero);
}
