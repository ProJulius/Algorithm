#include <bits/stdc++.h>
using namespace std;
const int maxx = 1e6 + 5;

#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int stop = 0, n;
int a[maxx];
void xuat()
{
    for (int i = 1; i <= n; i++)
    {
        cout << a[i];
    }
    cout << " ";
}

void sinhhoanvi()
{
    int i = n - 1;
    while (i > 0 && a[i] > a[i + 1])
    {
        i--;
    }
    if (i == 0)
        stop = 1;
    else
    {
        int k = n;
        while (a[k] < a[i])
        {
            k--;
        }
        swap(a[k], a[i]);
        sort(a + i + 1, a + n + 1);
    }
}

int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            a[i] = i;
        }
        while (stop == 0)
        {
            xuat();
            sinhhoanvi();
        }
        cout << '\n';
        stop = 0;
    }
}