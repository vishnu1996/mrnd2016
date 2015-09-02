#include<stdio.h>
#include<conio.h>
main()
{
	char a[20],b[20];
	clrscr();
	printf("ENTER ANY STRING   :");
	gets(a);
	printf("ENTER ANY STRING   :");
	gets(b);
	similarcharacter(a,b);
	getch();
}
similarcharacter(char a[20],char b[20])
{
	int i,s[255];
	for(i=0;i<256;i++)
		s[i]=0;
	for(i=0;a[i]!='\0';i++)
		s[a[i]]=1;
	for(i=0;b[i]!='\0';i++)
	{
		if(s[b[i]]==1)
		{
			printf("%c",b[i]);
			s[b[i]]=0;
		}
	}
	getch();
}