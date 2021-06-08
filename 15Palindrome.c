#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>


int main()
{
    char* string = (char*) malloc(sizeof(char)*100);
    printf("Enter a string: ");
    scanf("%s", string);

    int n1 = 0;
    int n2 = strlen(string) - 1;
  
    bool isPalindrome = true;
    
    while (n2 > n1)
    {
        if (string[n1] != string[n2])
        {
            isPalindrome = false;
            break;
        }
        n1++;
        n2--;
    }
    
    if(isPalindrome) printf("\nYes, %s is a palindrome.", string);
    else printf("\nNo, %s is not a palindrome.", string);

    return 0;
}
