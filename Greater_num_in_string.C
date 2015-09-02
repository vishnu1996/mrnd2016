#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	int i,j,l1=0,l2=0,a,b;
	char s1[20],s2[20];
	clrscr();
	printf("ENTER TWO STRINGS   :");
	scanf("%s%s",&s1,&s2);
	for(i=0; s1[i] !='\0' ;i++)
	{
		if(s1[i]!=48)
		{  break; }
	}
	a=i;
	for(i; s1[i] != '\0' ;i++)
	{
	     l1++;
	}
	for(j=0; s2[j] != '\0' ;j++)
	{
		if(s2[j]!=48)
		{  break; }
	}
	b=j;
	for(j; s2[j] != '\0' ;j++)
	{
	     l2++;
	}
	if(l1>l2)  	printf("greatest of 2 is   :%s",s1);
	if(l1<l2)  	printf("greatest of 2 is   :%s",s2);
	if(l1==l2)
	{
		for(a,b;s1[a]!='\0'&&s2[b]!='\0';a++,b++)
		{
		    if(s1[a]!=s2[b])  break;
		}
		if(s1[a]>s2[b])
		printf("greatest of 2 is   :%s",s1);
		if(s1[a]<s2[b])
		printf("greatest of 2 is   :%s",s2);
		if(s1[a]==s2[b])
		printf("both are same");
	}
	getch();
}
