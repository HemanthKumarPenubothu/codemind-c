#include<stdio.h>
int main()
{
    int n,rm,rev=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rm=n%10;
        rev=rev*10+rm;
        n=n/10;
    }
    printf("%d",rev);
}