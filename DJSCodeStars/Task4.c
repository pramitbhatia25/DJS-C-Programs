#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool isPalindrome(int a)
{
    int n = a,r,sum=0,temp;    
    temp=n;    
    while(n>0)    
    {    
        r=n%10;    
        sum=(sum*10)+r;    
        n=n/10;    
    }    
    if(temp==sum)    
        return true;    
    else    
        return false;  
}

bool isPrime(int a)
{
    int flag = 0;
    int m = (int) a/2;
    for(int i = 2; i <= m; i++)
    {
        if(a%i == 0)
        {
            return false;
        }
    }
    if(flag == 0)
        return true;
}

int main()
{
    printf("Enter n: ");
    int n;
    scanf("%d", &n);
    printf("Answer: ");
    for(int i = 2; i <= n; i++)
    {
        if(isPalindrome(i) && isPrime(i))
        {
            printf("%d ", i);
        }
    }
}