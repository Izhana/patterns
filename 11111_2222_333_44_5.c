#include<stdio.h>
int main()
{
	int i=0,j=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i+1;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
