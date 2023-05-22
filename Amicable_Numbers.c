#include<stdio.h>
int main()
{
    int i,a,b,sum=0,sum1=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++)
    {
        if(a%i==0)
        sum=sum+i;
    }
    for(i=1;i<b;i++)
    {
        if(b%i==0)
        sum1=sum1+i;
    }
    if(b==sum && a==sum1)
    {
        printf("Amicable");
    }
    else
    printf("Not Amicable");
}