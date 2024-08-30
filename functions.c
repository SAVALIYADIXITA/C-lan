#include<stdio.h>

int getsum(int a,int b)
{
    return a+b;    
}
int getArraysum(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}
int getInt()
{
    int n;
    printf("enter any number:");
    scanf("%d",&n);
    return n;
}
float getArray_avg(float a[],float n)
{
    float avg =0;
    float sum=0;    
    for(float i=0;i<n;i++)
    { 
        printf("[%d]=",i);
        scanf("%f",&a[i]);
        sum+=a[i];
        avg=sum/n;
    }
    
    return avg;   
}
