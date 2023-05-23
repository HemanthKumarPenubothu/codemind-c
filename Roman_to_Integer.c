#include <stdio.h>
#include <string.h>
int main()
{
   char rom[30];
   int a[30],i,k,len;
   scanf("%s",rom);
   len=strlen(rom);
   for(i=0;i<len;i++)
   {
       switch(rom[i])
       {
           case 'I':a[i]=1;
           break;
           case 'V':a[i]=5;
           break;
           case 'X':a[i]=10;
           break;
           case 'L':a[i]=50;
           break;
           case 'C':a[i]=100;
           break;
           case 'D':a[i]=500;
           break;
           case 'M':a[i]=1000;
           break;
           default:printf("invalid choice");
       }
   }
   k=a[len-1];
   for(i=len-1;i>0;i--)
   {
       if(a[i]>a[i-1])
       {
           k=k-a[i-1];
       }
       if(a[i]<=a[i-1])
       {
           k=k+a[i-1];
       }
   }
   printf("%d",k);
}