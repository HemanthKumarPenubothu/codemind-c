#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%3==0)
    printf("NORMAL");
    else if((a+1)%3==0)
    printf("SMALL");
    else
    printf("HUGE");
}