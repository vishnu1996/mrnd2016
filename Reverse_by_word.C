#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i;
	char a[20];
	clrscr();
	printf("ENTER ANY STRING    :");
	gets(a);
	wordreverse(a);
	getch();
}
wordreverse(char a[20])
{
	int i,k=0,l=0,t,j;
	int x[10];
	for(i=0;a[i]!='\0';i++);
	l=i-1;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			x[k]=i;
			k++;
		}
	}
	for(j=1;j<l+2-x[k-1];j++)
	{
		t=a[l];
		for(i=l;i>x[k-2];i--)
		{

			a[i]=a[i-1];
		}
		a[i]=t;
	}
	printf("SENTENCE WITH LAST 2 WORDS REVERSED  :");
	for(i=0;a[i]!='\0';i++)
	{   printf("%c",a[i]);
	}


}
