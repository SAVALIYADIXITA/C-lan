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

            sum+=a[i][j];
        }
    }
    n=r*c;
    printf("average of an array:%.2f",(float)sum/n);    
}