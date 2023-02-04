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

int check(int a[],int b[])
{
    for (int i = 1; i <= k; i++)
    {
        if (a[i] != b[i])
            return 0;
    }
    return 1;
}

void sinhtohop()
{
    int i = k;
    while (i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if (i == 0)
        stop = 1;
    else
    {
        a[i]++;
        for (int j = i + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
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
        for (int i = 1; i <= k; i++)
        {
            cin >> b[i];
            a[i] = i;
        }
        int dem = 1;
        while (stop == 0)
        {
            if(check(a,b) == 1) {
                cout << dem << "\n";
                break;
            }
            else dem++;
            sinhtohop();
        }
        cout << "\n";
        stop = 0;
    }
}