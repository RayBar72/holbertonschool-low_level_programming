#include "main.h"

/**
 * _islower - prints 1 when lowercase, else 0
 * @x: integerr to be evaluated
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int x)
{

	if (x >= 97 && x <= 122)
		return (1);
	else
		return (0);
}
