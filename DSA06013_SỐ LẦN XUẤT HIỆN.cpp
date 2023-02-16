#include <bits/stdc++.h>
using namespace std;

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
        map <int,int> b;
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            b[a[i]]++;
        }
        if(b[k] == 0) cout << -1 << "\n";
        else cout << b[k] << "\n";
    }
}