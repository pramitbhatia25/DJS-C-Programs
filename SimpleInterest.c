#include <stdio.h>
//To calculate simple interest taking principal, rate of interest and number of years as input from user

int main()
{
    double principal, rateofinterest, noofyears;
    printf("Enter Principal: ");
    scanf("%lf", &principal);
    
    printf("\nEnter Rate Of Interest: ");
    scanf("%lf", &rateofinterest);
    
    printf("\nEnter No Of Years: ");
    scanf("%lf", &noofyears);

    double simpleinterest = (principal*rateofinterest*noofyears)/100;

    printf("The Simple Interest Is: %ld", simpleinterest);
    
}