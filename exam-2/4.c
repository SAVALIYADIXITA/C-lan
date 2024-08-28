#include<stdio.h>
#define P printf
#define S scanf

int main()
{
    int n,a,b,ans,sum=0,sub=0,div=0,mul=0,mod=0;
    
    P("enter a:");
    S("%d",&a);
    P("enter b:");
    S("%d",&b);
    tmp:
    P("1) for +\n");
    P("2) for -\n");
    P("3) for *\n");
    P("4) for /\n");
    P("5) for %%\n");
    P("0) for exit\n");    
    P("\n enter your choice:");
    S("%d",&n);
    switch(n)
    {
        case 1:
            ans=a+b;
            P("Ans is : %d\n",ans);
            goto tmp;
        break;
        case 2:
            ans=a-b;
            P("%d\n",ans);
            goto tmp;
        break;
        case 3:
            ans=a*b;
            P("%d\n",ans);
            goto tmp;
        break;
        case 4:
            ans=a/b;
            P("%d\n",ans);
            goto tmp;
        break;
        case 5:
            ans=a%b;
            P("%.2f\n",(float)ans);
            goto tmp;
        break;
        case 0:
          break;   
        defaut:
            P("invaid value\n");
        break;    
    }
}