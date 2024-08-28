#include<stdio.h>

int main()
{
    float roll_no=1,i=0,marks=0,total=0,percantage=0,maths=0,english=0,gujrati=0;
   
    printf("\n enter maths :");
    scanf("%f", & maths);
    // printf("enter roll_no")

    printf("\n enter english :");
    scanf("%f", & english);
    printf("\n enter gujrati :");
    scanf("%f", & gujrati);    

    

   

        if (percantage >=90 && percantage <=100 )
        {
            printf("grade A+")
            printf("%.2f f\n",total,percantage)
        }
        else if(percantage >=80 && percantage <= 90 )
        {
            printf("grade A")
            printf("%.2f f\n",total,percantage)
        }
        else if(percantage >=70 && percantage <= 80 )
        {
            printf("grade b+")
            printf("%.2f f\n",total,percantage)
        }
        else if(percantage >=60 && percantage <= 70 )
        {
            printf("grade B")
            printf("%.2f f\n",total,percantage)
        }
        else if(percantage >=50 && percantage <= 60 )
        {
            printf("grade C+")
            printf("%.2f f\n",total,percantage)
        }        
        else if(percantage >=40 && percantage <= 50 )
        {
            printf("grade C")
            printf("%.2f f\n",total,percantage)
        }
        else if(percantage >=35 && percantage <= 40 )
        {
            printf("grade PASS")
            printf("%.2f f\n",total,percantage)
        }
        else if(percantage <=35)
        {
            printf("grade FAIL")
            printf("%.2f f\n",total,percantage)
        }
        total=maths+english+gujrati;
        percantage=total*100/300;
        else if 
        {
            printf("%d ",total,percantage);
        }
}

