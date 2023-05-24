#include<stdio.h>
int main()
{
    int n,r,rev=0,r1,rev2=0;
    scanf("%d",&n);
    int t=n;
    int sq=n*n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    int c=rev*rev;
    while(c!=0)
    {
        r1=c%10;
        rev2=rev2*10+r1;
        c=c/10;
    }
    if(sq==rev2)
        printf("True");
    else 
        printf("False");
}