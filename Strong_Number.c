#include<stdio.h>
int main()
{
    int i,n,r,f,s=0,j;
    scanf("%d",&n);
    j=n;
    while(j>0)
    {
        r=j%10;
        f=1;
        for(i=1;i<=r;i++)
        {
            f=f*i;
        }
        j=j/10;
        s=s+f;
    }
    if(s==n)
    printf("The number %d is a strong number",n);
    else
    printf("The number %d is not a strong number",n);
}