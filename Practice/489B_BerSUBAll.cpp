#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n;
    int b[n];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    cin >> m;
    int g[m], freq[m], count = 0;
    for (int j = 0; j < m; j++)
    {
        cin >> g[j];
        freq[j] = 1;
    }
    sort(b, b+n);
    sort(g, g+m);
    for ( int i =0; i<n; i++ )
    {
        for ( int j=0; j<m; j++ )
        {
            if ( freq[j] == 1 && (abs(b[i] - g[j]) <= 1) ) 
            {
                count++;
                freq[j] = 0;
                break;
            }
            else if ( b[i] + 2 < g[j] ) // At least 2 difference should be there before break as +- 1 allowed, For the code to break early
                break;
        }
    }
    cout<<count;
    return 0;
}