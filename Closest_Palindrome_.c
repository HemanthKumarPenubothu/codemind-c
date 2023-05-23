#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n,i,j,pre,post,rev,rev1,r,r1,m,m1;
    scanf("%d",&n);
    int f=n;
    int f1=n;
    while(n>0)
    {
        rev=0;
        m=--n;
        int s=m;
        while(m>0)
        {
            r=m%10;
            rev=rev*10+r;
            m=m/10;
        }
        if(rev==s)
        {
            pre=rev;
            break;
        }
    }
    while(f>0)
    {
        rev1=0;
        m1=++f;
        int s1=m1;
        while(m1>0)
        {
            r1=m1%10;
            rev1=rev1*10+r1;
            m1=m1/10;
        }
        if(rev1==s1)
        {
            post=rev1;
            break;
        }
    }
    if(f1-pre>post-f1)
    printf("%d",post);
    else if(f1-pre<post-f1)
    printf("%d",pre);
    else if(f1-pre==post-f1)
    printf("%d %d",pre,post);
}