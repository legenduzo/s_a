#include "sort.h"

/**
 * swap - swaps the position of 2 ints in place
 * @a: first int to swap
 * @b: second int to swap
 */

void swap(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
