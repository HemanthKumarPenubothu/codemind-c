#include<stdio.h>
int main()
{
    int n,r,c=0,j=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r%2==0)
        c++;
        else
        j++;
        n=n/10;
    }
    if(c>0 && j==0)
    printf("Even");
    else if(c==0 && j>0)
    printf("Odd");
    else
    printf("Mixed");
}