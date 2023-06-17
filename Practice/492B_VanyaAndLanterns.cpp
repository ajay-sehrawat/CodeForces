#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,n;
    cin>>n>>l;
    int a[n];
    for ( int i=0; i<n; i++ )
        cin>>a[i];
    
    sort( a, a+n);

    //find max difference between two lanterns and its half is radius
     long double mdiff = 0;
    for ( int i=0 ;i<n-1; i++ )
    {
        if ( a[i+1]-a[i] > mdiff )
            mdiff = a[i+1] - a[i];
    }
     long double x = mdiff/2;

    if ( x > l-a[n-1] && x > a[0] )
        cout<<fixed<<setprecision(9)<<x;
    else if ( l-a[n-1] > x && l-a[n-1] > a[0])
        cout<<l-a[n-1];
    else
        cout<<a[0];
}