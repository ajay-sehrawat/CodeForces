#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while ( t-- > 0 )
    {
        int n,k;
        cin>>n>>k;

        int ans = (k - 1) / (n - 1);
        cout<<k + ans<<endl;
    }
    
    return 0;
}