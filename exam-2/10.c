#include<stdio.h>

int main()
{
    int n;
    for(int i=5;i>=1;i--)
    {
        for(int j=0;j<=5-i;j++)
        {
            printf("%d ",j%2);
        }
        printf("\n");
    }

}
