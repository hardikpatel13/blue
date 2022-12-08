#include<stdio.h>
#include<conio.h>
void main()
{
int  no,sum=0,r=0,temp;
clrscr();
	printf("enter a number\n");
	scanf("%d",&no);
	temp=no;
	while(temp>0)
	{
	sum=sum+temp%10;
	printf("sum1=%d\n",sum);
	temp=temp/10;
	printf("temp1=%d\n\n",temp);
	}
	temp=sum;
	printf("temp=%d\n",temp);
	printf("sum=%d\n",sum);
	while(temp>0)
	{
	r=r*10+temp%10;
	printf("r=%d\n",r);
	temp=temp/10;
	printf("rev=%d\n\n",temp);
	}
	printf("\nrevers number is %d",r);
	if(r*sum==no)
	{
	printf("\n%d is a magic number\n", no);
	}
	else
	{
	printf("\n%d is not a magic number\n", no);
	}
getch();
}