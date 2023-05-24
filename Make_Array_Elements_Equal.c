#include <stdio.h>
int main ( ) 
{
    int n ;
    scanf ( "%d" , &n ) ;
    int a [ n ] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
    }
    int t = a [ 0 ] , c = 0 ;
    for ( int i = 0 ; i < n ; i++ )
    {
        if ( a [ i ] == t ) 
        {
            c++ ;
        }
    }
    if ( c == n )
    {
        printf  ( "0" ) ;
    }
    else
    {
        int d , p = 0 ;
        for ( int i = 0 ; i < n ; i++ )
        {
            d = 0 ;
            for ( int j = 0 ; j < n ; j++ )
            {
                if ( a [ i ] == a [ j ] ) 
                {
                    d++ ;
                }
            }
            if ( d > p )
            {
               p = d ;
            }
        }
        printf ( "%d" , p ) ;
}
}