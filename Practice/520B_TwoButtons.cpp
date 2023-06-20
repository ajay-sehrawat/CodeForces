#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    scanf("%d%d", &n, &m);

    // Need to make number m from n;
    int count = 0, temp = 0;

    while (m > n)
    {
        if (m % 2)
        {
            count++;
            m++;
        }
        m /= 2;
        count++;
    }
    cout << count + n - m;
    return 0;
}