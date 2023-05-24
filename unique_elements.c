#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],b[n],i,j,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
                b[j]=0;
            }
        }
        if(b[i]!=0)
        {
            b[i]=c;
        }
    }
    for(i=0;i<n;i++)
    {
        if(b[i]!=0)
        {
            printf("%d ",a[i]);
        }
    }
}