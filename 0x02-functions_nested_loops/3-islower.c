#include "main.h"

/**
 * int _islower(int x) - prints 1 when lowercase, else 0
 *
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
