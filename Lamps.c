#include<stdio.h>
int main(){
    int n,k,x,y,temp1,temp2,temp3;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(y>x) 
    printf("%d",x*n);
    else
    {
        temp1=k*x;
        temp2=n-k;
        temp3=temp2*y;
        printf("%d",temp1+temp3);
    }
}