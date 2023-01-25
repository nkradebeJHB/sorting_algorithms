#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - sorts array from min to max
 * @array: array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, index, swap = 0;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		for (index = 0; index < size; index++)
		{
			if (array[index] > array[index + 1] && array[index + 1])
			{
				swap = array[index];
				array[index] = array[index + 1];
				array[index + 1] = swap;
				print_array(array, size);
			}
		}
	}
}
