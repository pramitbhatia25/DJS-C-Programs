#include <stdio.h>
#include <math.h>

//Write a program to find the sum of seven terms using a 
//for loop for the following series: 1/1!+2/2!+3/3!+………..+7/7!

int main()
{
    int a;
    printf("Enter a number: \n");
    scanf("%d", &a);

    int sum = 0;

    while(a>0)
    {
        sum = sum *10 + a%10;
        a = a/10;
    }

    printf("The reversed no is: %d", sum);
}