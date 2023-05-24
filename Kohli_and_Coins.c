#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%10==0)
    printf("%d",n/10);
    else if(n%5==0)
    printf("%d",(n/10)+1);
    else 
    printf("-1");
}