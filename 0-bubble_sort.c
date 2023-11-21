#include "sort.h"

/**
 * bubble_sort - sorts an array using the bubble sort algorithm
 * @array: the array to sort
 * @size: the size of the array
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, j;

	for (i = 1; i < size; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				print_array(array, size);
			}
		}
	}
}
