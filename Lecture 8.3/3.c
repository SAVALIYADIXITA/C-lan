#include<stdio.h>

int main()
{
    int r,c;

    printf("enter the array's row size:");
    scanf("%d",&r);
    printf("enter the array's column size:");
    scanf("%d",&c);

    int a[r][c],sum=0,n;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("enter a[%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j)
            {
                sum+=a[i][j];
            }           
        }
    }
    printf("the sum of diagonal elements of an array:%d ",sum);
}