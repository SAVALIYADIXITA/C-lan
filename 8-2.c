#include<stdio.h>

int main()
{
    int n;
    float avg=0,sum=0;

    printf("enter size:");
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++)
    {
        printf("enter :a[%d]",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
        avg=sum/n;
    }
    {
        printf("avg of an array:%.2f\n ",avg);
    }
       
        
    
}
