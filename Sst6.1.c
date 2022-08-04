//WAP to calculate sum of first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter a number\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s+i;
    }
    printf("Sum of first %d natural number is %d",n,s);
    return 0;
}
