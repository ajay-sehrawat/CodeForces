#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, val = 0, pos = 1, sum = 0;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < k; i++)
        val += a[i];

    sum = val;

    for ( int i=k; i<n; i++ )
    {
            val = val - a[i-k] + a[i];
            if ( val <= sum )
            {
                sum = val;
                pos = i - k + 2;
            }           
    }
    cout<<pos;
    return 0;
}