#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=n;j>i;j--)
		{
			printf("%d ",j);
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%d ",i);
		}
		for(j=i+1;j<=n;j++)
		{
			printf("%d ",j);
		}
		printf("
");
	}
	for(i=2;i<=n;i++)
	{
		for(j=n;j>=i+1;j--)
		{
			printf("%d ",j);
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("%d ",i);
		}
		for(j=i+1;j<=n;j++)
		{
			printf("%d ",j);
		}
		printf("
");
	}
}