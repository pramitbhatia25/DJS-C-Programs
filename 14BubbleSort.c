#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


int main()
{
    int n;
    long int a[n];
    printf("Enter No of Integers In Array: ");
    scanf("%ld", &n);
    for(int i = 0; i < n; i++)
    {
       printf("\nEnter element %d: ", i);
       scanf("%d", &a[i]);
    }
    
    for(int j = 0; j<n-1; j++)
    {
        for(int i = 0; i<n-1; i++)
        {
            if (a[i] > a[i+1]) 
            {
                int c = a[i];
                a[i] = a[i+1];
                a[i+1] = c;
            }
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

}