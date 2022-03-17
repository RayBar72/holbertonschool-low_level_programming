#include "main.h"

/**
 * _abs - prints 1 when lowercase, else 0
 * @x: integer to be evaluated
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _abs(int x)
{

	if (x < 0)
		x = -x;
	return (x);

}
