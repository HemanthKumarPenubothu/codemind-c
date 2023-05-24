#include<stdio.h>
int main()
{
    int n,l,sum=0,pro=1;
    scanf("%d",&n);
    while(n!=0)
    {
        l=n%10;
        sum=sum+l;
        pro=pro*l;
        n=n/10;
    }
    printf("%u",pro-sum);
}