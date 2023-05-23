#include<stdio.h>
int main()
{
    int i,n,j,c,a=0,x;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   c=0;
        for(j=1;j<=i;j++)
        {
           if(i%j==0)
           { 
               c=c+1;
           }
        }
        if(c==9)
        {   
            a=a+1;
            printf("%d ",i);
        }
    }
    printf("
Total=%d",a);
    
    
}