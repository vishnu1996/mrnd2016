#include<stdio.h>
#include<conio.h>
void main()
{
	int a[10],n,i,x,e;
	clrscr();
	printf("entr no.of elements to be in array  :");
	scanf("%d",&e);
	printf("enter an array    :");
	for(i=0;i<e;i++)
	scanf("%d",&a[i]);
	printf("enter a number    :");
	scanf("%d",&n);
	for(i=0;i<e+1;i++)
	{
	 if(a[i]>=n)
	 {x=i;
	  break;
	 }
	}

	for(i=e+1;i>x;i--)
	{
	  a[i]=a[i-1];
	}
	a[i]=n;
	for(i=0;i<e+1;i++)
	{     printf("%d ",a[i]);
	}
	getch();
}