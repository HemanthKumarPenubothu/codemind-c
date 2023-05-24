#include <stdio.h>
int main ( )
{
    int n ;
    scanf ( "%d" , &n ) ;
    int a [ n ] ;
    float s = 0 , t = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
    }
    for ( int  i = 0 ; i < n ; i++ )
    {
        int c = 0 ;
        for ( int j = 0 ; j < n ; j++ )
        {
            if ( a [ i ] == a [ j ] )
            {
                c++ ;
            }
        }
        if ( c == a [i ] ) 
        {
            s = s + a [ i ] ;
            t++ ;
            for(int k=0; k<n; k++)
            {
                if ( a [ k ] == a [ i ] )
                {
                    a [ k ] = 0 ;
                }
            }
        }
    }
    if ( s > 0 )
    {
        printf ( "%0.2f" , s / t ) ;
    }
    else
    {
        printf ( "-1" ) ;
    }
}
