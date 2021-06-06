#include <stdio.h>
#include <math.h>

//Write a program to calculate roots of a quadratic equation 

int main()
{
    double a, b, c;
    printf("Enter the values a, b, c -- (ax^2 + bx + c) : \n")
    printf("a = ");
    scanf("%lf", &a);
    printf("\nb = ");
    scanf("%lf", &b);
    printf("\nc = ");
    scanf("%lf", &c);

    double ans1 = ( -b + pow((b*b) - 4*a*c, 0.5) ) / 2*a;
    double ans2 = ( -b + pow((b*b) - 4*a*c, 0.5) ) / 2*a;

    printf("The roots of the quadratic equation are ans1: %d and ans2: %d" , ans1, ans2);
    
}