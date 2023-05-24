#include <stdio.h>
int main()
{
    int a,b,sum;
    scanf("%d%d",&a,&b);
    sum=(a>b)?a:b;
    while(1)
    {
        if((sum%a==0)&&(sum%b==0))
        {
            printf("%d",sum);
            break;
        }
        sum++;
    }
    return 0;
}