#include<stdio.h>
int main()
{
    int i,j,s;

    for(i=5;i>=1;i--)
     { 
        for(s=i;s>=2;s--)
        {
            printf("  ");
        }
        for(j=5;j<=i;j--)
        {
            printf("%d ",j);
        }
        {
            printf("\n");
        }
     }
}
