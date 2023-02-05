#include <bits/stdc++.h>
using namespace std;
const int maxx = 1e5 + 5;

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
        int n;
        cin >> n;
        int a[n + 5], b[n + 5];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);
        for (int i = 1; i <= n; i++)
        {
            if (a[i] != b[i])
            {
                cout << i << " ";
                break;
            }
        }
        for (int i = n; i >= 1; i--)
        {
            if (a[i] != b[i])
            {
                cout << i << " ";
                break;
            }
        }
        cout << endl;
    }
}