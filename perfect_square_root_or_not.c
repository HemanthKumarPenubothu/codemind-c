#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d", &n);
    for(i=1;i<=n/2;i++)
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