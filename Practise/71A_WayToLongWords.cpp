#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int count = 0;
        for ( int i=0; s[i]; i++ ){
            count++;
        }
        if ( count <= 10 )
            cout<<s<<endl;
        else
            cout<<(s[0])<<(count-2)<<s[count-1]<<endl;
    }
}