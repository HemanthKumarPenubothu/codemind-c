#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d", &n);
    if(n==1 || n==0)
    {
        printf("True");
        c=1;
    }

    for(i=2;i<=n/2;i++)
    {
        if(n==i*i)
        {
            printf("True");
            c=1;
            break;
        }
    }
    if(c==0)
    printf("False");
    

}