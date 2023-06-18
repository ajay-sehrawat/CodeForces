#include "bits/stdc++.h"

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int val = 1;

    // First check for decreasing sequence, then check for inc seq after dec seq
    // Reverse the dec to inc seq and check for sort
    int dec = 0, inc = n-1;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            dec = i;
            break;
        }
    }
    for (int i = dec; i < n - 1; i++)
    {
        if (a[i] < a[i + 1])
        {
            inc = i;
            break;
        }
    }
    
    sort(a+dec, a+inc+1);
    
    for (int i = 0; i < n-1; i++)
    {
        if ( a[i] > a[i+1] )
        {
            val = 0;
            break;
        }
    }
    if ( val == 0 )
        cout<<"no";
    else
    {
        cout<<"yes"<<endl;
        cout<<dec+1<<" "<<inc+1;
    }
    return 0;
}