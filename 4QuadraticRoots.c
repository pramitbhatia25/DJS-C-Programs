#include <stdio.h>
#include <math.h>

//Write a program to calculate roots of a quadratic equation 

int main()
{
    double a, b, c;
    printf("Enter the values a, b, c -- (ax^2 + bx + c) : \n");
    printf("a = ");
    scanf("%lf", &a);
    printf("\nb = ");
    scanf("%lf", &b);
    printf("\nc = ");
    scanf("%lf", &c);
    
    double ans1, ans2;
    
    if(((b*b) - 4*a*c) < 0)
    {
        printf("Imaginary Roots");
        return;
    }
    if(a != 0)
    {
        ans1 = (double) ( -b + pow((b*b) - 4*a*c, 0.5) ) /(double) 2*a;
        ans2 = (double) ( -b - pow((b*b) - 4*a*c, 0.5) ) /(double) 2*a;
    }
    else if ( b != 0)
    {
        ans1 = -c / b;
        ans2 = -c / b;
    }
    else
    {
        ans1 = c;
        ans2 = c;
    }

    printf("The roots of the quadratic equation are ans1: %.2lf and ans2: %.2lf" , ans1, ans2);
    
}