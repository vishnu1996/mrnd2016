#include<stdio.h>
#include<conio.h>
main()
{
	int i,a[5],n;
	clrscr();
	printf("ENTER VALUES INTO THE ARRAY   :");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("ENTER THE REQUIRED SUM  :");
	scanf("%d",&n);
	tuples(a,n);
	getch();
}
tuples(int a[5],int n)
{
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{

			if(a[i]+a[j]==n)
			printf("{ %d , %d }",a[i],a[j]);
		}
	}
}