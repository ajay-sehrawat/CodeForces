#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    int a[n][2];
    for ( int i=0; i<n; i++ )
        for ( int j=0; j<2; j++ )
            cin>>a[i][j];

    //sort
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++) { if(a[i][0]>a[j][0])
            {
                //sort 1st column
                int temp = a[i][0];
                a[i][0] = a[j][0];
                a[j][0] = temp;

                //sort 2nd column
                temp = a[i][1];
                a[i][1] = a[j][1];
                a[j][1] = temp;
            }
        }
    }

    //Check if s > a[0][0] if yes add its power and check next else NO
    for ( int i=0; i<n; i++)
    {
        if ( s > a[i][0] )
            s += a[i][1];
        else{
            cout<<"NO";
            break;
        }
    }
    if ( s > a[n-1][0] ) //Check with last as if powers are grater or not
        cout<<"YES";
    
}