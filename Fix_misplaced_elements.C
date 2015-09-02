#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],c,i,j,min,l;
	clrscr();
	printf("enter an array    :");
	for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	printf("after rearrangement    :");
	for(i=0;i<5;i++)
	{
		l=i;
		for(j=i;j<5;j++)
		{
			if(a[j]<a[i])
			{
				min=a[j];
				l=j;
			}
		}
		c=a[i];
		a[i]=a[l];
		a[l]=c;
	}
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	getch();
}