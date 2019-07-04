#include<stdio.h>
int main()
{
	int i,j,rows;
	printf("enter number of rows:");
	scanf("%d",&rows);
	for (i=5;i<=rows;i++)
	{
		for(j=5;j<=i;++j)
		{
			printf("%d",&rows);
			
		}
		printf("\n");
	}
	return 0;
}
