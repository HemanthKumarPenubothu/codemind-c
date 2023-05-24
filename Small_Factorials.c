#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,f,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        f=1;
        for(j=1;j<=a[i];j++)
        {
            f=f*j;
        }
        printf("%d
",f);
    }
}