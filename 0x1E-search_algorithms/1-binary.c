#include "search_algos.h"

/**
 * binary_search - Function thar searches for value using binary search
 * @array: pointerr to the array to be searched
 * @size: size of the array
 * @value: value to be searche
 * Return: index of te value, other case -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, inic = 0, fin, inter;

	if (array == NULL)
		return (-1);

	fin =  size - 1;

	if (size == 1)
	{
		printf("Searching in array: %d\n", array[0]);
		if (array[0] == value)
			return (0);
		else
			return (-1);
	}

	while (inic < fin)
	{
		inter = (fin + inic) / 2;
		printf("Searching in array: ");
		for (i = inic; i <= fin - 1; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[fin]);

		if (array[inter] == value)
			return (inter);
		else if (array[inter] > value)
		{
			fin = inter - 1;
		}
		else if (array[inter] < value)
		{
			inic = inter + 1;
		}
	}
	printf("Searching in array: %i\n", array[inic]);
	return (-1);
}
