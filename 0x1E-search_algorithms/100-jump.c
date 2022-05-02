#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Function thar searches for value using jump search
 * @array: pointerr to the array to be searched
 * @size: size of the array
 * @value: value to be searche
 * Return: index of te value, other case -1
 */


int jump_search(int *array, size_t size, int value)
{
	size_t jump, ini = 0, fin, i = 0;

	if (!array)
		return (-1);
	if (!value)
		return (-1);
	if (!size)
		return (-1);

	fin = size - 1;
	jump = sqrt(size);

	while (i <= fin)
	{
		if (array[i] >= value)
		{
			printf("Value found between indexes [%li] and [%li]\n", ini, i);
			for (; ini <= i; ini++)
			{
				printf("Value checked array[%li] = [%i]\n", ini, array[ini]);
				if (array[ini] == value)
				{
					return (ini);
				}
			}
			return (-1);
		}
		else
		{
			printf("Value checked array[%li] = [%i]\n", i, array[i]);
			ini = i;
			i += jump;
		}
	}
	printf("Value found between indexes [%li] and [%li]\n", ini, i);
	printf("Value checked array[%li] = [%i]\n", ini, array[ini]);
	return (-1);
}
