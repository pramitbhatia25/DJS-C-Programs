#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

//Write a program to count blank spaces, digits, vowels and consonants in the string.

int main()
{
        char* string = (char*) malloc(sizeof(char)*100);
        printf("Enter a string: ");
        fgets(string, 10, stdin);
        int blank = 0;
        int vowels = 0;
        int consonants = 0;
        int digits = 0;
    
        for(int i = 0; i < strlen(string); i++)    
        {
            if (string[i] == ' ')
            {
                blank++;
            }
            else if(string[i] <= 57 && string[i] >= 48 )
            {
                digits++;
            }
            else if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u'
            || string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
    
    }
            printf("blanks : %d, digits: %d, vowels: %d, consonants: %d", blank, digits, vowels, consonants);

    return 0;
}
