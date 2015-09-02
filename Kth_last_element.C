#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char a[20];
	int l,i,n;
	clrscr();
	printf("ENTER THE STRING   :");
	gets(a);
	printf("enter the no. for element from last  :");
	scanf("%d",&n);
	l=strlen(a);
	if(n<=l)
	{
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i+n]=='\0')
			{
			printf("	%c",a[i]);
			break;
			}
		}
	}
	else
		printf("SORRY\n VALUE SHOULD NOT EXCEED %d",l);
	getch();
}
