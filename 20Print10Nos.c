#include <stdio.h>
#include <stdlib.h>

//Write a program to accept a set of 10 nos and print the number using pointer

int main()
{
    int *a = malloc(sizeof(int) * 10);
    for(int i = 0; i < 10; i++)
    {
        printf("Enter No.: ");
        scanf("%d", &a[i]);
        printf("\n");
    }
    for(int i = 0; i < 10; i++)
    {
        printf("No %d is: %d\n", i, a[i]);
    }

    
    
    return 0;
}
