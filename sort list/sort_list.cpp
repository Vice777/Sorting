// C program to sort the array in an
// ascending order using selection sort

#include<iostream>
#include<stdio.h>
 
using namespace std ;

void swap(int* xp, int* yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
// Function to perform Selection Sort
void selectionSortAsc(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
 
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
 
        // Swap the found minimum element
        // with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}
 
void selectionSortDesc(int arr[], int n)
{
    int i, j, max_idx;
 
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
 
        // Find the maximum element in unsorted array
        max_idx = i;
        for (j = i + 1; j < n; j++)
            if (arr[max_idx] <arr[j])
                max_idx = j;
 
        // Swap the found minimum element
        // with the first element
        swap(&arr[max_idx], &arr[i]);
    }
}
// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
 
// Driver code
int main()
{
    int n ;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    cout << "\nEnter elements for array (INT) :\n";
    for(int j =0; j<n ; j++)
    	cin >> arr[j];
    
    n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: \n");
    printArray(arr, n);
 
    selectionSortAsc(arr, n);
    printf("\nSorted array in Ascending order: \n");
    printArray(arr, n);
 
 	selectionSortDesc(arr, n);
    printf("\nSorted array in Descending order: \n");
    printArray(arr, n);
    return 0;
}
