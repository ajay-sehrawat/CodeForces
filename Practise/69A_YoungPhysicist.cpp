#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int arr[t][3];
    for ( int i=0; i<t; i++ )
        for ( int j=0; j<3; j++ )
            cin>>arr[i][j];
           
            

    //IF total sum is zero than YES equilibrium
    //Check if each column sum is zero or not
    int sum;
    for ( int i=0; i<3; i++ )
    {
        sum = 0;
        for ( int j=0; j<t; j++ )
        {
            sum += arr[j][i];
        }
        if ( sum != 0 )
        {
            cout<<"NO";
            break;
        }
            
    }
    if ( sum == 0)
        cout<<"YES";
}