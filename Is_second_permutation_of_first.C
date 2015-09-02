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
	permutation(s1,s2);
	getch();
}
permutation(char s1[20],char s2[20])
{
	int i,j=0,k=0,s3[20],l1=0,l2=0,found=0;
	for(i=0;s1[i]!='\0';i++)
		l1++;
	for(j=0;s2[j]!='\0';j++)
		l2++;
	if(l1==l2)
	{
		for(i=0;s1[i]!='\0';i++)
		{
			for(j=0;s2[j]!='\0';j++)
			{
			if(s1[i]==s2[j])
				found++;
			}
		}
		if(found==l1)
		printf("same");
		else
		printf("not same");
	}
	else
	printf("string length is not same");
}
