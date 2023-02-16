#include <bits/stdc++.h>
using namespace std;
const int k = 1e6 + 5;
int a[k];

#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int chatnhiphan(int a[], int x, int y)
{
    int L = 1, R = x, chay;
    while (L <= R)
    {
        chay = (L + R) / 2;
        if (a[chay] < y)
        {
            L = chay + 1;
        }
        else if (a[chay] > y)
        {
            R = chay - 1;
        }
        else
            return 1;
    }
    return -1;
}

int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        if (chatnhiphan(a, n, m) == 1)
            cout << "1"
                 << "\n";
        else
            cout << "-1" << '\n';
    }
}