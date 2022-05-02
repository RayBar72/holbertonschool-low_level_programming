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
	size_t i = 0, inic = 0, fin = size - 1, inter = (size - 1) / 2;

	if (!array)
		return (-1);
	if (!value)
		return (-1);
	if (!size)
		return (-1);

	while (inic < fin)
	{
		printf("Searching in array: ");
		for (i = inic; i <= fin - 1; i++)
			printf("%i, ", array[i]);
		printf("%i\n", array[fin]);

		if (array[inter] == value)
			return (inter);
		else if (array[inter] > value)
		{
			fin = inter - 1;
			inter = (fin + inic) / 2;
		}
		else if (array[inter] < value)
		{
			inic = inter + 1;
			inter = (fin + inic) / 2;
		}
	}
	printf("Searching in array: %i\n", array[inic]);
	return (-1);
}