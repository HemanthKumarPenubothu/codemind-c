#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,co=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        if(c==n)
        {
            co++;
            break;
        }
        a=b;
        b=c;
    }
    if(co==0)
    {
        printf("False");
    }
    else
    {
        printf("True");
    }
}