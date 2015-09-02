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
	permutation(a,b);
	getch();
}
permutation(char a[20],char b[20])
{
	int i,s[255],found=0;
	for(i=0;i<256;i++)
		s[i]=0;
	for(i=0;a[i]!='\0';i++)
		s[a[i]]++;
	for(i=0;b[i]!='\0';i++)
		s[b[i]]--;
	for(i=0;i<256;i++)
	{
		if(s[i]!=0)
			found++;
	}
	if(found==0)
		printf("SECOND IS THE PERMUTATION OF FIRST");
	else
		printf("SECOND IS NOT THE PERMUTATION OF FIRST");
}