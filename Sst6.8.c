//WAP to cheak whether a given number is a prime number or not.
#include<stdio.h>
int main()
{
    int i,n,k;
    printf("Enter a number\t");
    scanf("%d",&n);
    for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
                k=1;
                break;
            }
        }
        if(k==1)
            printf("%d is not a prime number",n);
        else
            printf("%d is a prime number",n);

    return 0;
}
