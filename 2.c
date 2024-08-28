#include<stdio.h>

int main()
{
    int n;

    printf("enter size:");
    scanf("%d",&n);
    
    int a[n],max=0;
   
    for(int i=0;i<n;i++)
    {
        printf("enter a[%d]:",i);
        scanf("%d",&a[i]);

       
    }
    printf("array: ");
    for(int i=0;i<n;i++)
    {
        if(a[i]>n)
        {
            max=a[i];
        }
        printf("%d ",a[i]);
    }  
    printf("\n maxinum array:%d",max);

}