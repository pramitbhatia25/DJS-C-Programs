#include <stdio.h>
#include <math.h>

//Calculate nCr using a function
int factorial(int n)
{
    if(n == 1 || n == 0) return 1;
    else n = n * factorial(n-1);
    return n;
}


int nCr(int n, int r)
{
    return (factorial(n)) / (factorial(n - r)*factorial(r));
}

int main()
{
    int a, b;
    printf("Enter integer n, r: ");
    scanf("%d %d", &a, &b);
    int ans = nCr(a, b);
    printf("nCr value is: %d", ans);
}