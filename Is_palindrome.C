#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i;
	char str[20];
	clrscr();
	printf("ENTER ANY STRING    :");
	gets(str);
	palindrome(str);
	getch();
}
palindrome(char str[20])
{
	int i,found=0,l=0;
	for(i=0;str[i]!='\0';i++)
	{
	     l++;
	}
	l--;
	for(i=0;str[i]!='\0';i++,l--)
	{
		if(str[i]!=str[l])
			found++;
	}
	if(found==0)
		printf("THE GIVEN STRING IS A PALINDROME");
	else
		printf("THE GIVEN STRING IS NOT A PALINDROME");
}