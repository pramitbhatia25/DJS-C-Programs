#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* reverse_string(char* input)
{
    char* output = (char*) malloc(sizeof(char)*100);
    int length = strlen(input);
    for(int i = length-1; i >= 0; i--)
    {
        output[length - i - 1] = input[i];
    }
    return output;
}


int main()
{
    printf("Enter A String: \n");
    char* given = (char*)malloc(sizeof(char)*100);
    fgets(given, 100, stdin);
    char* reversed_string = (char*) malloc(sizeof(char) * 100);
    reversed_string = reverse_string(given);
    printf("The Reversed String is: %s\n", reversed_string);
    return 0;
}