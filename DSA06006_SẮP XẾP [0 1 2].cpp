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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " "; 
        }
        cout << endl;
    }
}