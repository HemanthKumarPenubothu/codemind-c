#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,s,pre,post;
    scanf("%d",&n);
    s=n;
    int s1=n;
    while(1)
    {
        c=a+b;
        if(c==s)
        {
            post=s;
            break;
        }
        else if(c<s)
        {
            a=b;
            b=c;
        }
        else
        {
            s++;
        }
    }
    int x=0,y=1,z;
    while(1)
    {
        z=x+y;
        if(y==s1)
        {
            pre=s1;
            break;
        }
        else if(z<s1)
        {
            x=y;
            y=z;
        }
        else
        {
            s1--;
        }
    }
    if(n-pre>post-n)
    printf("%d",post);
    else if(n-pre<post-n)
    printf("%d",pre);
    else if(n-pre==post-n)
    printf("%d %d",pre,post);
}