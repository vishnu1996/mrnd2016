#include<stdio.h>
#include<conio.h>
main()
{
	int a[5],i,b[2],*p;
	clrscr();
	printf("ENTER THE ARRAY ELEMENTS   :");
	for (i = 0; i < 5; i++)
		scanf("%d", &a[i]);
	p=maximum2(a,*p);
	printf("%d  %d",*p,*(p+1));
	getch();
}
maximum2(int a[5],int *p)
{
	int i=0,n=0,m=0;
	for (i = 0; i < 5; i++)
	{
		if ( a[i]>m)
		{
			m = a[i];
		}
		if (a[i]<m && a[i]>n)
		{
			n= a[i];
		}
	}
	*p=m;
	*(p+1)=n;
	return (p);
}
