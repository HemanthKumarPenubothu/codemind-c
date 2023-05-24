#include<stdio.h>
int main()
{
    int n,c;
    scanf("%d",&n);
    int a=0,b=1;
    for(int i=1;i<=n;i++)
    {
        
        c=a+b;
        if(a==n)
        {
            printf("True");
            return 0;
        }
        a=b;
        b=c;
    }
    printf("False");
}