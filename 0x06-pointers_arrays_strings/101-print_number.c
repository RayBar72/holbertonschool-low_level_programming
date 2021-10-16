#include "main.h"

/**
 * print_number - fuction that translates character to int
 * @n: number to be print
 * Return: value of the int
 */

void print_number(int n)
{
	int num, len = 0, exp = 1, i = 1, imp, abs;

	if (n < 0)
		num = n * (-1);
	else
		num = n;

	while (num >= 10)
	{
		num = num / 10;
		len++;
	}
	len++;

	while (i < len)
	{
		if (len <= 10)
			exp = 10 * exp;
		i++;
	}

	i = 0;
	if (n < 0)
	{
		abs = n * -1;
		_putchar(45);
	}
	else
		abs = n;
	while (i < len)
	{
		imp = abs / exp;
		_putchar(imp + '0');
		abs = abs % exp;
		exp = exp / 10;
		i++;
	}
}
