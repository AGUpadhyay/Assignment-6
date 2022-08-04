//WAP to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter a number\t");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        {
            printf("%d\t",i*i*i);    //we can skip this step.
            s=s+(i*i*i);
        }
          printf("Sum of cubes of first %d natural numbers is %d",n,s);
    return 0;
}
