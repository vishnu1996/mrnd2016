#include<stdio.h>
#include<conio.h>
main()
{
	int n1,n2,n;
	clrscr();
	printf("ENTER FIRST 2 VALUES FOR THE SERIES  :");
	scanf("%d%d",&n1,&n2);
	printf("ENTER THE VALUE FOR 'N'   :");
	scanf("%d",&n);
	printf("Nth FIBANACCI NUMBER IS   :%d",fibanacci(n1,n2,n));
	getch();
}
int fibanacci(int n1,int n2,int n)
{
	int i,t;
	for(i=0;i<n;i++)
	{
		t=n1+n2;
		n1=n2;
		n2=t;
	}
	return t;
}