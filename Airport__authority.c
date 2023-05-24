#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,s1=0,s2=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int w,tw;
    scanf("%d",&w);
    for(i=0;i<n;i++)
    {
        if(a[i]<=w)
        {
            s1=s1+1;
        }
        else
        {
            s2=s2+1;
        }
    }
    tw=s1+2*s2;
    printf("%d",tw);
}