#include "bits/stdc++.h"

using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for ( int i=0; i<n; i++ )
    {
        cin>>a[i];
    }
    int val = 0;
    for ( int i=0; i<n-1; i++ )
    {
        if ( a[i] + 1 != a[i+1] )
        {
            val = i;
            break;
        }
    }
    for ( int i=val; i<n-1; i++ )
    {
        if ( a[i] - 1 == a[i+1] )
        
    }

    return 0;
}