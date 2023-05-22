#include<stdio.h>
int main()
{
    int a,b,i,c=0,d=0,rem,t;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++){
        t=i;
        d=0;
        c=0;
        if(i%10==0)
        continue;
        
        while(t>0)
        {
            rem=t%10;
            
            if(i%rem==0){
                d++;
            }
            c++;
            t=t/10;
        }
        //printf("%d %d %d
",i,c,d);
        if(c==d)
        {
            printf("%d ",i);
        }
    }
}

