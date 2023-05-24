#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int i,j,l=strlen(a),c=0;
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            if(a[i]==a[j] && i!=j)
            {
                c++;
            }
        }
    }
    if(c==0)
    printf("Unique Number");
    else
    printf("Not Unique Number");
}