#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==(b+c) || a==(b+d) || a==(c+d) || a==b || a==c || a==d || a==(b+c+d))
    printf("YES");
    else
    printf("NO");
}