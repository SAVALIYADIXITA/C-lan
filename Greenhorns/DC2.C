#include<stdio.h>
#include<conio.h>
void main()
{
	float sallary,HRA,DA,TA,gross;
	clrscr();
	printf("enter the value of sallary:");
	scanf("%f",&sallary);
	printf("enter the value of HRA:");
	scanf("%f",&HRA);
	printf("enter the value of DA:");
	scanf("%f",&DA);
	printf("enter the value of TA:");
	scanf("%f",&TA);

	HRA=sallary*HRA/100;
	DA=sallary*DA/100;
	TA=sallary*TA/100;
	gross=sallary+HRA+DA+TA;
	printf("%.2f gross",gross);
	getch();
}