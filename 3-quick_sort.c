#include <stdio.h>

// Function to swap two elements
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

// Partition the array using the last element as the pivot
int partition(int arr[], int low, int high)
{
    // Choosing the pivot
    int pivot = arr[high];

    // Index of smaller element and indicates
    // the right position of pivot found so far
    int i = (low - 1);

    int j;
    for (j = low; j <= high - 1; j++) {

        // If current element is smaller than the pivot
        if (arr[j] < pivot) {

            // Increment index of smaller element
            i++;
            
            // Swap arr[i] and arr[j]
            swap(&arr[i], &arr[j]);
            
            // Print the array after each swap
            printf("Swapped %d and %d: ", arr[i], arr[j]);
            for (int k = low; k <= high; k++) {
                printf("%d ", arr[k]);
            }
            printf("\n");
        }
    }
    
    
    swap(&arr[i + 1], &arr[high]);
    
   
    printf("Swapped %d and %d: ", arr[i + 1], arr[high]);
    for (int k = low; k <= high; k++) {
        printf("%d ", arr[k]);
    }
    printf("\n");
    
    return (i + 1);
}
