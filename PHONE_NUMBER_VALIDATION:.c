#include<stdio.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    if(n>=1000000000 && n<=9999999999)
    printf("Valid");
    else
    printf("Invalid");
}