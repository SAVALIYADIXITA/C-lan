#include "functions.c"

void main()
{
    
    float n=getInt();
    float a[n];

    for(float i=0;i<n;i++)
    {
        printf("enter a[%f]:",i);
        scanf("%f",&a[i]);
    }
    int ans=getArraysum(a[],n);
    printf("sum of Array %.2f", ans);
    
    float n=getInt();
    float a[n];

    for(float i=0;i<n;i++)
    {
        printf("enter a[%f]:",i);
        scanf("%f",&a[i]);
    }
    
    int avgans=getArray_avg(a[],n);
    printf("avg of Array %.2f ",avgans);
}
