## C - Sorting Algorithms & Big O Notations

This project involves implementing four sorting algorithms: 
Bubble Sort, 
Insertion Sort, 
Selection Sort, and 
Quick Sort. 
These algorithms will be used to sort arrays of integers, and we are required to provide Big O notations for the time complexity of these sorting algorithms in various cases.

### Bubble Sort for Arrays

### Description
The bubble_sort function sorts an array of integers in ascending order using the Bubble Sort algorithm. It takes an array of integers and its size as input and sorts the array in-place.

Output
The function is expected to print the array after each time two elements are swapped during the sorting process.

Big O Notations
Please write the Big O notations for the time complexity of the Bubble Sort algorithm in the following cases:

### Insertion Sort for Doubly Linked Lists

### Description
The insertion_sort_list function sorts a doubly linked list of integers in ascending order using the Insertion Sort algorithm. Instead of modifying the integer values within the nodes, you need to swap the nodes themselves to achieve the sorting.

Output
The function is expected to print the linked list after each time two elements (nodes) are swapped during the sorting proces.

### Selection Sort for Arrays

### Description
The selection_sort function sorts an array of integers in ascending order using the Selection Sort algorithm. It takes an array of integers and its size as input and sorts the array in-place.

Output
The function is expected to print the array after each time two elements are swapped during the sorting process.

Big O Notations

### Quick Sort for Arrays

### Description
The quick_sort function sorts an array of integers in ascending order using the Quick Sort algorithm with the Lomuto partition scheme. It takes an array of integers and its size as input and sorts the array in-place. The pivot element should always be the last element of the partition being sorted.

Output
The function is expected to print the array after each time two elements are swapped during the sorting process.

Big O Notations


Example
Here's an example of what the program might look like when sorting an array and a doubly linked list:

#include <stdio.h>
#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL || size == 0)
		return;
	for (i = 0; i < size - 1; i++)
	{
	int swapped = 0;

	for (j = 0; j < size - i - 1; j++)
	{
		if (array[j] > array[j + 1])
		{
			int tmp = array[j];

			array[j] = array[j + 1];
			array[j + 1] = tmp;
			swapped = 1;
			print_array(array, size);
		}
	}
	if (swapped == 0)
	{
		break;
	}
	}
}


