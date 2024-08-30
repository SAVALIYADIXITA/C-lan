#include<stdio.h>
 void cube()
 {
    int a;

    printf("enter a:");
    scanf("%d",&a);

    printf("cube of %d=%d\n",a,a*a*a);
 }

int main()
{
    printf("START...\n");
    cube();
    printf("END...\n");

}