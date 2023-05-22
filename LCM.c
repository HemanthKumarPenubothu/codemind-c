#include<stdio.h>
int main()
{
	int a,b,c,max,i;
	scanf("%d%d",&a,&b);
	if(a>b)
	max=a;
	else
	max=b;
	if(b%a==0)
	{
		printf("%d",max);
	}
	else
	{
	for(i=max;;i++)
	{
		if(i%a==0 && i%b==0){
			printf("%d",i);
			break;
		}
	}
    }
}