Bubble Sort Implementation

This C program demonstrates the implementation of the Bubble Sort algorithm to sort an array of integers in ascending order.
Code Structure

The program comprises the following key components:
swap Function

This function takes two integer pointers as input and swaps the values they point to.

c

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

bubbleSort Function

The bubbleSort function performs the Bubble Sort algorithm on an array of integers. It iterates through the array, comparing adjacent elements, and swaps them if they are in the wrong order.

c

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
}

printArray Function

The printArray function prints the elements of an array.

c

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

main Function

The main function serves as the entry point. It initializes an array of integers, performs the Bubble Sort, and prints the sorted array.

c

int main()
{
    int arr[] = { 97, 16, 45, 63, 13, 22, 7, 58, 72 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, n);
    printf("Sorted array: \n");
    printArray(arr, n);
    return 0;
}

Usage

To use this program, simply compile and run it. The sorted array will be printed to the console.
