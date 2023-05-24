#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j,co;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c;
    scanf("%d",&c);
    for(i=0;i<n;i++)
    {
      co=0;
      for(j=0;j<n;j++)
      {
          if(a[i]+c>=a[j])
          {
              co++;
          }
      }
      if(co==n)
      {
          printf("True ");
      }
      else
      {
          printf("False ");
      }
    }
}