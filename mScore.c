#include <stdio.h>
#include <string.h>

int removeSubstrings( char* s, int len, char first, char second, int points ) {
    int total_points = 0;
    char stack[len + 1];
    int top = -1;
    
    for ( int i = 0; i < len; i++ ) {
        if ( s[i] == second && top >= 0 && stack[top] == first ) {
            top--;
            total_points += points; 
        } else {
            stack[++top] = s[i]; 
        }
    }
    stack[++top] = '\0'; 
    strcpy( s, stack ); 
    return total_points;
}

int maximumGain( char* s, int x, int y ) {
    int total_points = 0;
    int len = strlen( s );

        if ( x > y ) {
        total_points += removeSubstrings( s, len, 'a', 'b', x );
        total_points += removeSubstrings( s, strlen(s), 'b', 'a', y );
        } else {
        total_points += removeSubstrings( s, len, 'b', 'a', y );
        total_points += removeSubstrings( s, strlen(s), 'a', 'b', x );
        }

    return total_points;
}

int main () {
    char s1[] = "cdbcbbaaabab";
    int x1 = 4, y1 = 5;
    printf( "Output 1: %d\n", maximumGain( s1, x1, y1 ) ); 
    
    char s2[] = "aabbaaxybbaabb";
    int x2 = 5, y2 = 4;
    printf( "Output 2: %d\n", maximumGain( s2, x2, y2 ) );

    char s3[] = "bbaaxybbabaabba";
    int x3 = 5, y3 = 4;
    printf( "Output 3: %d\n", maximumGain( s3, x3, y3 ) );
    
    return 0;
}
