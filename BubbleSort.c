#include <stdio.h>

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
    
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int count;
    int i, j;
    int x = 0;
   
    
    for (i = 0; i < n - 1; i++){
    count = 0;
    x++;
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j + 1]);
                count++;
                
            }
    
    printf("pass #%i: %d\n",x, count);
    }
}

/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int arr[] = { 97, 16, 45, 63, 13, 22, 7, 58, 72 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}