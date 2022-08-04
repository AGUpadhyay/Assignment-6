//WAP to count digits in a given number.
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter a number\t");
    scanf("%d",&n);
    while(n!=0)
        {
            n=n/10;
            i++;
        }
          printf("Total digit is %d",i);
    return 0;
}
