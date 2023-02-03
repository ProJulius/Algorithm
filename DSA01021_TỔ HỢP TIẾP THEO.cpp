#include <bits/stdc++.h>
using namespace std;
const int maxx = 1e6 + 5;

#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int stop = 0, n, k;
int a[maxx], b[maxx];

int check(int k1, int k2, int a[])
{
    for (int i = 1; i <= k1; i++)
    {
        if (a[i] == k2)
            return 0;
    }
    return 1;
}
void sinhtohop(int a[], int k)
{
    if (a[k] == n && a[1] == n-k+1)
        cout << k << "\n";
    else
    {
        int i = k;
        while (i >= 1 && a[i] == n - k + i)
        {
            i--;
        }
        if (i == 0)
        {
            for (int i = 1; i <= k; i++)
            {
                a[i] = i;
            }
        }
        else
        {
            a[i]++;
            for (int j = i + 1; j <= k; j++)
            {
                a[j] = a[j - 1] + 1;
            }
        }
        int dem = 0;
        for (int i = 1; i <= k; i++)
        {
            if (check(k, b[i], a) == 1)
                dem++;
        }
        cout << dem << "\n";
    }
}

int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        int a[k + 1];
        for (int i = 1; i <= k; i++)
        {
            cin >> a[i];
            b[i] = a[i];
        }
        sinhtohop(a, k);
        cout << "\n";
    }
}