#include<stdio.h>
#include<conio.h>

//Write a program to initialize an automatic and static variable and increment it in the function.
// Call this function thrice and print the value of the variable every time after incrementing.

void check()
{
    auto int a = 0;
    static int b = 0;
    
    printf("a = %d, b = %d\n", a, b);
    
    a++;
    b++;

}

int main()
{
    int x;
    for(x = 0; x < 5; x++)
    {
        check();
    }
    /* Output is :
        a = 0, b = 0
        a = 0, b = 1
        a = 0, b = 2
        a = 0, b = 3
        a = 0, b = 4
    */
	return 0;
}