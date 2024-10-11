#include <stdio.h>

#define LEN 4
// Increment the values in the array by 1
void increment(int arr[], int length){
    // recieves memory address of arr, not creating a new one
    // so any changes to the array in increment, can be shown in main
    for(int i = 0; i <= length; i++){
        arr[i]++;
    }
}

int main()
{
    // Length of the for loop takes us out of bounds, since these arrays are declared adjacently
    // it increment into the other array
    int arr1[LEN] = {1,2,3,4};
    int arr2[LEN] = {10, 20, 30, 40};

    increment(arr1, LEN);
    increment(arr2, LEN);

    printf("arr1 = ");
    for(int i = 0; i < LEN; i++)
    {
        printf(" %d ", arr1[i]);
    }

    printf("\narr2 = ");
    for(int i = 0; i < LEN; i++)
    {
        printf(" %d ", arr2[i]);
    }

}