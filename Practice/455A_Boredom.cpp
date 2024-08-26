#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    scanf("%d", &t);

    int a[t];
    for ( int i=0; i<t; i++ )
    {
        cin>>a[i];
    }
    sort( a, a+t);

    int freq[t], temp = 0, sum = 0;
    for ( int i = 0; i<t; i++ )
    {
        for ( int j=0; j<t; j++ )
        {
            if ( a[i] == a[j] )
            {

                temp += a[j];
            }
        }

    }

    return 0;
}