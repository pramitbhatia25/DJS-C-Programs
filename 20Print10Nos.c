#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

//Write a program to multiply two matrices using a function.

void multiply(int m1, int m2, int **mat1, int n1, int n2, int **mat2)
{
    int x, i, j;
    int res[m1][n2];
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            res[i][j] = 0;
            for (x = 0; x < m2; x++)
            {
                *(*(res + i) + j) += *(*(mat1 + i) + x)
                                     * *(*(mat2 + x) + j);
            }
        }
    }
    
    for(int i = 0; i < m1; i++)
    {
        for(int j = 0; j < n2; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
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
        
        int res[row1][column2]; // To store result
        multiply(row1, column1, multiply1, row2, column2, multiply2);
        

    }
    
    
    return 0;
}