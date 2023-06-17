#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int s[t];

    int count = 0;

    int c_4=0, c_3=0, c_2=0, c_1=0;
    for ( int i=0; i<t; i++ )
    {
        cin>>s[i];
        if ( s[i] == 4 )
            c_4++;
        if ( s[i] == 3 )
            c_3++;
        if ( s[i] == 2 )
            c_2++;
        if ( s[i] == 1 )
            c_1++;
    }

    count += c_4;
    
    while ( c_1!=0 && c_3!=0)
    {
        count++;
        c_1--;
        c_3--;
    }
    if  ( c_1==0 && c_3!=0){
        count += c_3;
        c_3 = 0;
    }

    count += c_2/2;
    if ( c_2%2 != 0 )
    {
        if ( c_1 <= 2 )
        {
            count++;
            c_2 = 0;
            c_1 = 0;
        }
        else
        {
            c_1 -= 2;
            count++;
            c_2 = 0;
        }
    }
    if ( c_1 != 0)
    {
        count += c_1/4;
        if ( c_1%4 != 0 )
            count++;
    }
    cout<<count;
}
