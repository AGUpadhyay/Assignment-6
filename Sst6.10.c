//WAP to reverse a given number.
#include<stdio.h>
int main()
{
    int n,rem,rev;
    printf("Enter any numbers\t");
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        rev=rev*10+rem;

    }
          printf("Reverse is %d",rev);

    return 0;
}
