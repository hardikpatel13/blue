#include<stdio.h>
#include<conio.h>
void main()
{
char ch,a='a';
clrscr();
	scanf("%c",&ch);
	printf("alphanets from a-z are : \t");
	while(a<=ch)
	{
	printf("%c\t",a);
	a++;
	}
getch();
}
