#include <stdio.h>
#include <math.h>

//Check Armstrong Number

int checkArmstrong(int n)
{
    int sum = 0, og = n;
    while(n>0)
    {
        sum += (n%10)*(n%10)*(n%10);
        n = n/10;
    }
    
    if(sum == og) return 1;
    else return 0;
    //if true then 1 else 0
}

int main()
{
    int a;
    printf("Enter a 3 digit number: ");
    scanf("%d", &a);
    int l = 0, n = a;
    while(n>0)
    {
        l += 1;
        n = n/10;
    }
    if(l == 3)
    {
        if(checkArmstrong(a)) printf("YES\n");
        else printf("NO\n");
        
    }
    else
    {
        printf("Not 3 digit");
    }

}