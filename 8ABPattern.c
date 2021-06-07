#include <stdio.h>
#include <math.h>

//Write a program to find the sum of seven terms using a 
//for loop for the following series: 1/1!+2/2!+3/3!+………..+7/7!

int main()
{
    int a;
    printf("Enter number of lines: \n");
    scanf("%d", &a);
    printf("\nPattern: \n\n");

    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a - i; j++)
            printf(" ");
        int x = 0;
        for(int j = 0; j < i + 1; j++)
        {
            printf("%c", 65 + x);
            x++;
        }
        x = x - 2;
        for(int j = 0; j < i ; j++)
        {
            printf("%c", 65 + x);
            x--;
        }
        for(int j = 0; j < a; j++)
            printf(" ");
        printf("\n");
    }


}
