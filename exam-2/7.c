   #include<stdio.h>

int main()
{
    int n;
    printf("enter the size of the array:");
    scanf("%d",&n);

    int a[n],b[n],c[n];
    printf("enter the first array:\n");
        for(int i=0;i<n;i++)
        {
            printf("a[%d]:",i);
            scanf("%d",&a[i]);
        }
    printf("enter the secaond array:\n");
        for(int i=0;i<n;i++)
        {
            printf("b[%d]:",i);
            scanf("%d",&b[i]);
        }
        for(int i=0;i<n;i++);
        {
           c[n]=a[i]+b[i];
        }
        {
             printf("array c is %d:\n",c[n]);
        }
       
}