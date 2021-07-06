#include <stdio.h>
#include <math.h>

//Write a program to find the sum of seven terms using a 
//for loop for the following series: 1/1!+2/2!+3/3!+………..+7/7!

long int factorial(long a)
{
    if(a == 1 || a == 0) return 1;
    else a = a * factorial( a-1 );
    return a;
}

int main()
{
    double ans = 0;
    for(long int i = 1; i < 8; i++)
    {
        ans += (double) i / (double) factorial(i);
    }
    printf("Answer: %lf", ans); 
}
