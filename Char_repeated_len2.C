#include<stdio.h>
#include<conio.h>
main()
{
	char a[20],b[20];
	clrscr();
	printf("ENTER ANY STRING   :");
	gets(a);
	Ndiv2(a);
	getch();
}
Ndiv2(char a[20])
{
	int i,s[255],l,found=0;
	for(i=0;i<256;i++)
		s[i]=0;
	for(i=0;a[i]!='\0';i++)
		s[a[i]]++;
	l=i;
	printf("STRING CHARACTERS WHICH ARE REPEATED MORE THAN OR EQUAL TO N/2 TIMES IS/ARE   :  ");
	for(i=0;i<256&&a[i]!='\0';i++)
	{
		if(s[a[i]]>l/2)
		{
			printf("  %c",a[i]);
			s[a[i]]=0;
			found++;
		}
	}
	if(found==0)
		printf("SORRY!\n NO CHARACTER TO DISPLAY");
}
