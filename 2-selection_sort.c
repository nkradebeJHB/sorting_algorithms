#include "sort.h"
/**
 * selection_sort - function that sorts an array of
 * integers in ascending order
 *
 * @array: array to sort
 * @size: size of array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int swap, tmp, check = 0;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size; i++)
	{
		tmp = i;
		check = 0;
		for (j = i + 1; j < size; j++)
		{
			if (array[tmp] > array[j])
			{
				tmp = j;
				check += 1;
			}
		}
		swap = array[i];
		array[i] = array[tmp];
		array[tmp] = swap;
		if (check != 0)
			print_array(array, size);
	}
}
