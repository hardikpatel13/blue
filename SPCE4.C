#include<stdio.h>
#include<conio.h>
void main()
{
int i, j, m;
clrscr();
	for(i=5;i>=1;i--)
	{
	for(m=i-1;m>=1;m--)
	{
	printf(" ");
	}
	for(j=5;j>=i;j--)
	{
	printf("%d",j);
	}
	printf("\n");
	}
getch();
}