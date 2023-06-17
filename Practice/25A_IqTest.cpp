#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s[n];
    int codd = 0, ceven = 0, lodd = 0, leven=0;
    for ( int i=0; i<n; i++ )
    {
        cin>>s[i];
        if ( s[i]%2 == 0 ){
            ceven++;
            leven = i+1; //as number start from 1
        }
        else{
            codd++;
            lodd = i+1;
        }
    }
    if ( ceven == 1 )
        cout<<leven;
    else
        cout<<lodd;
    
}