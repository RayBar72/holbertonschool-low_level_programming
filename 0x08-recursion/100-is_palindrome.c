#include "main.h"
/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string
 *
 * Return: len of string
 */

int _strlen_recursion(char *s)
{
	if (*s)
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

/**
 * movimiento - looks for char s to s end
 * @s: string to be search
 * @len: lenght of the sting
 * Return: 1 if palindrom 0 if not
 */

int movimiento(char *s, int len)
{
	if (len <= 1)
		return (1);
	if (*s != *(s + len - 1))
		return (0);
	else
		return (movimiento(s + 1, len - 2));
}
/**
 * is_palindrome - looks for char s to s end
 * @s: string to be search
 * Return: 1 if palindrom 0 if not
 */

int is_palindrome(char *s)
{
	return (movimiento(s, _strlen_recursion(s)));
}
