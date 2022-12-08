#include<stdio.h>
#include<conio.h>
void main()
{
char a;
clrscr();
	printf("=> enter any charcter :");
	scanf("%c",&a);
	if(a<'a'&& a>'A'||a<'z'&&a>'Z')
	{
	printf("enter %c is a alphabets :",a);
	}
	else if(a>='0'&& a<='9')
	{
	printf("%c is digits :",a);
	}
	else
	{
	printf("%c special charcter :",a);
	}
getch();
}