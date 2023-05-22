#include<stdio.h>
int main()
{
    int a=0,b=1,n,sm,lg,smc,lgc,i=0,c=0;
    scanf("%d",&n);
    while(1)
    {
    	i++;
    	
        if(a<n){
        	sm=a;
        	
		}
		if(a>n){
			lg=a;
			
			break;
		}
        c=a+b;
        a=b;
        b=c;
    }
    if((n-sm)==(lg-n)){
        printf("%d %d",sm,lg);
    }
    else if(n-sm>lg-n){
    	printf("%d",lg);
	}
	else
	printf("%d",sm);
}