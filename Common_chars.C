#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20];
	clrscr();
	printf("ENTER ANY STRING1    :");
	gets(s1);
	printf("ENTER ANY STRING2    :");
	gets(s2);
	commoncharacter(s1,s2);
	getch();
}
commoncharacter(char s1[20],char s2[20])
{
	int i,j=0,k=0,s3[20],l,found;
	for(i=0;s1[i]!='\0';i++)
	{
		for(j=0;s2[j]!='\0';j++)
		{
			if (s1[i]==s2[j])
			{       found=0;
				for(l=0;l<=k;l++)
				{	if(s3[l]==s1[i])
					 {	found++;   }
				}
				if (found==0)
				{	s3[k]=s1[i];
					k++;
				}
			}
		}
	}
	s3[k]='\0';
	printf("THE COMMON CHARACTERS IN BOTH THE STRINGS ARE  :");
	for(k=0;s3[k]!='\0';k++)
	{  printf("  %c",s3[k]);  }

}
