#include<stdio.h>
#include<conio.h>
void main()
{
float unit,sc,ans,rs;

clrscr();
	scanf("%f",&unit);
	if(unit<=50)
	{
	ans=0.50*unit;
	}
	else if(unit>=51 && unit<=150)
	{
	ans=25+(unit-50)*0.75;
	}
	else if(unit>=151 && unit<=250)
	{
	ans=100+(unit-150)*1.20;
	}
	else
	{
	ans=220+(unit-250)*1.50;
	}
	sc=(ans*20)/100;
	rs=ans+sc;
	printf("%.2f",rs);
getch();
}