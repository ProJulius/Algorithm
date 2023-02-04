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
        int n, x;
        cin >> n;
        int a[maxx];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        for (int i = n - 1; i >= 0; i--)
        {
            if (i <= n / 2)
                break;
            cout << a[i] << " " << a[n - i - 1] << " ";
        }
        if(n % 2 == 0) cout << a[n/2] << " " << a[n-n/2-1];
        else cout << a[n/2];
        cout << "\n";
    }
}