#include <bits/stdc++.h>
using namespace std;

#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        ll dem = 0;
        int d = 0, c = n - 1;
        while (d < c)
        {
            int chay1 = 0, chay2 = 0, chay3 = 0;
            if (a[d] + a[c] == k)
            {
                int kt1 = a[d], kt2 = a[c];
                if (kt1*2 == k)
                {
                    while (a[d] == kt1)
                        d++, chay3++;
                    dem += chay3*(chay3-1)/2;    
                }
                else
                {
                    while (a[d] == kt1)
                        d++, chay1++;
                    while (a[c] == kt2)
                        c--, chay2++;
                    dem += chay1 * chay2;
                }
            }
            else if (a[d] + a[c] < k)
                d++;
            else
                c--;
        }
        cout << dem << "\n";
    }
}