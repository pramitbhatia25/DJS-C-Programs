#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

//Write a program to multiply two matrices using a function.

int** multiply(int ** matrix1, int ** matrix2, int dx, int n)
{

    int **multiplied = malloc(sizeof(int*) * dx); // allocating memory for no of rows

    for(int i = 0; i < dx; i++)
        multiplied[i] = malloc(sizeof(int*) * n); // allocating memory for each row to have columns

    for(int i = 0, sum = 0; i < dx; i++)
    {
        for(int j = 0; j < n; j++)
        {
            for(int k = 0; k < dx; k++)
            {
                sum += matrix1[i][k] * matrix2[k][j];
            }
            multiplied[i][j] = sum;
            sum = 0;
        }
    }


    return multiplied;
}

int main()
{
    int row1, column1;
    int row2, column2;
    printf("Enter Size Of Matrix 1: (a,b) == (rows, columns): ");
    scanf("%d, %d", &row1, &column1);
    printf("\nEnter Size Of Matrix 2: (a,b) == (rows, columns): ");
    scanf("%d, %d", &row2, &column2);
    
    if(column1 != row2)
    {
        printf("\nColumns of Matrix 1 should be equal to Rows of Matrix 2. Try Again?(Y/N): ");
        char ans,waste;
        scanf("%c", &waste);
        scanf("%c", &ans);
        if(ans == 'Y' || ans == 'y')
        {
            main();
        }
        else return 0;
    }
    else
    {
        int ** multiply1 = (int**) malloc(sizeof(int*) * row1);
        int ** multiply2 = (int**) malloc(sizeof(int*) * row2);

        for(int i = 0; i < row1; i++)
        {
            multiply1[i] = (int*) malloc(sizeof(int*) * column1);
        }
        for(int i = 0; i < row2; i++)
        {
            multiply2[i] = (int*) malloc(sizeof(int*) * column2);
        }
        
        for(int i = 0; i < row2; i++)
        {
            for(int j = 0; j < column2; j++)
            {
                printf("\nEnter element %d, %d for Matrix 2: ", i, j);
                scanf("%d", &multiply2[i][j]);
            }
        }

        for(int i = 0; i < row1; i++)
        {
            for(int j = 0; j < column1; j++)
            {
                printf("\nEnter element %d, %d for Matrix 1: ", i, j);
                scanf("%d", &multiply1[i][j]);
            }
        }
        
        
        int ** multiplied = multiply(multiply1, multiply2, row1, column2);
        
        for(int i = 0; i < row1; i++)
        {
            for(int j = 0; j < column2; j++)
            {
                printf("%d ", multiplied[i][j]);
            }
            printf("\n");
        }

    }
    
    
    return 0;
}
