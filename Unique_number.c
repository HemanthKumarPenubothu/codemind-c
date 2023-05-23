#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^
]s",a);
    int i,j,l=strlen(a),c,z;
    for(i=0;i<l;i++)
    {
        c=0;
        for(j=0;j<l;j++)
        {
            if(i!=j && a[i]==a[j])
            {
                c++;
            }
        }
        if(c==0)
        {
            z++;
        }
    }
    if(z==l)
    printf("Unique Number");
    else
    printf("Not Unique Number");
}