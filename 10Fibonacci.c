#include <stdio.h>

//Print first n elements of Fibonacci series

int n1 = 0; int n2 = 1;

void fibonacci(int n)
{
}


int main()
{
    int n;
    scanf("%d", &n);
    int n1 = 0; int n2 = 1;
    printf("1 ");
    for(int i = 0; i < n-1; i++)
    {
        int temp = n2;
        n2 = n1 + n2;
        n1 = temp;
        printf("%d ", n2);
    }
    return 0;
}
