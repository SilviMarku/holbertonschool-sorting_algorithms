#include "sort.h"

/**
 * swap - Swap two integers in an array
 * @a: First integer
 * @b: Second integer
 */
void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

/**
 * partition - Lomuto partition scheme for quicksort
 * @array: Array to be sorted
 * @low: Starting index
 * @high: Ending index
 * @size: Size of the array
 * Return: Index of the pivot
 */
int partition(int array[], int low, int high, size_t size) {
    int pivot, i, j; // Zhvendosni deklaratat e variablave këtu

    pivot = array[high];
    i = (low - 1);

    for (j = low; j < high; j++) { // Përdorni i dhe j pasi janë tashmë të deklaruar
        if (array[j] <= pivot) {
            i++;
            swap(&array[i], &array[j]);
            print_array(array, size); // Printoni array pas çdo ndryshimi
        }
    }
    swap(&array[i + 1], &array[high]);
    print_array(array, size); // Printoni array pas ndryshimit të fundit
    return (i + 1);
}

/**
 * lomuto_sort - Recursive function to implement Lomuto quicksort
 * @array: Array to be sorted
 * @low: Starting index
 * @high: Ending index
 * @size: Size of the array
 */
void lomuto_sort(int *array, int low, int high, size_t size) {
    int pi;

    if (low < high) {
        pi = partition(array, low, high, size);

        lomuto_sort(array, low, pi - 1, size);
        lomuto_sort(array, pi + 1, high, size);
    }
}

/**
 * quick_sort - Sorts an array of integers in ascending order using Quick sort
 * @array: Array to be sorted
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size) {
    if (array == NULL || size < 2)
        return;

    lomuto_sort(array, 0, size - 1, size);
}

