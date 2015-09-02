#include<stdio.h>
#include<conio.h>

char c[15],*no,*mn;
int dd[2],mm[2],yy[4],i,s,y,m,d,found=0;
main()
{
	char c[15];
	clrscr();
	printf("ENTER DATE IN THE FORMAT (DD-MM-YYYY) : ");
	gets(c);
	validcheck(c);
	if (found==0)
	printf("INVALID DATE");
	getch();
}

validcheck(char c[15])
{

	for(i=0;i<2;i++)
	{
		dd[i]=c[i]-48;
		mm[i]=c[i+3]-48;
	}
	for(i=0;i<4;i++)
		yy[i]=c[i+6]-48;

	y=yy[0]*1000+yy[1]*100+yy[2]*10+yy[3];
	m=mm[0]*10+mm[1];
	d=dd[0]*10+dd[1];

     if(d!=0&&m!=0&&y!=0)
     {
	if(y%4==0)
	{
		if(m<8)
		{
			if(m%2==0)
			{
				if(m==2)
				{
					if(d<=29)
					printdate();
				}
				else
				{
					if(d<=30)
					printdate();
				}
			}
			else
			{
				if(d<=31)
					printdate();
			}
		}
		else
		{
			if(m%2==0)
			{
				if(d<=31)
					printdate();
			}
			else
			{
				if(d<=30)
					printdate();
			}
		}
	}
	else
	{
		if(m<8)
		{
			if(m%2==0)
			{
				if(m==2)
				{
					if(d<=28)
					printdate();
				}
				else
				{
					if(d<=30)
					printdate();
				}
			}
			else
			{
				if(d<=31)
					printdate();
			}
		}
		else
		{
			if(m%2==0)
			{
				if(d<=31)
					printdate();
			}
			else
			{
				if(d<=30)
					printdate();
			}
		}
	}
     }
}
printdate()
{


	found=1;
	s=dd[0]*10+dd[1];
	printf("\n");
	if(s!=0)
	{
		if(s<=20)
		{
			no=number(s,*no);
			for(i=0;*(no+i)!='\0';i++)
				printf("%c",*(no+i));
		}
		else
		{
			no=number((dd[0]*10),*no);
			for(i=0;*(no+i)!='\0';i++)
				printf("%c",*(no+i));
			printf(" ");
			no=number(dd[1],*no);
			for(i=0;*(no+i)!='\0';i++)
				printf("%c",*(no+i));
		}
	}


	printf("-");
	s=mm[0]*10+mm[1];
	if(s!=0)
	{
		mn=month(s,*mn);
		for(i=0;*(mn+i)!='\0';i++)
			printf("%c",*(mn+i));
	}

	printf("-");
	if(yy[0]!=0)
	{
		no=number(yy[0],*no);
		for(i=0;*(no+i)!='\0';i++)
			printf("%c",*(no+i));
		printf(" THOUSAND ");
	}
	if(yy[1]!=0)
	{
		no=number(yy[1],*no);
		for(i=0;*(no+i)!='\0';i++)
			printf("%c",*(no+i));
		printf(" HUNDRED AND ");
	}

	if(yy[2]!=0)
	{
		no=number((yy[2]*10),*no);
		for(i=0;*(no+i)!='\0';i++)
			printf("%c",*(no+i));
		printf(" ");
	}

	if(yy[3]!=0)
	{
		no=number(yy[3],*no);
		for(i=0;*(no+i)!='\0';i++)
			printf("%c",*(no+i));
	}
}


int number(int dd[2],char *no)
{
	int s=dd;
		switch(s)
		{
			case 1:
				return "ONE";
			case 2:
				return "TWO";
			case 3:
				return "THREE";
			case 4:
				return "FOUR";
			case 5:
				return "FIVE";
			case 6:
				return "SIX";
			case 7:
				return "SEVEN";
			case 8:
				return "EIGHT";
			case 9:
				return "NINE";
			case 10:
				return "TEN";
			case 11:
				return "ELEVEN";
			case 12:
				return "TWELVE";
			case 13:
				return "THIRTEEN";
			case 14:
				return "FOURTEEN";
			case 15:
				return "FIFTEEN";
			case 16:
				return "SIXTEEN";
			case 17:
				return "SEVENTEEN";
			case 18:
				return "EIGHTEEN";
			case 19:
				return "NINETEEN";
			case 20:
				return "TWENTY";
			case 30:
				return "THIRTY";
			case 40:
				return "FORTY";
			case 50:
				return "FIFTY";
			case 60:
				return "SIXTY";
			case 70:
				return "SEVENTY";
			case 80:
				return "EIGHTY";
			case 90:
				return "NINETY";
			default:
				return "ZERO";
		}
}
int month(int s,char *no)
{
		switch(s)
		{
			case 1:
				return "JANUARY";
			case 2:
				return "FEBRUARY";
			case 3:
				return "MARCH";
			case 4:
				return "APRIL";
			case 5:
				return "MAY";
			case 6:
				return "JUNE";
			case 7:
				return "JULY";
			case 8:
				return "AUGUST";
			case 9:
				return "SEPTEMBER";
			case 10:
				return "OCTOBER";
			case 11:
				return "NOVEMBER";
			case 12:
				return "DECEMBER";
			default:
				return "ZERO";
		}
}