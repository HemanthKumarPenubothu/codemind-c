#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    long int a[n],s=0;
    for(i=0;i<n;i++)
    {
        scanf("%ld",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }
    printf("%ld",s);
}