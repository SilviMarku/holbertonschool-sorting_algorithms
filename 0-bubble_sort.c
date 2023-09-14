#include <stdio.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order using Bubble Sort.
 * @array: The array to be sorted.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
    size_t i, j;

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
        if (swapped == 0){ 

            break;

        }  
    }
}

