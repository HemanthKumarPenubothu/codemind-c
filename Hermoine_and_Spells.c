#include<stdio.h>
int main()
{
    int a,b,c,x,y,z;
    scanf("%d%d%d",&a,&b,&c);
    x=a+b;
    y=b+c;
    z=c+a;
    if(x>y&&x>z)
    {
        printf("%d",x);
    }
    else if(y>x&&y>z)
    {
        printf("%d",y);
    }
    else
    {
        printf("%d",z);
    }
}