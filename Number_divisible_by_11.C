#include<stdio.h>
#include<conio.h>
main()
{
	int n, r;
	printf("ENTER ANY NUMBER    :");
	scanf("%d", &n);
	r = divisible(n);

	if (r == 1)
		printf("\nTHE GIVEN NUMBER IS DIVISIBLE BY 11");
	else
		printf("\nTHE GIVEN NUMBER IS NOT DIVISIBLE BY 11");
	getch();
}
int divisible(int n)
{
	int a[10], l = 0, se = 0, so = 0, i;
	for (i = 0; n > 0; i++)
	{
		a[i] = n % 10;
		l++;
		n = n / 10;
	}
	for (i = 0; i < l; i++)
	{
		if (i % 2 == 0)
			se = se + a[i];
		else
			so = so + a[i];
	}
	if ((se - so) >= 0)
	{
		if (se == so)
			return 1;
		else
			return divisible(se - so);
	}
	else
		return 0;
}