#include <bits/stdc++.h>
using namespace std;

#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
#define ll long long

int a[1000006] = {0};

int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for(int i = 0; i < n ; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i = 0; i < n ; i++)
        {
            cout << a[i] << " ";
        }
        cout << "\n";
    }
}