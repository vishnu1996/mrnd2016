#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i;
	char s[30];
	clrscr();
	printf("ENTER ANY STRING    :");
	gets(s);
	wordreverse(s);
	getch();
}
wordreverse(char s[30])
{
	int i,k=1,l=0,t,j;
	int x[10];
	char s2[30];
	for(i=0;s[i]!='\0';i++)
		l++;
	s2[0]=' ';
	x[0]=0;
	for(i=l-1,j=1;i>=0;i--,j++)
	{
		s2[j]=s[i];
		if(s[i]==' ')
		{
			x[k]=j;
			k++;
		}
	}
	s2[j]=' ';
	x[k]=j;
	s2[j+1]='\0';
	printf("SENTENCE WITH WORDS REVERSED  is   :");
	for(i=1;i<=k;i++)
	{
		for(j=x[i]-1;s2[j]!='\0'&&s2[j]!=' ';j--)
			printf("%c",s2[j]);
		printf(" ");
	}
}
