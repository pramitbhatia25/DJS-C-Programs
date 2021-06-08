#include<stdio.h>
#include<conio.h>

int recursive(int n, int r)
{
    if(r == 0 || r == n)  
        return 1;
    else
        return recursive(n - 1, r - 1) + recursive(n - 1, r);
    }

int main()
    {
        int n,r;
        printf("Enter n and r: ");
        scanf("%d%d", &n, &r);
        printf("The value of nCr is %d" , recursive(n, r) );
    }