#include <stdio.h>
#include "sort.h"
/*
  * @swap: swap
  * bubble_sort - Sorts an array of integers in ascending order using Bubble Sort.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

void bubble_sort(int *array, size_t size)
{	
	size_t i, j;
	for (i = 0; i < size - 1; i++)
	{
		
		for (j = 0; j < size - i - 1; j++)
	{
		if(array[j] > array[j + 1])
		{
			swap(&array[j], &array[j + 1]);
			print_array(array, size);
		}	
	}
	}
}
