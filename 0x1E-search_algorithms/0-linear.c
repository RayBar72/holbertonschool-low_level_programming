#include "search_algos.h"

/**
 * linear_search - Function searches for a int in array by linear search
 * @array: pointer to the first element of the array
 * @size: size of array
 * @value: value to be searched
 * Return: the position of the searched value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!*array || !array)
		return (-1);
	if (!value)
		return (-1);
	if (!size)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	i--;
	return (-1);
}
