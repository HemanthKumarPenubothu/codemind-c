#include<stdio.h>
int main()
{
    int n,i,j,c,min;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(min>a[i])
        {
            min=a[i];
        }
    }
    for(j=min;j>=1;j--)
    {
        c=0;
        for(i=0;i<n;i++)
      {
          if(a[i]%j==0)
          {
              c++;
          }
      }
      if(c==n)
      {
          printf("%d",j);
          break;
}
}
}