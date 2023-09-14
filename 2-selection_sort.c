#include "sort.h"
/**
 * selection_sort - Sorts an array of integers in ascending order
 *                  using the Selection sort algorithm.
 * @array: The array of integers to be sorted.
 * @size: The number of elements in the array.
 */
void selection_sort(int *array, size_t size)
{	
	int i, j, min;
	for(i = 0; i < (n - 1); i++)
{	
	min = i;
	for(j = i + 1; j < size; j++)
{
	if (array[min] > array[j])
		min = j;
}
if (min != i)
{
	tmp = array[i];
	array[j] = array[min];
	array[min] = tmp;
	print_array(array,size);
}
}
}
