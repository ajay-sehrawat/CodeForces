#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, s;
    scanf("%d%d", &n, &s);

    int intial = 1, end = 10;

    while ( n > 1 )
    {
        intial *= 10;
        end *= 10;
        n--;
    }
    cout<<intial<<" "<<end<<endl;
    int sum = 0, val1 = 0, val2 = 0, temp = 0;
    for ( int i = intial; i<end; i++ )
    {
        temp = i, sum = 0, val1 = 0, val2 = 0;
        while ( temp != 0 )
        {
            sum += temp%10;
            temp /= 10;
        }
        if ( sum == s && val1 == 0 )
            val1 = sum;
        else if ( sum == s && val2 == 0 )
        {
            val2 =sum;
            break;
        }     
    }
    cout<<val1<<" "<<val2;
    return 0;
}