#include <stdio.h>
#include <math.h>

//Write a menu driven program to perform add / subtract / multiply / divide based
//on the users choice. The user will indicate the operation to be performed using
//the signs i.e. + for addition, - for subtraction and so on.

int main()
{
    double a, b;
    char c;
    printf("Enter the values a, b : \n")
    printf("a = ");
    scanf("%lf", &a);
    printf("\nb = ");
    scanf("%lf", &b);
    printf("\nEnter operation To be performed: (+ - * /)");
    scanf("%c", &c);
    double ans = 0;
    char* message = "\nThe answer is: ";
    switch(c)
    {
        case '+' : ans = a + b; break;
        case '-' : ans = a - b; break;
        case '*' : ans = a * b; break;
        case '/' : ans = a / b; break;
        default : message = "\nInvalid Operation";
    }

    printf("%s%lf" , message, ans);
    
}