#include<stdio.h>
int main()
{
    int a,rem,dig=0,s=0;
    scanf("%d",&a);
    start:
    s=0;
    dig=0;
    while(a>0)
    {
        rem=a%10;
        dig++;
        s=s+rem;
        a=a/10;
    }
    if(dig!=1)
    {
        a=s;
        goto start;
    }
    printf("%d",s);
}