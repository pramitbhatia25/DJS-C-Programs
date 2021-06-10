#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

//Write a program to swap two numbers using a function. 
//Pass the values to be swapped to this function using call-by-value method 
//and call-by-reference method.


//Actual parameter is the parameter passed to the function
//Formal parameter is the parameter received by the function
//Call by reference changes the value of actual parameter using references(pointers)
//Call by value does not change the value of the actual parameter

void swapbyref( int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapbyval( int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}


int main()
{
    int a, b;
    printf("Enter 2 nos. -- a, b: ");
    scanf("%d, %d", &a, &b);
    int x = a, y = b;
    printf("\nBefore SwapByRef: a = %d, b = %d", a, b);
    swapbyref(&a, &b);
    printf("\nAfter SwapByRef: a = %d, b = %d", a, b);
    printf("\nBefore SwapByValue: a = %d, b = %d", x, y);
    swapbyval(x, y);
    printf("\nAfter SwapByValue: a = %d, b = %d", x, y);
    
    return 0;
}