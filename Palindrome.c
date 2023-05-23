#include<stdio.h>
int main()
{
    int n,rev=0,r;
    scanf("%d",&n);
    int j=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n/=10;
    }
    if(rev==j)
    printf("True");
    else
    printf("False");
}