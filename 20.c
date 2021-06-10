#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

//Write a program to accept a set of 10 numbers and print the number using pointer

int main()
{
    int *a = (int*) malloc(sizeof(int) * 10);
    for(int i = 0; i < 10; i++)
    {
        printf("Enter a Number: ");
        scanf("%d", &a[i]);
        printf("\n");
    }
    for(int i = 0; i < 10; i++)
    {
        printf("Number %d is : %d\n", i + 1, a[i]);
    }

    return 0;
}