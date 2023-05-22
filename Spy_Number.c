#include<stdio.h>
int main()
{
    int a,sum=0,pro=1,rem;
    scanf("%d",&a);
    while(a>0){
        rem=a%10;
        sum=sum+rem;
        pro=pro*rem;
        a=a/10;
    }
    if(sum==pro)
    printf("Spy Number");
    else
    printf("Not Spy Number");
}