//WAP to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter a number\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            printf("%d\t",2*i-1);
            s=s+(2*i-1);
        }
          printf("Sum of first %d natural odd number is %d",n,s);
    return 0;
}
