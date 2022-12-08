#include<stdio.h>
#include<conio.h>
void main()
{
int i, j, m;
clrscr();
	for(i=1;i<=5;i++)
	{
	for(m=4;m>=i;m--)
	{
	printf(" ");
	}
	for(j=1;j<=i;j++)
	{
	printf("%d",j);
	}
	printf("\n");
	}
getch();
}