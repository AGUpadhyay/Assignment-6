//WAP to calculate LCM of two numbers.
#include<stdio.h>
int main()
{
    int i,n,m,k;
    printf("Enter two numbers\t");
    scanf("%d %d",&n,&m);
    for(i=2;i<=n*m;i++)
        {
            if(i%n == 0 && i%m==0)
            {
               k=1;
               break;
            }
        }
        if(k==1)
          printf("LCM is %d",i);
    return 0;
}
