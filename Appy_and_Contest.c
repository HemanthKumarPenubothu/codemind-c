#include<stdio.h>
int main()
{
    int tc,n,a,b,k,c,i;
    scanf("%d",&tc);
    for(i=1;i<=tc;i++)
    {
        scanf("%d%d%d%d",&n,&a,&b,&k);
        c=(n/a)+(n/b);
        if(c>=k)
        printf("Win
");
        else
        printf("Lose
");
    }
    
}