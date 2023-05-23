#include<stdio.h>
int main()
{
    int n,r,sum=0,p=1,j;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        p=p*r;
        n=n/10;
    }
    j=p-sum;
    printf("%d",j);
}