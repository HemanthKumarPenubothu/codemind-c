#include <stdio.h>
int main ( )
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j;
        scanf ("%d",&n);
        int a[100],t,c=0,s;
        for(i=0;i<n;i++)
        {
           scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                 t=a[i];
                a[i]=a[j];
                a[j]=t;
                c++;   
                }
            }
        }
        if(c==0)
        {
            printf("0
") ;
        }
        else
        {
            s=a[n-1]-a[0];
            printf("%d
",s);
        }
    }
}