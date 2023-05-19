#include<stdio.h>
int count(int x)
{
    if(x<=0)
    {
        return 0;
    }
    else if (x==1)
    {
        return 1;
    }
    else if(x==2)
    {
        return 2;
    }
    else if(x==3)
    {
        return 4;
    }
    return count(x-1)+count(x-2)+count(x-3);
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",count(n));
}