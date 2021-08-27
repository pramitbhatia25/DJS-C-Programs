#include <stdio.h>

int main()
{
    printf("Enter the no of elements: ");
    int n;
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: (1, 2, 3, 4, 5) ");
    
    for(int i = 0; i < n; i++)
    {
        scanf("%d, ", &arr[i] );
    }
    
    int sum_array[n];
    int sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        sum_array[i] = sum;
    }
    printf("Prefix-Sum Array Is: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", sum_array[i]);
    }

    return 0;
}
