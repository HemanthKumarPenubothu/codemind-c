#include<stdio.h>
int main()
{
    int i,a,rem,sq,sum=0;
    scanf("%d",&a);
    sq=a*a;
    while(sq>0){
        rem=sq%10;
        sum=sum+rem;
        sq=sq/10;
    }
    if(sum==a)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}