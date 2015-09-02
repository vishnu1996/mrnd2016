#include<stdio.h>
#include<conio.h>
main()
{
	int a[20],x,r,e,i,j;
	clrscr();
	printf("ENTER NO.OF ELEMENTS IN ARRAY   :");
	scanf("%d",&e);
	printf("ENTER ELEMENTS IN ARRAY   :");
	for(i=1;i<=e;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("NO. OF ROTATIONS  ?");
	scanf("%d",&r);
	for(j=1;j<=r;j++)
	{
		x=a[e];
		for(i=e;i>1;i--)
		{

			a[i]=a[i-1];
		}
		a[i]=x;
	}
	for(i=1;i<=e;i++)
	{
		printf(" %d",a[i]);
	}
	getch();
}