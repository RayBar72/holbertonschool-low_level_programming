#include "search_algos.h"
/**
 * interpolation_search - Function that searches using interpolation
 * @array: pointer to array of integers to be searched
 * @size: size of the array
 * @value: value to be searched
 * Return: the value or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high, pos;

	if (!array)
		return (-1);
	if (!value)
		return (-1);
	if (!size)
		return (-1);
	high = size - 1;
	while (array[low] != array[high])
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
				(value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%li] is out of range\n", pos);
			return (-1);
		}
		printf("Value checked array[%li] = [%i]\n", pos, array[pos]);
		if (array[pos] < value)
			low = pos + 1;
		else if (array[pos] > value)
			high = pos - 1;
		else
			return (pos);
		if (array[low] > value || array[high] < value)
			return (-1);
	}
	if (value == array[low])
		return (low);
	return (-1);
}
