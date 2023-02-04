#include <bits/stdc++.h>
using namespace std;
const int maxx = 1e6 + 5;

#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int stop = 0, n;
int a[maxx], b[maxx];
int check(int a[], int b[])
{
    for (int i = 1; i <= n; i++)
    {
        if(a[i] != b[i]) return 0;
    }
    return 1;
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
        int dem = 1;
        for (int i = 1; i <= n; i++)
        {
            cin >> b[i];
            a[i] = i;
        }
        while (stop == 0)
        {
            if(check(a,b) == 1) {
                cout << dem << "\n";
                break;
            }
            else dem++;
            sinhhoanvi();
        }
    }
}