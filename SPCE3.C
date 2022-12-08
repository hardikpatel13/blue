#include<stdio.h>
#include<conio.h>
void main()
{
int i, j, m;
clrscr();
	for(i=5;i>=1;i--)
	{
	for(m=i;m>=1;m--)
	{
	printf(" ");
	}
	for(j=i;j<=5;j++)
	{
	printf("%d",j);
	}
	printf("\n");
	}
getch();
}