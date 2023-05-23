#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int d;
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        c=0;
       for(j=0;j<n;j++)
       {
           if(a[i]+d>=a[j])
           {
               c++;
           }
       }
       if(c==n)
       {
           printf("True ");
       }
       else
       {
           printf("False ");
       }
    }
}