#include<stdio.h>
int main()
{
    int a,b,d,c=0,tc=0,r;
    scanf("%d%d",&a,&b);
    int i,j;
    for(i=a;i<=b;i++)
    {
        d=i;
        c=0;
        tc=0;
        while(d!=0)
        {
            c++;
            r=d%10;
            if(r!=0 && i%r==0)
            {
                tc++;
            }
            d=d/10;
        }
        if(c==tc)
        {
            printf("%d ",i);
        }
    }
}