#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find_second_smallest(int *arr)
{
    int smallest = arr[0], second_smallest = arr[1];
    int size = sizeof arr / sizeof arr[0];
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < smallest)
            smallest = arr[i];
    }
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < second_smallest && arr[i] > smallest )
            second_smallest = arr[i];
    }
    return second_smallest;
}

int main()
{
    printf("Enter integers for arr: \n");
    int* arr = (int*)(malloc(sizeof(int)* 100));
    for(int i = 0; i < 5; i++)
    {
        printf("Enter int: ");
        scanf("%d", &arr[i]);
    }
    printf("The Second Smallest is: %d", find_second_smallest(arr));
    for(int i = 0; i < 5; i++)
    {
        printf("Int %d is: %d \n", i, arr[i]);
    }
}
