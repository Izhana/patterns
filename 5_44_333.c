#include<stdio.h>
int main()
{
	int i=0,j=0;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=6-i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
