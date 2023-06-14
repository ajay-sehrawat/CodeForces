#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d", &n);

    int x[n];
    for ( int i=0; i<n; i++ )
        cin>>x[i];
    sort(x, x+n);
    int q;
    scanf("%d", &q);

    while (q-- > 0 )
    {
        long long int z, count = 0;
        cin>>z;
        count = upper_bound(x, x+n, z)-x; //this x minuses base address.
        cout<<count<<endl;
    }
    return 0;
}