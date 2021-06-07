#include <stdio.h>

//Write a program to check if the year entered is leap year or not

int main()
{
    int year;
    printf("Enter Enter Year: ");
    scanf("%d", &year);

    if(year % 100 == 0)
    {
        if(year % 400 == 0)
        {
            printf("%d IS a leap year.", year);
        }
        else
        {
            printf("%d IS NOT a leap year.", year);
        }
    }
    else if(year % 4 == 0)
    {
        printf("%d IS a leap year.", year);
    }
    else
    {
        printf("%d IS NOT a leap year.", year);
    }
}
