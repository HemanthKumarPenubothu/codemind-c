#include<stdio.h>
int main()
{
    int n,pre,post,i;
    scanf("%d",&n);
    int m=n;
    while(m>0)
    {
        for(i=2;i<=m;i++)
        {
            if(m%i==0)
            {
                break;
            }
        }
        if(m==i)
        {
            pre=m;
            break;
        }
        else
        m--;
    }
    int s=n;
    while(s>0)
    {
        for(i=2;i<=s;i++)
        {
            if(s%i==0)
            {
                post=s;
                break;
            }
        }
        if(s==i)
        {
            break;
        }
        else
        {
            s++;
        }
    }
    if(n-pre<post-n)
    printf("%d",n-pre);
    else
    printf("%d",post-n);
}