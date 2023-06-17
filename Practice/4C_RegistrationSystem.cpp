#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s[t];
    int a[t] = {0};
    for (int i = 0; i < t; i++)
    {
        cin >> s[i];
    }

    // Check and apend number at end
    int num = 0;
    for (int i = 0; i < t; i++)
    {
        if (a[i] == 0)
        {
            for (int j = i; j < t; j++)
            {
                if (s[i] == s[j] && a[j] == 0)
                {
                    a[j] = num++;
                }
            }
            num = 0;
        }
    }
    for (int i = 0; i < t; i++)
    {
        if (a[i] == 0)
            cout << "OK" << endl;
        else
        {
            cout << s[i] << a[i] << endl;
        }
    }
}