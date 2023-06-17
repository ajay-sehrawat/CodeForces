//Time limit exceed on test 18 
//T Prime is when the sqrt of the number is a prime number

#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long int n;
        int count = 0;
        scanf("%lld", &n);
        double check = sqrt(n);

        // Check string for a decimal if decimal print NO
        int x = check;
        double temp = check - x;
        if (temp > 0)
        {
            printf("NO\n");
        }
        else
        {
            for (int i = 2; i <= x / 2; i++)
            {
                if (x % i == 0)
                    count++;
            }
            if (count == 0 && x != 1) // As 1 is not T Prime which will pass from this case so special condition
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}
