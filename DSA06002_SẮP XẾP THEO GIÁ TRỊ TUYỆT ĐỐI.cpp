#include <bits/stdc++.h>
using namespace std;
const int maxx = 1e5 + 5;

#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

struct so
{
    int a,b;
};

bool tmp(so x, so y)
{
    return x.b < y.b;
}
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
        vector<pair<int, int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            v[i].first = abs(a[i] - k);
            v[i].second = i;
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
            cout << a[v[i].second] << " ";
        cout << endl;
    }
}