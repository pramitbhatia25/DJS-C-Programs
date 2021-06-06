#include <stdio.h>

//Write a program to find greatest of three numbers using conditional operator.

int main()
{
    int a, b, c;
    printf("Enter number 1: ");
    scanf("%d", &a);
    
    printf("\nEnter number 2: ");
    scanf("%d", &b);
    
    printf("\nEnter number 3: ");
    scanf("%d", &c);

    if(a > b && a > c)
    {
        printf("The Largest Number Is: %d", a);
    }
    else if(b > c && b > a)
    {
        printf("The Largest Number Is: %d", b);
    }
    else
    {
        printf("The Largest Number Is: %d", c);
    }
}