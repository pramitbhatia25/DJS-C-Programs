#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Enter n: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = 0;
    }
    printf("Enter n-1 elements: ");
    for(int i = 0; i < n-1; i++)
    {
        int a;
        scanf("%d, ", &a );
        arr[a-1] = a;
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
            printf("The missing value is: %d\n", i+1 );
    }
    
}