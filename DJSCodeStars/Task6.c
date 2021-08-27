#include <stdio.h>

int main()
{
    printf("Enter No. of integers: ");
    int n;
    scanf("%d", &n);    
    printf("Enter prefix array: ");
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d, ", &arr[i]);
    }
    int i, j;
    printf("Enter i: ");
    scanf("%d", &i);
    printf("Enter j: ");
    scanf("%d", &j);
    if(i<j)
        printf("The sum between indices i and j of array A is: %d", arr[j] - arr[i-1]);
    else if(i>j)  
        printf("The sum between indices j and i of array A is: %d", arr[i] - arr[j-1]);
    return 0;
}
