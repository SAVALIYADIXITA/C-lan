#include<stdio.h>

int main()
{
    int n,ld,fd,rev=0;

    printf("enter n:");
    scanf("%d",&n);
    fd=n;
    while (n!=0)
    {
        ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    if(fd==rev)
    {
        printf("%d is polindrome\n",fd);
    }
    else
    {
        printf("%d is not polindrome\n",fd);
    }   

}