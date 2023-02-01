#include <bits/stdc++.h>
using namespace std;
const int maxx = 1e6 + 5;

#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

vector<int> b(maxx, 0);
int stop = 0, dem = 0;

int kiemtra(int n, int k, int a[])
{
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(b[i] == 1) sum += a[i];
    }
    if (sum == k)
    {
        return 1;
    }
    return 0;
}

void sinhnhiphan(int n, int k, int a[])
{
    int i = n - 1;
    while (i >= 0 && b[i] == 1)
    {
        b[i] = 0;
        i--;
    }
    if (i < 0)
        stop = 1;
    else
        b[i] = 1;
    while (stop == 0)
    {
        if(kiemtra(n,k,a) == 1) 
        {
            for(int i = 0 ; i < n ; i++)
            {
                if(b[i] == 1) cout << a[i] << ' ';
            }
            cout << "\n";
            dem++;
        }
        sinhnhiphan(n,k,a);
    }
}

int main()
{
    faster;
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n ; i++)
    {
        cin >> a[i];
    }
    sinhnhiphan(n,k,a);
    cout << dem;
}