#include<stdio.h>
int main()
{
    int n,r,i,c,co,count,p;
    scanf("%d",&n);
    c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        count=0;
        p=0;
        while(n>0)
        {
            r=n%10;
            n/=10;
            co=0;
            p++;
            for(i=1;i<=r;i++)
            {
                if(r%i==0)
                {
                    co++;
                }
            }
            if(co==2)
            {
                count++;
            }
        }
        if(count==p)
        {
            printf("Mega Prime");
        }
        else
        {
            printf("Not Mega Prime");
        }
    }
    else
    {
        printf("Not Mega Prime");
    }
}