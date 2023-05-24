#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,a,b,k,c=0;
        scanf("%d%d%d%d",&n,&a,&b,&k);
        if(a%b==0)
        c=a;
        else if(b%a==0)
        c=b;
        else
        c=a*b;
        int d,e,f;
        d=n/c;
        e=n/a;
        f=n/b;
        e=e-d;
        f=f-d;
        if(e+f>=k)
        {
            printf("Win
");
        }
        else
        {
            printf("Lose
");
        }
    }
}