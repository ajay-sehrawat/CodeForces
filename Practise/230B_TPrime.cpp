#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, count=0;
        cin >> n;
        float check = sqrt(n);
        for ( int i=2; i<check/2; i++ )
        {
            if ( check%i == 0 )
                count++;
        }
        if ( count == 0 )
            cout<<"YES"<<endl;
        else
            cout<<"NO";
    }
}
