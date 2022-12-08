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
	for(j=1;j<=i;j++)
	{
	printf("%d",i);
	}
	printf("\n");
	}
getch();
}