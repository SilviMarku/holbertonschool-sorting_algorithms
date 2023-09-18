#include "sort.h"
/**
 * partition - function that implements lomuto partition scheme
 * @array: array
 * @low: first el
 * @high: last el
 * @size: size of array
 * Return: index of smaller el
 */
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}

int partition(int array[], int low, int high) {
	
	int pivot = array[high];

	int i = (low - 1);

	for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
		i++;

		swap(&array[], &array[j]);
	}
	}
	swap(array[i + 1], &array[high]);

	return (i + 1);
}

void lomuto_sort(int *array, int low, int high, size_t size) 
{ 
	int pi;

	if (low < hight) 
	{
		pi = partition(array, low, high, size);

		lomuto_sort(array, low, pi - 1, size);
		lomuto_Sort(array, pi + 1, high, size);
	}
}
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	lomuto_sort(array, 0, size -1, size);
}

