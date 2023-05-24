#include <stdio.h>
int main ( )
{
    int n ;
    scanf ( "%d" , &n ) ;
    int a [ n ] , i , m1 = 0 , m2 = 0 , m3 = 0 ;
    for ( i = 0 ; i < n ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
    }
    for ( i = 0 ; i < n ; i++ )
    {
        if ( a [ i ] > m1 )
        {
            m1 = a [ i ] ;
        }
    }
    for ( i = 0 ; i < n ; i++ )
    {
        if ( a [ i ] > m2 && a [ i ] != m1 )
        {
            m2 = a [ i ] ;
        }
    }
    for ( i = 0 ; i < n ; i++ )
    {
        if ( a [ i ] > m3 && a [ i ] != m2 && a [ i ] != m1 )
        {
            m3 = a [ i ] ;
        }
    }
    if ( m3 == 0 )
    {
        printf ( "It is not possible" ) ;
    }
    else
    {
        printf ( "%d" ,m3);
        
    }
}