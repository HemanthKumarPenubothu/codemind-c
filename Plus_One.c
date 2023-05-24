#include<stdio.h>
int main()
{
    int n,t=0;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        t=t*10+arr[i];
    }
    t+=1;
    int temp=t,d=0;
    while(temp)
    {
        temp/=10;
        d++;
    }
    int a[d];
    for(i=0;i<d;i++)
    {
        a[i]=t%10;
        t/=10;
    }
    for(i=d-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
}