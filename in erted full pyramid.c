#include<stdio.h>
int main()
{
	int i,j,flag;
	
	for (i=1;i<=6;i++)
	{   flag=1;
		for(j=1;j<=11;j++)
		{
			if(j>=i&&j<=12-i&&flag)
			{
				printf("*");
				flag=0;
			}else
			{
				printf(" ");
				flag=1;
			}
		}
		printf("\n");
	
	}
}