#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20];
	clrscr();
	printf("ENTER ANY STRING1    :");
	gets(s1);
	printf("ENTER ANY STRING2    :");
	gets(s2);
	printmid(s1,s2);
	getch();
}
printmid(char s1[20],char s2[20])
{
	int i,j=0,k=0,s3[20],l1=0,l2=0,found=0;
	for(i=0;s1[i]!='\0';i++)
		l1++;
	for(j=0;s2[j]!='\0';j++)
		l2++;
	for(i=0;s1[i]!='\0';i++)
	{
		printf("%c",s1[i]);
		if(i==(l1/2)-1)
		{
			for(j=0;s2[j]!='\0';j++)
				printf("%c",s2[j]);
		}
	}
}
