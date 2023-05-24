#include<stdio.h>
int main()
{
    int n,i,j,isum=0,jsum=0,d=0;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<n;i++)
    {
        isum=isum+a[i];
    }
    for(j=0;j<n;j++)
    {
        jsum=jsum+b[j];
    }
    d=(jsum-isum);
    if(jsum-isum<0)
    {
        printf("0");
    }
    else
    {
         printf("%d",d);
    }
 }