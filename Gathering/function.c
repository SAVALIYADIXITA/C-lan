#include<stdio.h>




int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    return a/b;
}
int mod(int a,int b)
{
    return a%b;
}

void cal(a,b)
{
    int n,ans;
    tmp:
   
    printf("1. for +\n");
    printf("2. for -\n");
    printf("3. for *\n");
    printf("4. for /\n");
    printf("5. for %\n");
    printf("0. for exit\n");
    printf("\n enter your choice :");
    scanf("%d",&n);


    switch (n)
    {
    
    case 1:
        ans=sum(a,b);
        printf("%d\n",ans);
        goto tmp;
    case 2:
        ans=sub(a,b);
        printf("%d\n",ans);
        goto tmp;
    case 3:
        ans=mul(a,b);
        printf("%d\n",ans);
        goto tmp;
    case 4:
        ans=div(a,b);
        printf("%d\n",ans);
        goto tmp;
    case 5:
        ans=mod(a,b);
        printf("%.2f\n",(float)ans);
        goto tmp;
    case 0:
        break;
    
    default:
        printf("\tinvaild input\n");
        break;
    }
}
