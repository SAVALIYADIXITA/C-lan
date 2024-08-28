#include<stdio.h>

int main()
{

    int n,sum;
    float avg;

    printf("enter size:");
    scanf("%d",&n);

    int a[n];
    
    for(int i=0;i<n;i++)
    {
        printf("array:[%d]",i);
        scanf("%f",&a[i]);

        sum +=a[0]+a[1];
        avg=sum/n;
    }
    {
        printf("average of an array:%.2f\n",avg);
    }

} 
    
    
