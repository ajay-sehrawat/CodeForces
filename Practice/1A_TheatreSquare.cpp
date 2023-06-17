#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,a;
    cin>>n>>m>>a;
    
    cout<<(m/a + (m%a != 0))*(n/a + (n%a != 0));    //ceil(m/a) * ceil(n/a) 
}