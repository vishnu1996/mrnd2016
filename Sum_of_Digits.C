#include<stdio.h>
#include<conio.h>
void main()
{
	int n,sum=0,r;
	clrscr();
	printf("ENTER THE NUMBER   :");
	scanf("%d",&n);
	while (n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("SUM OF DIGITS IS    :%d",sum);
	getch();
}
