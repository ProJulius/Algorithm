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
        int n, m;
        cin >> n >> m;
        int a[n],  b[m], c[maxx]= {0};
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            c[a[i]]++;
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
            c[b[i]]++;
        }
        for (int i = 0; i < maxx; i++)
        {
            if(c[i] > 0) cout << i << " "; 
        }
        cout << endl;
        for (int i = 0; i < maxx; i++)
        {
            if(c[i] > 1) cout << i << " "; 
        }
        cout << endl;
    }
}