#include "main.h"

/**
 * _isalpha - prints 1 when lowercase, else 0
 * @x: integer to be evaluated
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isalpha(int x)
{

	if ((x >= 97 && x <= 122) || (x >= 65 && x <= 97))
		return (1);
	else
		return (0);
}
