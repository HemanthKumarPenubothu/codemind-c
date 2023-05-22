#include<stdio.h>
int main()
{
    int a,c;
    scanf("%d",&a);
    for(int i=1;i<a;i++)
    {
        if(i*(i+1)==a)
        {
            c=1;
            break;
        }
    }
    if(c==1)
    printf("YES");
    else
    printf("NO");
}