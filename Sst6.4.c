//WAP to calculate sum of squares of first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter a number\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            printf("%d\t",i*i);
            s=s+(i*i);
        }
          printf("Sum of square of first %d natural number is %d",n,s);
    return 0;
}
