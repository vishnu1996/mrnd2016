#include<stdio.h>
#include<conio.h>
void main()
{
	int l=0,i;
	char str[20];
	clrscr();
	printf("enter a string   :");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}
	printf("length of the string is :  %d",l);
	getch();
}