#include<stdio.h>
int main()
{
    int i=2,n=0,sum=0;
    printf("enter n:");
    scanf("%d",&n);
    do
    {
       sum +=i;       
       i +=2;
    }
    while (i<=n);
    printf("sum of all even numbers between 1 to %d =%d\n",n,sum);

}    