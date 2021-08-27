#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int find_second_smallest(int *arr)
{
    int smallest;
    int second_smallest;
    if(arr[0] < arr[1])
    {
        smallest = arr[0];
        second_smallest = arr[1];
    }
    else if(arr[1] < arr[0])
    {
        smallest = arr[1];
        second_smallest = arr[0];
    }
    int size = 5;
    for(int i = 2; i < size; i++)
    {
        if(arr[i] < smallest)
        {
            second_smallest = smallest;
            smallest = arr[i];
        }
        else if( arr[i] < second_smallest)
        {
            second_smallest = arr[i];
        }
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
    printf("The Second Smallest is: %d\n", find_second_smallest(arr));
    for(int i = 0; i < 5; i++)
    {
        printf("Int %d is: %d \n", i, arr[i]);
    }
}
