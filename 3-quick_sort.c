#include <stdio.h>
/**
 * partition - function that implements lomuto partition scheme
 * @array: array
 * @low: first el
 * @high: last el
 * @size: size of array
 * Return: index of smaller el
 */
int partition(int arr[], int low, int high)
{
   
    int pivot = arr[high];

  
    int i = (low - 1);

    int j;
    for (j = low; j <= high - 1; j++) {

        
        if (arr[j] < pivot) {

            
            i++;
            
          
            swap(&arr[i], &arr[j]);
            
            
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
