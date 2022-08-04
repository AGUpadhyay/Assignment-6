//WAP to calculate factorial of a number.
#include<stdio.h>
int main()
{
    int i,n,s=1;
    printf("Enter a number\t");
    scanf("%d",&n);
    if(n>=1)
    {
        for(i=1;i<=n;i++)
            {
                s=s*i;
            }
        printf("Factorial of %d is %d",n,s);
    }
    else
        printf("Enter a valid number");
    return 0;
}
