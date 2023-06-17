#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;

    int arr[n], temp = 0;

    for ( int i=1; i<=n; i++ )
    {
        cin>>arr[i];
    }
    int value = arr[m], count = 0;
    for ( int i=1; i<=n; i++){
        if ( arr[i] >= arr[m] && arr[i] != 0 )
            count++;
    }
    cout<<count;
}