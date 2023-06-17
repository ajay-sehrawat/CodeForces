#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    float x = b/m;
    int farea = 0, fareb = 0, fare = 0;
    if ( x >= a )
    {
        fare = a*n;
        printf("%d", fare);
    }  
    else
    {
        while ( n >= m  )
        {
            n = n - m;
            farea += b;
        }
        fareb = farea;
        farea = farea+b;
        while( n-- > 0 )
        {
            fareb += a;
        }
        if ( farea > fareb )
        printf("%d",fareb);
        else
        printf("%d",farea);
    }
    

    return 0;
}