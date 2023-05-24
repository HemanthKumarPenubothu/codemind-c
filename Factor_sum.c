#include<stdio.h>
long long int vasu(long long int x)
{
    long long int fa,sum=0;
    for(long long int l=1;l<=x;l++)
    {
        if(x%l==0)
        {
            sum=sum+l;
        }
    }
    return sum;
}
int main()
{
    char s[1000];
    long long int n,i,k1,j,c=0,v,a[1000],b[1000],c1[1000],temp,l=0,k=0;//v=0;
    scanf("%s",s);
    j=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]!=',')
        {
            a[j++]=s[i]-48;
        }
    }
    n=j;
    for(i=0;i<n;i++)
    {
        v=a[i];
        long long int k1=vasu(a[i]);
        for(j=0;j<n;j++)
        {
            if(a[j]==k1)
            {
                c++;
                b[k++]=v;
                break;
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        for(i=0;i<k-1;i++)
        {
            if(b[i]>b[i+1])
            {
                temp=b[i];
                b[i]=b[i+1];
                b[i+1]=temp;
            }
        }
        for(i=0;i<k;i++)
        printf("%lld ",b[i]);
    }
}